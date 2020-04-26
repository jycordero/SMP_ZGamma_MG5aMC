void selection_4()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo221","canvas_plotflow_tempo221",0,0,700,500);
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
  TH1F* S5_ETA_0 = new TH1F("S5_ETA_0","S5_ETA_0",40,-10.0,10.0);
  // Content
  S5_ETA_0->SetBinContent(0,0.0); // underflow
  S5_ETA_0->SetBinContent(1,0.0);
  S5_ETA_0->SetBinContent(2,0.0);
  S5_ETA_0->SetBinContent(3,0.0);
  S5_ETA_0->SetBinContent(4,0.0);
  S5_ETA_0->SetBinContent(5,0.0);
  S5_ETA_0->SetBinContent(6,0.0);
  S5_ETA_0->SetBinContent(7,0.0);
  S5_ETA_0->SetBinContent(8,83.77380324);
  S5_ETA_0->SetBinContent(9,353.71161368);
  S5_ETA_0->SetBinContent(10,865.66263348);
  S5_ETA_0->SetBinContent(11,1577.74006102);
  S5_ETA_0->SetBinContent(12,2229.31408622);
  S5_ETA_0->SetBinContent(13,2699.3781044);
  S5_ETA_0->SetBinContent(14,3141.5171215);
  S5_ETA_0->SetBinContent(15,3039.12711754);
  S5_ETA_0->SetBinContent(16,2722.6481053);
  S5_ETA_0->SetBinContent(17,2438.74809432);
  S5_ETA_0->SetBinContent(18,1661.51406426);
  S5_ETA_0->SetBinContent(19,1419.5000549);
  S5_ETA_0->SetBinContent(20,1061.13504104);
  S5_ETA_0->SetBinContent(21,949.43643672);
  S5_ETA_0->SetBinContent(22,1377.61405328);
  S5_ETA_0->SetBinContent(23,1731.32506696);
  S5_ETA_0->SetBinContent(24,2303.7790891);
  S5_ETA_0->SetBinContent(25,2624.91210152);
  S5_ETA_0->SetBinContent(26,3160.13412222);
  S5_ETA_0->SetBinContent(27,3108.93912024);
  S5_ETA_0->SetBinContent(28,2778.49810746);
  S5_ETA_0->SetBinContent(29,2280.5090882);
  S5_ETA_0->SetBinContent(30,1545.16105976);
  S5_ETA_0->SetBinContent(31,842.39213258);
  S5_ETA_0->SetBinContent(32,460.75591782);
  S5_ETA_0->SetBinContent(33,79.11970306);
  S5_ETA_0->SetBinContent(34,4.65410018);
  S5_ETA_0->SetBinContent(35,0.0);
  S5_ETA_0->SetBinContent(36,0.0);
  S5_ETA_0->SetBinContent(37,0.0);
  S5_ETA_0->SetBinContent(38,0.0);
  S5_ETA_0->SetBinContent(39,0.0);
  S5_ETA_0->SetBinContent(40,0.0);
  S5_ETA_0->SetBinContent(41,0.0); // overflow
  S5_ETA_0->SetEntries(10000);
  // Style
  S5_ETA_0->SetLineColor(9);
  S5_ETA_0->SetLineStyle(1);
  S5_ETA_0->SetLineWidth(1);
  S5_ETA_0->SetFillColor(9);
  S5_ETA_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_222","mystack");
  stack->Add(S5_ETA_0);
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
  stack->GetXaxis()->SetTitle("#eta [ z_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_4.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_4.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_4.eps");

}
