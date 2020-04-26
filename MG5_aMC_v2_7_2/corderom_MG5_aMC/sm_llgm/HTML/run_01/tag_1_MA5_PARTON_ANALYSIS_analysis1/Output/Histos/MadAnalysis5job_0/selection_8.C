void selection_8()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo273","canvas_plotflow_tempo273",0,0,700,500);
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
  TH1F* S9_DELTAR_0 = new TH1F("S9_DELTAR_0","S9_DELTAR_0",40,0.0,8.0);
  // Content
  S9_DELTAR_0->SetBinContent(0,0.0); // underflow
  S9_DELTAR_0->SetBinContent(1,0.0);
  S9_DELTAR_0->SetBinContent(2,0.0);
  S9_DELTAR_0->SetBinContent(3,0.0);
  S9_DELTAR_0->SetBinContent(4,0.0);
  S9_DELTAR_0->SetBinContent(5,0.0);
  S9_DELTAR_0->SetBinContent(6,0.0);
  S9_DELTAR_0->SetBinContent(7,0.0);
  S9_DELTAR_0->SetBinContent(8,0.0);
  S9_DELTAR_0->SetBinContent(9,0.0);
  S9_DELTAR_0->SetBinContent(10,0.0);
  S9_DELTAR_0->SetBinContent(11,0.0);
  S9_DELTAR_0->SetBinContent(12,0.0);
  S9_DELTAR_0->SetBinContent(13,0.0);
  S9_DELTAR_0->SetBinContent(14,0.0);
  S9_DELTAR_0->SetBinContent(15,0.0);
  S9_DELTAR_0->SetBinContent(16,5724.5431107);
  S9_DELTAR_0->SetBinContent(17,7539.6421458);
  S9_DELTAR_0->SetBinContent(18,6273.72712132);
  S9_DELTAR_0->SetBinContent(19,5068.31509801);
  S9_DELTAR_0->SetBinContent(20,4472.59008649);
  S9_DELTAR_0->SetBinContent(21,3602.27306966);
  S9_DELTAR_0->SetBinContent(22,3048.43505895);
  S9_DELTAR_0->SetBinContent(23,2569.06304968);
  S9_DELTAR_0->SetBinContent(24,1912.83503699);
  S9_DELTAR_0->SetBinContent(25,1666.16803222);
  S9_DELTAR_0->SetBinContent(26,1307.80202529);
  S9_DELTAR_0->SetBinContent(27,944.78231827);
  S9_DELTAR_0->SetBinContent(28,716.73141386);
  S9_DELTAR_0->SetBinContent(29,423.52310819);
  S9_DELTAR_0->SetBinContent(30,372.3280072);
  S9_DELTAR_0->SetBinContent(31,311.82470603);
  S9_DELTAR_0->SetBinContent(32,195.47220378);
  S9_DELTAR_0->SetBinContent(33,125.66070243);
  S9_DELTAR_0->SetBinContent(34,83.77380162);
  S9_DELTAR_0->SetBinContent(35,69.81150135);
  S9_DELTAR_0->SetBinContent(36,37.23280072);
  S9_DELTAR_0->SetBinContent(37,27.92460054);
  S9_DELTAR_0->SetBinContent(38,23.27050045);
  S9_DELTAR_0->SetBinContent(39,13.96230027);
  S9_DELTAR_0->SetBinContent(40,0.0);
  S9_DELTAR_0->SetBinContent(41,9.30820018); // overflow
  S9_DELTAR_0->SetEntries(10000);
  // Style
  S9_DELTAR_0->SetLineColor(9);
  S9_DELTAR_0->SetLineStyle(1);
  S9_DELTAR_0->SetLineWidth(1);
  S9_DELTAR_0->SetFillColor(9);
  S9_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_274","mystack");
  stack->Add(S9_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ z_{1}, a_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_8.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_8.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_8.eps");

}
