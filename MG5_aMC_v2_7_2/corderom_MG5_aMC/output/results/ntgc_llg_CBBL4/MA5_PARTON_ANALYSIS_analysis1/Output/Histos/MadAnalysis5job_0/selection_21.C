void selection_21()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo43","canvas_plotflow_tempo43",0,0,700,500);
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
  S22_DELTAR_0->SetBinContent(1,10.3057703562);
  S22_DELTAR_0->SetBinContent(2,33.0949811437);
  S22_DELTAR_0->SetBinContent(3,18.5952006426);
  S22_DELTAR_0->SetBinContent(4,10.0907003487);
  S22_DELTAR_0->SetBinContent(5,5.86084920254);
  S22_DELTAR_0->SetBinContent(6,3.36057811614);
  S22_DELTAR_0->SetBinContent(7,2.35688608145);
  S22_DELTAR_0->SetBinContent(8,1.36215404707);
  S22_DELTAR_0->SetBinContent(9,1.03953903593);
  S22_DELTAR_0->SetBinContent(10,0.663154122918);
  S22_DELTAR_0->SetBinContent(11,0.546654118892);
  S22_DELTAR_0->SetBinContent(12,0.510807917653);
  S22_DELTAR_0->SetBinContent(13,0.28676940991);
  S22_DELTAR_0->SetBinContent(14,0.277807809601);
  S22_DELTAR_0->SetBinContent(15,0.250923208672);
  S22_DELTAR_0->SetBinContent(16,0.143384704955);
  S22_DELTAR_0->SetBinContent(17,0.188192406504);
  S22_DELTAR_0->SetBinContent(18,0.116500104026);
  S22_DELTAR_0->SetBinContent(19,0.0448077115485);
  S22_DELTAR_0->SetBinContent(20,0.0537692618582);
  S22_DELTAR_0->SetBinContent(21,0.0627308021679);
  S22_DELTAR_0->SetBinContent(22,0.0716923424776);
  S22_DELTAR_0->SetBinContent(23,0.0268846309291);
  S22_DELTAR_0->SetBinContent(24,0.0448077115485);
  S22_DELTAR_0->SetBinContent(25,0.0716923424776);
  S22_DELTAR_0->SetBinContent(26,0.089615433097);
  S22_DELTAR_0->SetBinContent(27,0.0179230906194);
  S22_DELTAR_0->SetBinContent(28,0.0268846309291);
  S22_DELTAR_0->SetBinContent(29,0.0268846309291);
  S22_DELTAR_0->SetBinContent(30,0.0179230906194);
  S22_DELTAR_0->SetBinContent(31,0.0);
  S22_DELTAR_0->SetBinContent(32,0.0);
  S22_DELTAR_0->SetBinContent(33,0.0);
  S22_DELTAR_0->SetBinContent(34,0.0);
  S22_DELTAR_0->SetBinContent(35,0.0);
  S22_DELTAR_0->SetBinContent(36,0.0);
  S22_DELTAR_0->SetBinContent(37,0.0);
  S22_DELTAR_0->SetBinContent(38,0.0089615433097);
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
  THStack* stack = new THStack("mystack_44","mystack");
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
