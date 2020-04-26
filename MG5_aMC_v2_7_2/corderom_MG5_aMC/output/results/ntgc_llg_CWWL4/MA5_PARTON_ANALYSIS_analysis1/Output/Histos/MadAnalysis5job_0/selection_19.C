void selection_19()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo39","canvas_plotflow_tempo39",0,0,700,500);
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
  S20_DELTAR_0->SetBinContent(1,0.0);
  S20_DELTAR_0->SetBinContent(2,0.0);
  S20_DELTAR_0->SetBinContent(3,0.0);
  S20_DELTAR_0->SetBinContent(4,0.0);
  S20_DELTAR_0->SetBinContent(5,0.0003958461615);
  S20_DELTAR_0->SetBinContent(6,0.0);
  S20_DELTAR_0->SetBinContent(7,0.0);
  S20_DELTAR_0->SetBinContent(8,0.0);
  S20_DELTAR_0->SetBinContent(9,0.0);
  S20_DELTAR_0->SetBinContent(10,0.0011875381845);
  S20_DELTAR_0->SetBinContent(11,0.000791692323);
  S20_DELTAR_0->SetBinContent(12,0.0051459997995);
  S20_DELTAR_0->SetBinContent(13,0.00791692323);
  S20_DELTAR_0->SetBinContent(14,0.022167383444);
  S20_DELTAR_0->SetBinContent(15,0.139337821648);
  S20_DELTAR_0->SetBinContent(16,1.2255391904);
  S20_DELTAR_0->SetBinContent(17,0.843152330995);
  S20_DELTAR_0->SetBinContent(18,0.509058179089);
  S20_DELTAR_0->SetBinContent(19,0.36140755615);
  S20_DELTAR_0->SetBinContent(20,0.243445337822);
  S20_DELTAR_0->SetBinContent(21,0.169818026384);
  S20_DELTAR_0->SetBinContent(22,0.131816720479);
  S20_DELTAR_0->SetBinContent(23,0.0930238444525);
  S20_DELTAR_0->SetBinContent(24,0.06333537984);
  S20_DELTAR_0->SetBinContent(25,0.041167996396);
  S20_DELTAR_0->SetBinContent(26,0.0296884646125);
  S20_DELTAR_0->SetBinContent(27,0.0225632335055);
  S20_DELTAR_0->SetBinContent(28,0.0162296925215);
  S20_DELTAR_0->SetBinContent(29,0.0106878416605);
  S20_DELTAR_0->SetBinContent(30,0.0091044614145);
  S20_DELTAR_0->SetBinContent(31,0.003166769492);
  S20_DELTAR_0->SetBinContent(32,0.003166769492);
  S20_DELTAR_0->SetBinContent(33,0.000791692323);
  S20_DELTAR_0->SetBinContent(34,0.002375077369);
  S20_DELTAR_0->SetBinContent(35,0.0003958461615);
  S20_DELTAR_0->SetBinContent(36,0.0003958461615);
  S20_DELTAR_0->SetBinContent(37,0.000791692323);
  S20_DELTAR_0->SetBinContent(38,0.0);
  S20_DELTAR_0->SetBinContent(39,0.0);
  S20_DELTAR_0->SetBinContent(40,0.0);
  S20_DELTAR_0->SetBinContent(41,0.0003958461615); // overflow
  S20_DELTAR_0->SetEntries(10000);
  // Style
  S20_DELTAR_0->SetLineColor(9);
  S20_DELTAR_0->SetLineStyle(1);
  S20_DELTAR_0->SetLineWidth(1);
  S20_DELTAR_0->SetFillColor(9);
  S20_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_40","mystack");
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
