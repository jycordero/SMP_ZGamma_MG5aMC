void selection_3()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo7","canvas_plotflow_tempo7",0,0,700,500);
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
  TH1F* S4_PT_0 = new TH1F("S4_PT_0","S4_PT_0",40,0.0,1000.0);
  // Content
  S4_PT_0->SetBinContent(0,0.0); // underflow
  S4_PT_0->SetBinContent(1,0.03859691908);
  S4_PT_0->SetBinContent(2,0.08684307793);
  S4_PT_0->SetBinContent(3,0.21228309494);
  S4_PT_0->SetBinContent(4,0.35702159149);
  S4_PT_0->SetBinContent(5,0.56930458643);
  S4_PT_0->SetBinContent(6,0.72369228275);
  S4_PT_0->SetBinContent(7,1.04211697516);
  S4_PT_0->SetBinContent(8,0.90702767838);
  S4_PT_0->SetBinContent(9,1.23510197056);
  S4_PT_0->SetBinContent(10,1.32194496849);
  S4_PT_0->SetBinContent(11,1.41843696619);
  S4_PT_0->SetBinContent(12,1.37019096734);
  S4_PT_0->SetBinContent(13,1.60177196182);
  S4_PT_0->SetBinContent(14,1.63071996113);
  S4_PT_0->SetBinContent(15,1.78510795745);
  S4_PT_0->SetBinContent(16,1.92019695423);
  S4_PT_0->SetBinContent(17,1.85265195584);
  S4_PT_0->SetBinContent(18,1.88159995515);
  S4_PT_0->SetBinContent(19,2.10353194986);
  S4_PT_0->SetBinContent(20,2.00703995216);
  S4_PT_0->SetBinContent(21,2.18072594802);
  S4_PT_0->SetBinContent(22,2.15177894871);
  S4_PT_0->SetBinContent(23,2.06493495078);
  S4_PT_0->SetBinContent(24,2.23862194664);
  S4_PT_0->SetBinContent(25,1.91054795446);
  S4_PT_0->SetBinContent(26,1.78510795745);
  S4_PT_0->SetBinContent(27,1.90089895469);
  S4_PT_0->SetBinContent(28,1.93949495377);
  S4_PT_0->SetBinContent(29,1.89124895492);
  S4_PT_0->SetBinContent(30,2.0263389517);
  S4_PT_0->SetBinContent(31,1.96844295308);
  S4_PT_0->SetBinContent(32,1.58247396228);
  S4_PT_0->SetBinContent(33,1.66931696021);
  S4_PT_0->SetBinContent(34,1.88159995515);
  S4_PT_0->SetBinContent(35,1.69826495952);
  S4_PT_0->SetBinContent(36,1.92019695423);
  S4_PT_0->SetBinContent(37,1.58247396228);
  S4_PT_0->SetBinContent(38,1.55352596297);
  S4_PT_0->SetBinContent(39,1.5438769632);
  S4_PT_0->SetBinContent(40,1.41843696619);
  S4_PT_0->SetBinContent(41,35.5188191534); // overflow
  S4_PT_0->SetEntries(10000);
  // Style
  S4_PT_0->SetLineColor(9);
  S4_PT_0->SetLineStyle(1);
  S4_PT_0->SetLineWidth(1);
  S4_PT_0->SetFillColor(9);
  S4_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_8","mystack");
  stack->Add(S4_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ z_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_3.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_3.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_3.eps");

}
