void selection_10()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo277","canvas_plotflow_tempo277",0,0,700,500);
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
  TH1F* S11_ETA_0 = new TH1F("S11_ETA_0","S11_ETA_0",40,-7.0,7.0);
  // Content
  S11_ETA_0->SetBinContent(0,0.0); // underflow
  S11_ETA_0->SetBinContent(1,0.0);
  S11_ETA_0->SetBinContent(2,0.0);
  S11_ETA_0->SetBinContent(3,0.0);
  S11_ETA_0->SetBinContent(4,0.0);
  S11_ETA_0->SetBinContent(5,0.0);
  S11_ETA_0->SetBinContent(6,0.0);
  S11_ETA_0->SetBinContent(7,0.0);
  S11_ETA_0->SetBinContent(8,0.0);
  S11_ETA_0->SetBinContent(9,0.0);
  S11_ETA_0->SetBinContent(10,0.0);
  S11_ETA_0->SetBinContent(11,0.0);
  S11_ETA_0->SetBinContent(12,0.0);
  S11_ETA_0->SetBinContent(13,428.17723036);
  S11_ETA_0->SetBinContent(14,2904.15820592);
  S11_ETA_0->SetBinContent(15,3001.89421285);
  S11_ETA_0->SetBinContent(16,3174.09622506);
  S11_ETA_0->SetBinContent(17,3360.26023826);
  S11_ETA_0->SetBinContent(18,3174.09622506);
  S11_ETA_0->SetBinContent(19,3276.48623232);
  S11_ETA_0->SetBinContent(20,3653.46825905);
  S11_ETA_0->SetBinContent(21,3592.96525476);
  S11_ETA_0->SetBinContent(22,3509.19124882);
  S11_ETA_0->SetBinContent(23,3439.38024387);
  S11_ETA_0->SetBinContent(24,3304.4112343);
  S11_ETA_0->SetBinContent(25,3411.45524189);
  S11_ETA_0->SetBinContent(26,3118.2472211);
  S11_ETA_0->SetBinContent(27,2843.65520163);
  S11_ETA_0->SetBinContent(28,349.05752475);
  S11_ETA_0->SetBinContent(29,0.0);
  S11_ETA_0->SetBinContent(30,0.0);
  S11_ETA_0->SetBinContent(31,0.0);
  S11_ETA_0->SetBinContent(32,0.0);
  S11_ETA_0->SetBinContent(33,0.0);
  S11_ETA_0->SetBinContent(34,0.0);
  S11_ETA_0->SetBinContent(35,0.0);
  S11_ETA_0->SetBinContent(36,0.0);
  S11_ETA_0->SetBinContent(37,0.0);
  S11_ETA_0->SetBinContent(38,0.0);
  S11_ETA_0->SetBinContent(39,0.0);
  S11_ETA_0->SetBinContent(40,0.0);
  S11_ETA_0->SetBinContent(41,0.0); // overflow
  S11_ETA_0->SetEntries(10000);
  // Style
  S11_ETA_0->SetLineColor(9);
  S11_ETA_0->SetLineStyle(1);
  S11_ETA_0->SetLineWidth(1);
  S11_ETA_0->SetFillColor(9);
  S11_ETA_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_278","mystack");
  stack->Add(S11_ETA_0);
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
  stack->GetXaxis()->SetTitle("#eta [ a_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_10.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_10.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_10.eps");

}
