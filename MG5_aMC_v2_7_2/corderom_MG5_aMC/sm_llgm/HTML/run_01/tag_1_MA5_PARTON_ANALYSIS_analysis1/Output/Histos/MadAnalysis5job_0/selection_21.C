void selection_21()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo299","canvas_plotflow_tempo299",0,0,700,500);
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
  TH1F* S22_DELTAR_0 = new TH1F("S22_DELTAR_0","S22_DELTAR_0",40,0.0,5.0);
  // Content
  S22_DELTAR_0->SetBinContent(0,0.0); // underflow
  S22_DELTAR_0->SetBinContent(1,0.0);
  S22_DELTAR_0->SetBinContent(2,0.0);
  S22_DELTAR_0->SetBinContent(3,0.0);
  S22_DELTAR_0->SetBinContent(4,4.65410008);
  S22_DELTAR_0->SetBinContent(5,23.2705004);
  S22_DELTAR_0->SetBinContent(6,9.30820016);
  S22_DELTAR_0->SetBinContent(7,18.61640032);
  S22_DELTAR_0->SetBinContent(8,27.92460048);
  S22_DELTAR_0->SetBinContent(9,23.2705004);
  S22_DELTAR_0->SetBinContent(10,74.46560128);
  S22_DELTAR_0->SetBinContent(11,74.46560128);
  S22_DELTAR_0->SetBinContent(12,65.15740112);
  S22_DELTAR_0->SetBinContent(13,116.352502);
  S22_DELTAR_0->SetBinContent(14,121.00660208);
  S22_DELTAR_0->SetBinContent(15,186.1640032);
  S22_DELTAR_0->SetBinContent(16,209.4345036);
  S22_DELTAR_0->SetBinContent(17,283.90010488);
  S22_DELTAR_0->SetBinContent(18,437.48540752);
  S22_DELTAR_0->SetBinContent(19,553.83790952);
  S22_DELTAR_0->SetBinContent(20,874.97081504);
  S22_DELTAR_0->SetBinContent(21,1270.56902184);
  S22_DELTAR_0->SetBinContent(22,2019.87903472);
  S22_DELTAR_0->SetBinContent(23,3555.73206112);
  S22_DELTAR_0->SetBinContent(24,6422.6581104);
  S22_DELTAR_0->SetBinContent(25,7125.42712248);
  S22_DELTAR_0->SetBinContent(26,5310.32809128);
  S22_DELTAR_0->SetBinContent(27,3667.43106304);
  S22_DELTAR_0->SetBinContent(28,2899.50404984);
  S22_DELTAR_0->SetBinContent(29,2080.38303576);
  S22_DELTAR_0->SetBinContent(30,1666.16802864);
  S22_DELTAR_0->SetBinContent(31,1293.84002224);
  S22_DELTAR_0->SetBinContent(32,1075.09701848);
  S22_DELTAR_0->SetBinContent(33,865.66261488);
  S22_DELTAR_0->SetBinContent(34,758.61831304);
  S22_DELTAR_0->SetBinContent(35,628.3035108);
  S22_DELTAR_0->SetBinContent(36,521.25920896);
  S22_DELTAR_0->SetBinContent(37,423.52310728);
  S22_DELTAR_0->SetBinContent(38,302.5165052);
  S22_DELTAR_0->SetBinContent(39,321.13290552);
  S22_DELTAR_0->SetBinContent(40,255.9755044);
  S22_DELTAR_0->SetBinContent(41,972.70691672); // overflow
  S22_DELTAR_0->SetEntries(10000);
  // Style
  S22_DELTAR_0->SetLineColor(9);
  S22_DELTAR_0->SetLineStyle(1);
  S22_DELTAR_0->SetLineWidth(1);
  S22_DELTAR_0->SetFillColor(9);
  S22_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_300","mystack");
  stack->Add(S22_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ l-_{1}, l+_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_21.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_21.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_21.eps");

}
