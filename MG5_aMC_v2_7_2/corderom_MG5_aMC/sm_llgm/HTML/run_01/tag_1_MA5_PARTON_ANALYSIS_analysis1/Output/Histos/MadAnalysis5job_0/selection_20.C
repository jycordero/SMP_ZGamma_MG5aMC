void selection_20()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo297","canvas_plotflow_tempo297",0,0,700,500);
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
  TH1F* S21_DELTAR_0 = new TH1F("S21_DELTAR_0","S21_DELTAR_0",40,0.0,8.0);
  // Content
  S21_DELTAR_0->SetBinContent(0,0.0); // underflow
  S21_DELTAR_0->SetBinContent(1,139.6229931);
  S21_DELTAR_0->SetBinContent(2,460.75587723);
  S21_DELTAR_0->SetBinContent(3,758.61826251);
  S21_DELTAR_0->SetBinContent(4,1005.28595032);
  S21_DELTAR_0->SetBinContent(5,1289.18593629);
  S21_DELTAR_0->SetBinContent(6,1531.19892433);
  S21_DELTAR_0->SetBinContent(7,1796.48291122);
  S21_DELTAR_0->SetBinContent(8,2266.54688799);
  S21_DELTAR_0->SetBinContent(9,2271.20088776);
  S21_DELTAR_0->SetBinContent(10,2601.64187143);
  S21_DELTAR_0->SetBinContent(11,3118.2468459);
  S21_DELTAR_0->SetBinContent(12,3378.87683302);
  S21_DELTAR_0->SetBinContent(13,3672.08481853);
  S21_DELTAR_0->SetBinContent(14,3942.02280519);
  S21_DELTAR_0->SetBinContent(15,4393.46978288);
  S21_DELTAR_0->SetBinContent(16,4281.7717884);
  S21_DELTAR_0->SetBinContent(17,2797.11386177);
  S21_DELTAR_0->SetBinContent(18,1903.52690593);
  S21_DELTAR_0->SetBinContent(19,1298.49393583);
  S21_DELTAR_0->SetBinContent(20,949.43635308);
  S21_DELTAR_0->SetBinContent(21,684.15266619);
  S21_DELTAR_0->SetBinContent(22,530.56737378);
  S21_DELTAR_0->SetBinContent(23,395.59848045);
  S21_DELTAR_0->SetBinContent(24,335.09518344);
  S21_DELTAR_0->SetBinContent(25,195.47219034);
  S21_DELTAR_0->SetBinContent(26,148.93119264);
  S21_DELTAR_0->SetBinContent(27,125.66069379);
  S21_DELTAR_0->SetBinContent(28,102.39019494);
  S21_DELTAR_0->SetBinContent(29,46.5409977);
  S21_DELTAR_0->SetBinContent(30,41.88689793);
  S21_DELTAR_0->SetBinContent(31,23.27049885);
  S21_DELTAR_0->SetBinContent(32,9.30819954);
  S21_DELTAR_0->SetBinContent(33,13.96229931);
  S21_DELTAR_0->SetBinContent(34,9.30819954);
  S21_DELTAR_0->SetBinContent(35,9.30819954);
  S21_DELTAR_0->SetBinContent(36,0.0);
  S21_DELTAR_0->SetBinContent(37,9.30819954);
  S21_DELTAR_0->SetBinContent(38,0.0);
  S21_DELTAR_0->SetBinContent(39,4.65409977);
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
  THStack* stack = new THStack("mystack_298","mystack");
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
