void selection_12()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo25","canvas_plotflow_tempo25",0,0,700,500);
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
  TH1F* S13_ETA_0 = new TH1F("S13_ETA_0","S13_ETA_0",40,-7.0,7.0);
  // Content
  S13_ETA_0->SetBinContent(0,0.0); // underflow
  S13_ETA_0->SetBinContent(1,0.0);
  S13_ETA_0->SetBinContent(2,0.0);
  S13_ETA_0->SetBinContent(3,0.0);
  S13_ETA_0->SetBinContent(4,0.0);
  S13_ETA_0->SetBinContent(5,0.0);
  S13_ETA_0->SetBinContent(6,0.0);
  S13_ETA_0->SetBinContent(7,0.0015438751095);
  S13_ETA_0->SetBinContent(8,0.003087750219);
  S13_ETA_0->SetBinContent(9,0.0138948709855);
  S13_ETA_0->SetBinContent(10,0.018526501314);
  S13_ETA_0->SetBinContent(11,0.049404003504);
  S13_ETA_0->SetBinContent(12,0.0725621251465);
  S13_ETA_0->SetBinContent(13,0.146668110402);
  S13_ETA_0->SetBinContent(14,0.271722019272);
  S13_ETA_0->SetBinContent(15,0.480145134055);
  S13_ETA_0->SetBinContent(16,0.790464056064);
  S13_ETA_0->SetBinContent(17,1.06218607534);
  S13_ETA_0->SetBinContent(18,1.35552209614);
  S13_ETA_0->SetBinContent(19,1.67510411881);
  S13_ETA_0->SetBinContent(20,1.78935112691);
  S13_ETA_0->SetBinContent(21,1.78008812625);
  S13_ETA_0->SetBinContent(22,1.66892911837);
  S13_ETA_0->SetBinContent(23,1.40183809943);
  S13_ETA_0->SetBinContent(24,0.981904569642);
  S13_ETA_0->SetBinContent(25,0.730252951794);
  S13_ETA_0->SetBinContent(26,0.551163439092);
  S13_ETA_0->SetBinContent(27,0.2763536196);
  S13_ETA_0->SetBinContent(28,0.151299710731);
  S13_ETA_0->SetBinContent(29,0.0756498753655);
  S13_ETA_0->SetBinContent(30,0.0416846229565);
  S13_ETA_0->SetBinContent(31,0.024702001752);
  S13_ETA_0->SetBinContent(32,0.009263250657);
  S13_ETA_0->SetBinContent(33,0.003087750219);
  S13_ETA_0->SetBinContent(34,0.006175500438);
  S13_ETA_0->SetBinContent(35,0.003087750219);
  S13_ETA_0->SetBinContent(36,0.003087750219);
  S13_ETA_0->SetBinContent(37,0.0);
  S13_ETA_0->SetBinContent(38,0.0);
  S13_ETA_0->SetBinContent(39,0.0);
  S13_ETA_0->SetBinContent(40,0.0);
  S13_ETA_0->SetBinContent(41,0.0); // overflow
  S13_ETA_0->SetEntries(10000);
  // Style
  S13_ETA_0->SetLineColor(9);
  S13_ETA_0->SetLineStyle(1);
  S13_ETA_0->SetLineWidth(1);
  S13_ETA_0->SetFillColor(9);
  S13_ETA_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_26","mystack");
  stack->Add(S13_ETA_0);
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
  stack->GetXaxis()->SetTitle("#eta [ l-_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_12.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_12.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_12.eps");

}
