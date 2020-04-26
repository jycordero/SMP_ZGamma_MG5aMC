void selection_14()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo285","canvas_plotflow_tempo285",0,0,700,500);
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
  TH1F* S15_ETA_0 = new TH1F("S15_ETA_0","S15_ETA_0",40,-7.0,7.0);
  // Content
  S15_ETA_0->SetBinContent(0,0.0); // underflow
  S15_ETA_0->SetBinContent(1,4.6541001);
  S15_ETA_0->SetBinContent(2,18.6164004);
  S15_ETA_0->SetBinContent(3,9.3082002);
  S15_ETA_0->SetBinContent(4,37.2328008);
  S15_ETA_0->SetBinContent(5,51.1951011);
  S15_ETA_0->SetBinContent(6,144.2771031);
  S15_ETA_0->SetBinContent(7,186.164004);
  S15_ETA_0->SetBinContent(8,311.8247067);
  S15_ETA_0->SetBinContent(9,470.0641101);
  S15_ETA_0->SetBinContent(10,740.0019159);
  S15_ETA_0->SetBinContent(11,944.7823203);
  S15_ETA_0->SetBinContent(12,1265.9150272);
  S15_ETA_0->SetBinContent(13,1545.1610332);
  S15_ETA_0->SetBinContent(14,1898.8730408);
  S15_ETA_0->SetBinContent(15,1954.722042);
  S15_ETA_0->SetBinContent(16,2317.7420498);
  S15_ETA_0->SetBinContent(17,2722.6480585);
  S15_ETA_0->SetBinContent(18,2829.6930608);
  S15_ETA_0->SetBinContent(19,2820.3850606);
  S15_ETA_0->SetBinContent(20,2983.2780641);
  S15_ETA_0->SetBinContent(21,3122.9010671);
  S15_ETA_0->SetBinContent(22,2764.5350594);
  S15_ETA_0->SetBinContent(23,2652.837057);
  S15_ETA_0->SetBinContent(24,2466.673053);
  S15_ETA_0->SetBinContent(25,2480.6350533);
  S15_ETA_0->SetBinContent(26,2229.3140479);
  S15_ETA_0->SetBinContent(27,1805.7910388);
  S15_ETA_0->SetBinContent(28,1740.6330374);
  S15_ETA_0->SetBinContent(29,1214.7200261);
  S15_ETA_0->SetBinContent(30,958.7446206);
  S15_ETA_0->SetBinContent(31,702.7691151);
  S15_ETA_0->SetBinContent(32,511.951011);
  S15_ETA_0->SetBinContent(33,251.3214054);
  S15_ETA_0->SetBinContent(34,200.1263043);
  S15_ETA_0->SetBinContent(35,79.1197017);
  S15_ETA_0->SetBinContent(36,79.1197017);
  S15_ETA_0->SetBinContent(37,18.6164004);
  S15_ETA_0->SetBinContent(38,0.0);
  S15_ETA_0->SetBinContent(39,4.6541001);
  S15_ETA_0->SetBinContent(40,0.0);
  S15_ETA_0->SetBinContent(41,0.0); // overflow
  S15_ETA_0->SetEntries(10000);
  // Style
  S15_ETA_0->SetLineColor(9);
  S15_ETA_0->SetLineStyle(1);
  S15_ETA_0->SetLineWidth(1);
  S15_ETA_0->SetFillColor(9);
  S15_ETA_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_286","mystack");
  stack->Add(S15_ETA_0);
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
  stack->GetXaxis()->SetTitle("#eta [ l+_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_14.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_14.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_14.eps");

}
