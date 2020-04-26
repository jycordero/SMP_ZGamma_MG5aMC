#include "SampleAnalyzer/User/Analyzer/user.h"
using namespace MA5;

bool user::Initialize(const MA5::Configuration& cfg,
                      const std::map<std::string,std::string>& parameters)
{
  // Initializing PhysicsService for MC
  PHYSICS->mcConfig().Reset();

  // definition of the multiparticle "hadronic"
  PHYSICS->mcConfig().AddHadronicId(-5);
  PHYSICS->mcConfig().AddHadronicId(-4);
  PHYSICS->mcConfig().AddHadronicId(-3);
  PHYSICS->mcConfig().AddHadronicId(-2);
  PHYSICS->mcConfig().AddHadronicId(-1);
  PHYSICS->mcConfig().AddHadronicId(1);
  PHYSICS->mcConfig().AddHadronicId(2);
  PHYSICS->mcConfig().AddHadronicId(3);
  PHYSICS->mcConfig().AddHadronicId(4);
  PHYSICS->mcConfig().AddHadronicId(5);
  PHYSICS->mcConfig().AddHadronicId(21);

  // definition of the multiparticle "invisible"
  PHYSICS->mcConfig().AddInvisibleId(-16);
  PHYSICS->mcConfig().AddInvisibleId(-14);
  PHYSICS->mcConfig().AddInvisibleId(-12);
  PHYSICS->mcConfig().AddInvisibleId(12);
  PHYSICS->mcConfig().AddInvisibleId(14);
  PHYSICS->mcConfig().AddInvisibleId(16);

  // ===== Signal region ===== //
  Manager()->AddRegionSelection("myregion");

  // ===== Selections ===== //

  // ===== Histograms ===== //
  Manager()->AddHisto("1_THT", 40,0.0,500.0);
  Manager()->AddHisto("2_MET", 40,0.0,500.0);
  Manager()->AddHisto("3_SQRTS", 40,0.0,500.0);
  Manager()->AddHisto("4_PT", 40,0.0,1000.0);
  Manager()->AddHisto("5_ETA", 40,-7.0,7.0);
  Manager()->AddHisto("6_PT", 40,0.0,1000.0);
  Manager()->AddHisto("7_ETA", 40,-7.0,7.0);
  Manager()->AddHisto("8_M", 40,0.0,800.0);
  Manager()->AddHisto("9_DELTAR", 40,0.0,8.0);
  Manager()->AddHisto("10_PT", 40,0.0,800.0);
  Manager()->AddHisto("11_ETA", 40,-7.0,7.0);
  Manager()->AddHisto("12_PT", 40,0.0,650.0);
  Manager()->AddHisto("13_ETA", 40,-7.0,7.0);
  Manager()->AddHisto("14_PT", 40,0.0,650.0);
  Manager()->AddHisto("15_ETA", 40,-7.0,7.0);
  Manager()->AddHisto("16_M", 40,0.0,800.0);
  Manager()->AddHisto("17_M", 40,0.0,800.0);
  Manager()->AddHisto("18_M", 40,0.0,900.0);
  Manager()->AddHisto("19_M", 40,20.0,200.0);
  Manager()->AddHisto("20_DELTAR", 40,0.0,8.0);
  Manager()->AddHisto("21_DELTAR", 40,0.0,8.0);
  Manager()->AddHisto("22_DELTAR", 40,0.0,5.0);

  // No problem during initialization
  return true;
}

bool user::Execute(SampleFormat& sample, const EventFormat& event)
{
  MAfloat32 __event_weight__ = 1.0;
  if (weighted_events_ && event.mc()!=0) __event_weight__ = event.mc()->weight();

  if (sample.mc()!=0) sample.mc()->addWeightedEvents(__event_weight__);
  Manager()->InitializeForNewEvent(__event_weight__);

  // Clearing particle containers
  {
      _P_z_I1I_PTorderinginterstate_REG_.clear();
      _P_z_I1I_PTorderingallstate_REG_.clear();
      _P_a_I1I_PTorderingallstate_REG_.clear();
      _P_a_I1I_PTorderingfinalstate_REG_.clear();
      _P_l_m_I1I_PTorderingfinalstate_REG_.clear();
      _P_l_p_I1I_PTorderingfinalstate_REG_.clear();
      _P_zPTorderinginterstate_REG_.clear();
      _P_zPTorderingallstate_REG_.clear();
      _P_aPTorderingallstate_REG_.clear();
      _P_aPTorderingfinalstate_REG_.clear();
      _P_l_mPTorderingfinalstate_REG_.clear();
      _P_l_pPTorderingfinalstate_REG_.clear();
  }

  // Filling particle containers
  {
    for (MAuint32 i=0;i<event.mc()->particles().size();i++)
    {
      if (isP__zPTorderinginterstate((&(event.mc()->particles()[i])))) _P_zPTorderinginterstate_REG_.push_back(&(event.mc()->particles()[i]));
      if (isP__zPTorderingallstate((&(event.mc()->particles()[i])))) _P_zPTorderingallstate_REG_.push_back(&(event.mc()->particles()[i]));
      if (isP__aPTorderingallstate((&(event.mc()->particles()[i])))) _P_aPTorderingallstate_REG_.push_back(&(event.mc()->particles()[i]));
      if (isP__aPTorderingfinalstate((&(event.mc()->particles()[i])))) _P_aPTorderingfinalstate_REG_.push_back(&(event.mc()->particles()[i]));
      if (isP__l_mPTorderingfinalstate((&(event.mc()->particles()[i])))) _P_l_mPTorderingfinalstate_REG_.push_back(&(event.mc()->particles()[i]));
      if (isP__l_pPTorderingfinalstate((&(event.mc()->particles()[i])))) _P_l_pPTorderingfinalstate_REG_.push_back(&(event.mc()->particles()[i]));
    }
  }

  // Sorting particles
  // Sorting particle collection according to PTordering
  // for getting 1th particle
  _P_z_I1I_PTorderinginterstate_REG_=SORTER->rankFilter(_P_zPTorderinginterstate_REG_,1,PTordering);

  // Sorting particle collection according to PTordering
  // for getting 1th particle
  _P_z_I1I_PTorderingallstate_REG_=SORTER->rankFilter(_P_zPTorderingallstate_REG_,1,PTordering);

  // Sorting particle collection according to PTordering
  // for getting 1th particle
  _P_a_I1I_PTorderingallstate_REG_=SORTER->rankFilter(_P_aPTorderingallstate_REG_,1,PTordering);

  // Sorting particle collection according to PTordering
  // for getting 1th particle
  _P_a_I1I_PTorderingfinalstate_REG_=SORTER->rankFilter(_P_aPTorderingfinalstate_REG_,1,PTordering);

  // Sorting particle collection according to PTordering
  // for getting 1th particle
  _P_l_m_I1I_PTorderingfinalstate_REG_=SORTER->rankFilter(_P_l_mPTorderingfinalstate_REG_,1,PTordering);

  // Sorting particle collection according to PTordering
  // for getting 1th particle
  _P_l_p_I1I_PTorderingfinalstate_REG_=SORTER->rankFilter(_P_l_pPTorderingfinalstate_REG_,1,PTordering);

  // Histogram number 1
  //   * Plot: THT
  {
    Manager()->FillHisto("1_THT", PHYSICS->Transverse->EventTHT(event.mc()));
  }

  // Histogram number 2
  //   * Plot: MET
  {
    Manager()->FillHisto("2_MET", PHYSICS->Transverse->EventMET(event.mc()));
  }

  // Histogram number 3
  //   * Plot: SQRTS
  {
    Manager()->FillHisto("3_SQRTS", PHYSICS->SqrtS(event.mc()));
  }

  // Histogram number 4
  //   * Plot: PT ( z[1] ) 
  {
  {
    MAuint32 ind[1];
    for (ind[0]=0;ind[0]<_P_z_I1I_PTorderinginterstate_REG_.size();ind[0]++)
    {
      Manager()->FillHisto("4_PT", _P_z_I1I_PTorderinginterstate_REG_[ind[0]]->pt());
    }
  }
  }

  // Histogram number 5
  //   * Plot: ETA ( z[1] ) 
  {
  {
    MAuint32 ind[1];
    for (ind[0]=0;ind[0]<_P_z_I1I_PTorderinginterstate_REG_.size();ind[0]++)
    {
      Manager()->FillHisto("5_ETA", _P_z_I1I_PTorderinginterstate_REG_[ind[0]]->eta());
    }
  }
  }

  // Histogram number 6
  //   * Plot: PT ( a[1] ) 
  {
  {
    MAuint32 ind[1];
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
      Manager()->FillHisto("6_PT", _P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->pt());
    }
  }
  }

  // Histogram number 7
  //   * Plot: ETA ( a[1] ) 
  {
  {
    MAuint32 ind[1];
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
      Manager()->FillHisto("7_ETA", _P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->eta());
    }
  }
  }

  // Histogram number 8
  //   * Plot: M ( a[1] z[1] ) 
  {
  {
    MAuint32 ind[2];
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingallstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_z_I1I_PTorderingallstate_REG_.size();ind[1]++)
    {
    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingallstate_REG_[ind[0]]->momentum();
    q+=_P_z_I1I_PTorderingallstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("8_M", q.m());
    }
    }
  }
  }

  // Histogram number 9
  //   * Plot: DELTAR ( z[1] , a[1] ) 
  {
  {
    MAuint32 a[1];
    for (a[0]=0;a[0]<_P_z_I1I_PTorderingallstate_REG_.size();a[0]++)
    {
    MAuint32 b[1];
    for (b[0]=0;b[0]<_P_a_I1I_PTorderingallstate_REG_.size();b[0]++)
    {
      Manager()->FillHisto("9_DELTAR", _P_z_I1I_PTorderingallstate_REG_[a[0]]->dr(_P_a_I1I_PTorderingallstate_REG_[b[0]]));
    }
    }
  }
  }

  // Histogram number 10
  //   * Plot: PT ( a[1] ) 
  {
  {
    MAuint32 ind[1];
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
      Manager()->FillHisto("10_PT", _P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->pt());
    }
  }
  }

  // Histogram number 11
  //   * Plot: ETA ( a[1] ) 
  {
  {
    MAuint32 ind[1];
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
      Manager()->FillHisto("11_ETA", _P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->eta());
    }
  }
  }

  // Histogram number 12
  //   * Plot: PT ( l-[1] ) 
  {
  {
    MAuint32 ind[1];
    for (ind[0]=0;ind[0]<_P_l_m_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
      Manager()->FillHisto("12_PT", _P_l_m_I1I_PTorderingfinalstate_REG_[ind[0]]->pt());
    }
  }
  }

  // Histogram number 13
  //   * Plot: ETA ( l-[1] ) 
  {
  {
    MAuint32 ind[1];
    for (ind[0]=0;ind[0]<_P_l_m_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
      Manager()->FillHisto("13_ETA", _P_l_m_I1I_PTorderingfinalstate_REG_[ind[0]]->eta());
    }
  }
  }

  // Histogram number 14
  //   * Plot: PT ( l+[1] ) 
  {
  {
    MAuint32 ind[1];
    for (ind[0]=0;ind[0]<_P_l_p_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
      Manager()->FillHisto("14_PT", _P_l_p_I1I_PTorderingfinalstate_REG_[ind[0]]->pt());
    }
  }
  }

  // Histogram number 15
  //   * Plot: ETA ( l+[1] ) 
  {
  {
    MAuint32 ind[1];
    for (ind[0]=0;ind[0]<_P_l_p_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
      Manager()->FillHisto("15_ETA", _P_l_p_I1I_PTorderingfinalstate_REG_[ind[0]]->eta());
    }
  }
  }

  // Histogram number 16
  //   * Plot: M ( a[1] l+[1] ) 
  {
  {
    MAuint32 ind[2];
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_l_p_I1I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_l_p_I1I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("16_M", q.m());
    }
    }
  }
  }

  // Histogram number 17
  //   * Plot: M ( a[1] l-[1] ) 
  {
  {
    MAuint32 ind[2];
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_l_m_I1I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_l_m_I1I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("17_M", q.m());
    }
    }
  }
  }

  // Histogram number 18
  //   * Plot: M ( a[1] l+[1] l-[1] ) 
  {
  {
    MAuint32 ind[3];
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_l_p_I1I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    for (ind[2]=0;ind[2]<_P_l_m_I1I_PTorderingfinalstate_REG_.size();ind[2]++)
    {
    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_l_p_I1I_PTorderingfinalstate_REG_[ind[1]]->momentum();
    q+=_P_l_m_I1I_PTorderingfinalstate_REG_[ind[2]]->momentum();
      Manager()->FillHisto("18_M", q.m());
    }
    }
    }
  }
  }

  // Histogram number 19
  //   * Plot: M ( l+[1] l-[1] ) 
  {
  {
    MAuint32 ind[2];
    for (ind[0]=0;ind[0]<_P_l_p_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_l_m_I1I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    ParticleBaseFormat q;
    q+=_P_l_p_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_l_m_I1I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("19_M", q.m());
    }
    }
  }
  }

  // Histogram number 20
  //   * Plot: DELTAR ( a[1] , l+[1] ) 
  {
  {
    MAuint32 a[1];
    for (a[0]=0;a[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();a[0]++)
    {
    MAuint32 b[1];
    for (b[0]=0;b[0]<_P_l_p_I1I_PTorderingfinalstate_REG_.size();b[0]++)
    {
      Manager()->FillHisto("20_DELTAR", _P_a_I1I_PTorderingfinalstate_REG_[a[0]]->dr(_P_l_p_I1I_PTorderingfinalstate_REG_[b[0]]));
    }
    }
  }
  }

  // Histogram number 21
  //   * Plot: DELTAR ( a[1] , l-[1] ) 
  {
  {
    MAuint32 a[1];
    for (a[0]=0;a[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();a[0]++)
    {
    MAuint32 b[1];
    for (b[0]=0;b[0]<_P_l_m_I1I_PTorderingfinalstate_REG_.size();b[0]++)
    {
      Manager()->FillHisto("21_DELTAR", _P_a_I1I_PTorderingfinalstate_REG_[a[0]]->dr(_P_l_m_I1I_PTorderingfinalstate_REG_[b[0]]));
    }
    }
  }
  }

  // Histogram number 22
  //   * Plot: DELTAR ( l-[1] , l+[1] ) 
  {
  {
    MAuint32 a[1];
    for (a[0]=0;a[0]<_P_l_m_I1I_PTorderingfinalstate_REG_.size();a[0]++)
    {
    MAuint32 b[1];
    for (b[0]=0;b[0]<_P_l_p_I1I_PTorderingfinalstate_REG_.size();b[0]++)
    {
      Manager()->FillHisto("22_DELTAR", _P_l_m_I1I_PTorderingfinalstate_REG_[a[0]]->dr(_P_l_p_I1I_PTorderingfinalstate_REG_[b[0]]));
    }
    }
  }
  }

  return true;
}

void user::Finalize(const SampleFormat& summary, const std::vector<SampleFormat>& files)
{
}
