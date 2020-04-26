void selection_20()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo253","canvas_plotflow_tempo253",0,0,700,500);
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
  TH1F* S21_DELTAR_0 = new TH1F("S21_DELTAR_0","S21_DELTAR_0",40,0.0,10.0);
  // Content
  S21_DELTAR_0->SetBinContent(0,0.0); // underflow
  S21_DELTAR_0->SetBinContent(1,214.0886023);
  S21_DELTAR_0->SetBinContent(2,753.9642081);
  S21_DELTAR_0->SetBinContent(3,1112.33001195);
  S21_DELTAR_0->SetBinContent(4,1573.0860169);
  S21_DELTAR_0->SetBinContent(5,2024.53302175);
  S21_DELTAR_0->SetBinContent(6,2438.7480262);
  S21_DELTAR_0->SetBinContent(7,2857.6170307);
  S21_DELTAR_0->SetBinContent(8,3146.1720338);
  S21_DELTAR_0->SetBinContent(9,3862.9030415);
  S21_DELTAR_0->SetBinContent(10,4416.74104745);
  S21_DELTAR_0->SetBinContent(11,4891.45905255);
  S21_DELTAR_0->SetBinContent(12,5333.5990573);
  S21_DELTAR_0->SetBinContent(13,5091.5850547);
  S21_DELTAR_0->SetBinContent(14,3062.3980329);
  S21_DELTAR_0->SetBinContent(15,1847.67801985);
  S21_DELTAR_0->SetBinContent(16,1228.6820132);
  S21_DELTAR_0->SetBinContent(17,800.5052086);
  S21_DELTAR_0->SetBinContent(18,577.1084062);
  S21_DELTAR_0->SetBinContent(19,479.37230515);
  S21_DELTAR_0->SetBinContent(20,283.90010305);
  S21_DELTAR_0->SetBinContent(21,167.5476018);
  S21_DELTAR_0->SetBinContent(22,167.5476018);
  S21_DELTAR_0->SetBinContent(23,83.7738009);
  S21_DELTAR_0->SetBinContent(24,46.5410005);
  S21_DELTAR_0->SetBinContent(25,27.9246003);
  S21_DELTAR_0->SetBinContent(26,9.3082001);
  S21_DELTAR_0->SetBinContent(27,18.6164002);
  S21_DELTAR_0->SetBinContent(28,9.3082001);
  S21_DELTAR_0->SetBinContent(29,4.65410005);
  S21_DELTAR_0->SetBinContent(30,4.65410005);
  S21_DELTAR_0->SetBinContent(31,4.65410005);
  S21_DELTAR_0->SetBinContent(32,0.0);
  S21_DELTAR_0->SetBinContent(33,0.0);
  S21_DELTAR_0->SetBinContent(34,0.0);
  S21_DELTAR_0->SetBinContent(35,0.0);
  S21_DELTAR_0->SetBinContent(36,0.0);
  S21_DELTAR_0->SetBinContent(37,0.0);
  S21_DELTAR_0->SetBinContent(38,0.0);
  S21_DELTAR_0->SetBinContent(39,0.0);
  S21_DELTAR_0->SetBinContent(40,0.0);
  S21_DELTAR_0->SetBinContent(41,0.0); // overflow
  S21_DELTAR_0->SetEntries(10000);
  // Style
  S21_DELTAR_0->SetLineColor(9);
  S21_DELTAR_0->SetLineStyle(1);
  S21_DELTAR_0->SetLineWidth(1);
  S21_DELTAR_0->SetFillColor(9);
  S21_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_254","mystack");
  stack->Add(S21_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ a_{1}, l-_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_20.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_20.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_20.eps");

}
