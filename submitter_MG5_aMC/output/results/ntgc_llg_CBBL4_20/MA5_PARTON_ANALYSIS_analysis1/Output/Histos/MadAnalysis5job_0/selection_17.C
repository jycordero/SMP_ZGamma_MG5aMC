void selection_17()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo35","canvas_plotflow_tempo35",0,0,700,500);
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
  TH1F* S18_M_0 = new TH1F("S18_M_0","S18_M_0",40,0.0,900.0);
  // Content
  S18_M_0->SetBinContent(0,0.0); // underflow
  S18_M_0->SetBinContent(1,0.0);
  S18_M_0->SetBinContent(2,0.0);
  S18_M_0->SetBinContent(3,0.0);
  S18_M_0->SetBinContent(4,0.0);
  S18_M_0->SetBinContent(5,0.0);
  S18_M_0->SetBinContent(6,0.0);
  S18_M_0->SetBinContent(7,0.22403314956);
  S18_M_0->SetBinContent(8,0.22403314956);
  S18_M_0->SetBinContent(9,0.0);
  S18_M_0->SetBinContent(10,0.44806619912);
  S18_M_0->SetBinContent(11,0.44806619912);
  S18_M_0->SetBinContent(12,1.1201652478);
  S18_M_0->SetBinContent(13,2.68839759472);
  S18_M_0->SetBinContent(14,1.1201652478);
  S18_M_0->SetBinContent(15,2.91243064428);
  S18_M_0->SetBinContent(16,2.01629844604);
  S18_M_0->SetBinContent(17,1.79226539648);
  S18_M_0->SetBinContent(18,4.25662894164);
  S18_M_0->SetBinContent(19,4.70469604076);
  S18_M_0->SetBinContent(20,3.3604967434);
  S18_M_0->SetBinContent(21,3.3604967434);
  S18_M_0->SetBinContent(22,4.70469604076);
  S18_M_0->SetBinContent(23,7.16905958592);
  S18_M_0->SetBinContent(24,4.70469604076);
  S18_M_0->SetBinContent(25,6.04889433812);
  S18_M_0->SetBinContent(26,6.04889433812);
  S18_M_0->SetBinContent(27,4.4806619912);
  S18_M_0->SetBinContent(28,7.16905958592);
  S18_M_0->SetBinContent(29,6.94502653636);
  S18_M_0->SetBinContent(30,9.18535803196);
  S18_M_0->SetBinContent(31,10.5295523293);
  S18_M_0->SetBinContent(32,8.73729193284);
  S18_M_0->SetBinContent(33,8.9613249824);
  S18_M_0->SetBinContent(34,8.28922583372);
  S18_M_0->SetBinContent(35,10.3055222798);
  S18_M_0->SetBinContent(36,8.73729193284);
  S18_M_0->SetBinContent(37,11.8737526267);
  S18_M_0->SetBinContent(38,10.5295523293);
  S18_M_0->SetBinContent(39,13.217952924);
  S18_M_0->SetBinContent(40,10.0814922302);
  S18_M_0->SetBinContent(41,2053.93545437); // overflow
  S18_M_0->SetEntries(10000);
  // Style
  S18_M_0->SetLineColor(9);
  S18_M_0->SetLineStyle(1);
  S18_M_0->SetLineWidth(1);
  S18_M_0->SetFillColor(9);
  S18_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_36","mystack");
  stack->Add(S18_M_0);
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
  stack->GetXaxis()->SetTitle("M [ a_{1} l+_{1} l-_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_17.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_17.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_17.eps");

}
