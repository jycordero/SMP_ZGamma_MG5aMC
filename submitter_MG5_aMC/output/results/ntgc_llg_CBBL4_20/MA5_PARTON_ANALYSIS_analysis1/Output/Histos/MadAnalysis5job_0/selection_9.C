void selection_9()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo19","canvas_plotflow_tempo19",0,0,700,500);
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
  TH1F* S10_PT_0 = new TH1F("S10_PT_0","S10_PT_0",40,0.0,800.0);
  // Content
  S10_PT_0->SetBinContent(0,0.0); // underflow
  S10_PT_0->SetBinContent(1,0.0);
  S10_PT_0->SetBinContent(2,1.7922656096);
  S10_PT_0->SetBinContent(3,2.6883979144);
  S10_PT_0->SetBinContent(4,4.7046966002);
  S10_PT_0->SetBinContent(5,8.0651937432);
  S10_PT_0->SetBinContent(6,10.9776237338);
  S10_PT_0->SetBinContent(7,12.9939244196);
  S10_PT_0->SetBinContent(8,13.2179544958);
  S10_PT_0->SetBinContent(9,19.4908866294);
  S10_PT_0->SetBinContent(10,21.9552474676);
  S10_PT_0->SetBinContent(11,19.2668465532);
  S10_PT_0->SetBinContent(12,23.2994479248);
  S10_PT_0->SetBinContent(13,25.763808763);
  S10_PT_0->SetBinContent(14,24.8676784582);
  S10_PT_0->SetBinContent(15,30.4685103632);
  S10_PT_0->SetBinContent(16,31.1406105918);
  S10_PT_0->SetBinContent(17,33.8290015062);
  S10_PT_0->SetBinContent(18,37.8616028778);
  S10_PT_0->SetBinContent(19,34.9491718872);
  S10_PT_0->SetBinContent(20,30.244470287);
  S10_PT_0->SetBinContent(21,35.1732019634);
  S10_PT_0->SetBinContent(22,39.6538634874);
  S10_PT_0->SetBinContent(23,32.0367408966);
  S10_PT_0->SetBinContent(24,34.0530415824);
  S10_PT_0->SetBinContent(25,36.5174024206);
  S10_PT_0->SetBinContent(26,35.1732019634);
  S10_PT_0->SetBinContent(27,37.4135327254);
  S10_PT_0->SetBinContent(28,34.0530415824);
  S10_PT_0->SetBinContent(29,31.8127108204);
  S10_PT_0->SetBinContent(30,45.0306653162);
  S10_PT_0->SetBinContent(31,37.1895026492);
  S10_PT_0->SetBinContent(32,34.0530415824);
  S10_PT_0->SetBinContent(33,36.7414324968);
  S10_PT_0->SetBinContent(34,33.3809413538);
  S10_PT_0->SetBinContent(35,38.7577331826);
  S10_PT_0->SetBinContent(36,36.5174024206);
  S10_PT_0->SetBinContent(37,34.9491718872);
  S10_PT_0->SetBinContent(38,32.9328712014);
  S10_PT_0->SetBinContent(39,35.845302192);
  S10_PT_0->SetBinContent(40,30.244470287);
  S10_PT_0->SetBinContent(41,1141.22438816); // overflow
  S10_PT_0->SetEntries(10000);
  // Style
  S10_PT_0->SetLineColor(9);
  S10_PT_0->SetLineStyle(1);
  S10_PT_0->SetLineWidth(1);
  S10_PT_0->SetFillColor(9);
  S10_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_20","mystack");
  stack->Add(S10_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ a_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_9.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_9.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_9.eps");

}
