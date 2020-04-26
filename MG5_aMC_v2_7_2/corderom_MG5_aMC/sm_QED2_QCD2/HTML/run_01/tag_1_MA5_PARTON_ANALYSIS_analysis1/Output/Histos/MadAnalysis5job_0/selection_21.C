void selection_21()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo255","canvas_plotflow_tempo255",0,0,700,500);
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
  TH1F* S22_DELTAR_0 = new TH1F("S22_DELTAR_0","S22_DELTAR_0",40,0.0,10.0);
  // Content
  S22_DELTAR_0->SetBinContent(0,0.0); // underflow
  S22_DELTAR_0->SetBinContent(1,0.0);
  S22_DELTAR_0->SetBinContent(2,4.65409951);
  S22_DELTAR_0->SetBinContent(3,32.57869657);
  S22_DELTAR_0->SetBinContent(4,46.5409951);
  S22_DELTAR_0->SetBinContent(5,97.73608971);
  S22_DELTAR_0->SetBinContent(6,139.6229853);
  S22_DELTAR_0->SetBinContent(7,237.35907501);
  S22_DELTAR_0->SetBinContent(8,395.59845835);
  S22_DELTAR_0->SetBinContent(9,721.38542405);
  S22_DELTAR_0->SetBinContent(10,1428.80884957);
  S22_DELTAR_0->SetBinContent(11,3290.44865357);
  S22_DELTAR_0->SetBinContent(12,9978.38894944);
  S22_DELTAR_0->SetBinContent(13,12435.7586907);
  S22_DELTAR_0->SetBinContent(14,6566.93430861);
  S22_DELTAR_0->SetBinContent(15,3746.54960555);
  S22_DELTAR_0->SetBinContent(16,2368.93675059);
  S22_DELTAR_0->SetBinContent(17,1624.28082899);
  S22_DELTAR_0->SetBinContent(18,1149.56287897);
  S22_DELTAR_0->SetBinContent(19,726.03952356);
  S22_DELTAR_0->SetBinContent(20,577.10833924);
  S22_DELTAR_0->SetBinContent(21,381.63615982);
  S22_DELTAR_0->SetBinContent(22,195.47217942);
  S22_DELTAR_0->SetBinContent(23,195.47217942);
  S22_DELTAR_0->SetBinContent(24,93.0819902);
  S22_DELTAR_0->SetBinContent(25,37.23279608);
  S22_DELTAR_0->SetBinContent(26,41.88689559);
  S22_DELTAR_0->SetBinContent(27,9.30819902);
  S22_DELTAR_0->SetBinContent(28,13.96229853);
  S22_DELTAR_0->SetBinContent(29,4.65409951);
  S22_DELTAR_0->SetBinContent(30,0.0);
  S22_DELTAR_0->SetBinContent(31,0.0);
  S22_DELTAR_0->SetBinContent(32,0.0);
  S22_DELTAR_0->SetBinContent(33,0.0);
  S22_DELTAR_0->SetBinContent(34,0.0);
  S22_DELTAR_0->SetBinContent(35,0.0);
  S22_DELTAR_0->SetBinContent(36,0.0);
  S22_DELTAR_0->SetBinContent(37,0.0);
  S22_DELTAR_0->SetBinContent(38,0.0);
  S22_DELTAR_0->SetBinContent(39,0.0);
  S22_DELTAR_0->SetBinContent(40,0.0);
  S22_DELTAR_0->SetBinContent(41,0.0); // overflow
  S22_DELTAR_0->SetEntries(10000);
  // Style
  S22_DELTAR_0->SetLineColor(9);
  S22_DELTAR_0->SetLineStyle(1);
  S22_DELTAR_0->SetLineWidth(1);
  S22_DELTAR_0->SetFillColor(9);
  S22_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_256","mystack");
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
