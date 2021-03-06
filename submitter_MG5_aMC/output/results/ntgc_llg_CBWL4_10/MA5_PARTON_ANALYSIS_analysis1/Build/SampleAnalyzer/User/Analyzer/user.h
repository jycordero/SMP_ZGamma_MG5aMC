#ifndef analysis_user_h
#define analysis_user_h

#include "SampleAnalyzer/Process/Analyzer/AnalyzerBase.h"
#include "SampleAnalyzer/Interfaces/root/RootMainHeaders.h"

namespace MA5
{
class user : public AnalyzerBase
{
  INIT_ANALYSIS(user,"MadAnalysis5job")

 public : 
  virtual MAbool Initialize(const MA5::Configuration& cfg,
                          const std::map<std::string,std::string>& parameters);
  virtual void Finalize(const SampleFormat& summary, const std::vector<SampleFormat>& files);
  virtual MAbool Execute(SampleFormat& sample, const EventFormat& event);

 private : 
  // Declaring particle containers
  std::vector<const MCParticleFormat*> _P_z_I1I_PTorderinginterstate_REG_;
  std::vector<const MCParticleFormat*> _P_z_I1I_PTorderingallstate_REG_;
  std::vector<const MCParticleFormat*> _P_a_I1I_PTorderingallstate_REG_;
  std::vector<const MCParticleFormat*> _P_a_I1I_PTorderingfinalstate_REG_;
  std::vector<const MCParticleFormat*> _P_l_m_I1I_PTorderingfinalstate_REG_;
  std::vector<const MCParticleFormat*> _P_l_p_I1I_PTorderingfinalstate_REG_;
  std::vector<const MCParticleFormat*> _P_zPTorderinginterstate_REG_;
  MAbool isP__zPTorderinginterstate(const MCParticleFormat* part) const {
     if ( part==0 ) return false;
     if ( !PHYSICS->Id->IsInterState(part) ) return false;
     if ( (part->pdgid()!=23) ) return false;
     return true; }
  std::vector<const MCParticleFormat*> _P_zPTorderingallstate_REG_;
  MAbool isP__zPTorderingallstate(const MCParticleFormat* part) const {
     if ( part==0 ) return false;
     if ( (part->pdgid()!=23) ) return false;
     return true; }
  std::vector<const MCParticleFormat*> _P_aPTorderingallstate_REG_;
  MAbool isP__aPTorderingallstate(const MCParticleFormat* part) const {
     if ( part==0 ) return false;
     if ( (part->pdgid()!=22) ) return false;
     return true; }
  std::vector<const MCParticleFormat*> _P_aPTorderingfinalstate_REG_;
  MAbool isP__aPTorderingfinalstate(const MCParticleFormat* part) const {
     if ( part==0 ) return false;
     if ( !PHYSICS->Id->IsFinalState(part) ) return false;
     if ( (part->pdgid()!=22) ) return false;
     return true; }
  std::vector<const MCParticleFormat*> _P_l_mPTorderingfinalstate_REG_;
  MAbool isP__l_mPTorderingfinalstate(const MCParticleFormat* part) const {
     if ( part==0 ) return false;
     if ( !PHYSICS->Id->IsFinalState(part) ) return false;
     if ( (part->pdgid()!=11)&&(part->pdgid()!=13) ) return false;
     return true; }
  std::vector<const MCParticleFormat*> _P_l_pPTorderingfinalstate_REG_;
  MAbool isP__l_pPTorderingfinalstate(const MCParticleFormat* part) const {
     if ( part==0 ) return false;
     if ( !PHYSICS->Id->IsFinalState(part) ) return false;
     if ( (part->pdgid()!=-13)&&(part->pdgid()!=-11) ) return false;
     return true; }
};
}

#endif