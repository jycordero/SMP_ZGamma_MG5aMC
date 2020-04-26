void selection_15()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo31","canvas_plotflow_tempo31",0,0,700,500);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);
  canvas->SetHighLightColor(2);
  canvas->SetFillColor(0);
  canvas->SetBorderMode(0);
  canvas->SetBorderSize(3);
  canvas->SetFrameBorderMode(0);
  canvas->SetFrameBorderSize(0);
  canvas->SetTickx(1);
  canvas->SetTicky(1);
  canvas->SetLeftMargin(0.14);
  canvas->SetRightMargin(0.05);
  canvas->SetBottomMargin(0.15);
  canvas->SetTopMargin(0.05);

  // Creating a new TH1F
  TH1F* S16_M_0 = new TH1F("S16_M_0","S16_M_0",40,0.0,800.0);
  // Content
  S16_M_0->SetBinContent(0,0.0); // underflow
  S16_M_0->SetBinContent(1,0.0);
  S16_M_0->SetBinContent(2,0.0089615433254);
  S16_M_0->SetBinContent(3,0.0089615433254);
  S16_M_0->SetBinContent(4,0.0);
  S16_M_0->SetBinContent(5,0.0179230906508);
  S16_M_0->SetBinContent(6,0.0268846309762);
  S16_M_0->SetBinContent(7,0.0716923426032);
  S16_M_0->SetBinContent(8,0.170269306183);
  S16_M_0->SetBinContent(9,0.134423104881);
  S16_M_0->SetBinContent(10,0.224038608135);
  S16_M_0->SetBinContent(11,0.197153907159);
  S16_M_0->SetBinContent(12,0.295730910738);
  S16_M_0->SetBinContent(13,0.152346205532);
  S16_M_0->SetBinContent(14,0.23300010846);
  S16_M_0->SetBinContent(15,0.250923209111);
  S16_M_0->SetBinContent(16,0.286769410413);
  S16_M_0->SetBinContent(17,0.403269414643);
  S16_M_0->SetBinContent(18,0.430154015619);
  S16_M_0->SetBinContent(19,0.367423213341);
  S16_M_0->SetBinContent(20,0.466000216921);
  S16_M_0->SetBinContent(21,0.591461821476);
  S16_M_0->SetBinContent(22,0.519769518873);
  S16_M_0->SetBinContent(23,0.394307914318);
  S16_M_0->SetBinContent(24,0.510807918548);
  S16_M_0->SetBinContent(25,0.573538720826);
  S16_M_0->SetBinContent(26,0.528731019199);
  S16_M_0->SetBinContent(27,0.537692619524);
  S16_M_0->SetBinContent(28,0.725884926357);
  S16_M_0->SetBinContent(29,0.618346422453);
  S16_M_0->SetBinContent(30,0.743808027008);
  S16_M_0->SetBinContent(31,0.725884926357);
  S16_M_0->SetBinContent(32,0.707961925707);
  S16_M_0->SetBinContent(33,0.743808027008);
  S16_M_0->SetBinContent(34,0.761731127659);
  S16_M_0->SetBinContent(35,0.716923426032);
  S16_M_0->SetBinContent(36,0.734846526683);
  S16_M_0->SetBinContent(37,0.770692727984);
  S16_M_0->SetBinContent(38,0.752769627334);
  S16_M_0->SetBinContent(39,0.743808027008);
  S16_M_0->SetBinContent(40,0.914077333191);
  S16_M_0->SetBinContent(41,72.5526526344); // overflow
  S16_M_0->SetEntries(10000);
  // Style
  S16_M_0->SetLineColor(9);
  S16_M_0->SetLineStyle(1);
  S16_M_0->SetLineWidth(1);
  S16_M_0->SetFillColor(9);
  S16_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_32","mystack");
  stack->Add(S16_M_0);
  stack->Draw("");

  // Y axis
  stack->GetYaxis()->SetLabelSize(0.04);
  stack->GetYaxis()->SetLabelOffset(0.005);
  stack->GetYaxis()->SetTitleSize(0.06);
  stack->GetYaxis()->SetTitleFont(22);
  stack->GetYaxis()->SetTitleOffset(1);
  stack->GetYaxis()->SetTitle("Events  ( L_{int} = 10 fb^{-1} )");

  // X axis
  stack->GetXaxis()->SetLabelSize(0.04);
  stack->GetXaxis()->SetLabelOffset(0.005);
  stack->GetXaxis()->SetTitleSize(0.06);
  stack->GetXaxis()->SetTitleFont(22);
  stack->GetXaxis()->SetTitleOffset(1);
  stack->GetXaxis()->SetTitle("M [ a_{1} l+_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_15.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_15.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_15.eps");

}
