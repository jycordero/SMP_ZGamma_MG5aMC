void selection_19()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo295","canvas_plotflow_tempo295",0,0,700,500);
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
  TH1F* S20_DELTAR_0 = new TH1F("S20_DELTAR_0","S20_DELTAR_0",40,0.0,8.0);
  // Content
  S20_DELTAR_0->SetBinContent(0,0.0); // underflow
  S20_DELTAR_0->SetBinContent(1,158.23939626);
  S20_DELTAR_0->SetBinContent(2,386.29029087);
  S20_DELTAR_0->SetBinContent(3,707.42318328);
  S20_DELTAR_0->SetBinContent(4,1061.13497492);
  S20_DELTAR_0->SetBinContent(5,1331.07296854);
  S20_DELTAR_0->SetBinContent(6,1531.19896381);
  S20_DELTAR_0->SetBinContent(7,1889.56495534);
  S20_DELTAR_0->SetBinContent(8,2182.77294841);
  S20_DELTAR_0->SetBinContent(9,2406.16994313);
  S20_DELTAR_0->SetBinContent(10,2699.3779362);
  S20_DELTAR_0->SetBinContent(11,2960.00793004);
  S20_DELTAR_0->SetBinContent(12,3499.88291728);
  S20_DELTAR_0->SetBinContent(13,3630.1979142);
  S20_DELTAR_0->SetBinContent(14,4291.07989858);
  S20_DELTAR_0->SetBinContent(15,4309.69689814);
  S20_DELTAR_0->SetBinContent(16,4435.35689517);
  S20_DELTAR_0->SetBinContent(17,2829.69293312);
  S20_DELTAR_0->SetBinContent(18,1740.63295886);
  S20_DELTAR_0->SetBinContent(19,1224.02797107);
  S20_DELTAR_0->SetBinContent(20,893.58717888);
  S20_DELTAR_0->SetBinContent(21,735.34778262);
  S20_DELTAR_0->SetBinContent(22,442.13948955);
  S20_DELTAR_0->SetBinContent(23,316.47879252);
  S20_DELTAR_0->SetBinContent(24,255.97549395);
  S20_DELTAR_0->SetBinContent(25,176.85579582);
  S20_DELTAR_0->SetBinContent(26,107.04429747);
  S20_DELTAR_0->SetBinContent(27,107.04429747);
  S20_DELTAR_0->SetBinContent(28,83.77379802);
  S20_DELTAR_0->SetBinContent(29,37.23279912);
  S20_DELTAR_0->SetBinContent(30,46.5409989);
  S20_DELTAR_0->SetBinContent(31,13.96229967);
  S20_DELTAR_0->SetBinContent(32,13.96229967);
  S20_DELTAR_0->SetBinContent(33,4.65409989);
  S20_DELTAR_0->SetBinContent(34,4.65409989);
  S20_DELTAR_0->SetBinContent(35,13.96229967);
  S20_DELTAR_0->SetBinContent(36,4.65409989);
  S20_DELTAR_0->SetBinContent(37,0.0);
  S20_DELTAR_0->SetBinContent(38,4.65409989);
  S20_DELTAR_0->SetBinContent(39,4.65409989);
  S20_DELTAR_0->SetBinContent(40,0.0);
  S20_DELTAR_0->SetBinContent(41,0.0); // overflow
  S20_DELTAR_0->SetEntries(10000);
  // Style
  S20_DELTAR_0->SetLineColor(9);
  S20_DELTAR_0->SetLineStyle(1);
  S20_DELTAR_0->SetLineWidth(1);
  S20_DELTAR_0->SetFillColor(9);
  S20_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_296","mystack");
  stack->Add(S20_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ a_{1}, l+_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_19.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_19.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_19.eps");

}
