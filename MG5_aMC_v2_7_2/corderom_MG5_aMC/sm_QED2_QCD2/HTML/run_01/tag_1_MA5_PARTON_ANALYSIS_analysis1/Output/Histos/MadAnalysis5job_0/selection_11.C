void selection_11()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo235","canvas_plotflow_tempo235",0,0,700,500);
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
  TH1F* S12_PT_0 = new TH1F("S12_PT_0","S12_PT_0",40,0.0,500.0);
  // Content
  S12_PT_0->SetBinContent(0,0.0); // underflow
  S12_PT_0->SetBinContent(1,2671.45293686);
  S12_PT_0->SetBinContent(2,7525.67982213);
  S12_PT_0->SetBinContent(3,13948.3396703);
  S12_PT_0->SetBinContent(4,15428.3396354);
  S12_PT_0->SetBinContent(5,5193.97587724);
  S12_PT_0->SetBinContent(6,958.74457734);
  S12_PT_0->SetBinContent(7,330.44109219);
  S12_PT_0->SetBinContent(8,139.6229967);
  S12_PT_0->SetBinContent(9,116.35249725);
  S12_PT_0->SetBinContent(10,79.11969813);
  S12_PT_0->SetBinContent(11,51.19509879);
  S12_PT_0->SetBinContent(12,27.92459934);
  S12_PT_0->SetBinContent(13,13.96229967);
  S12_PT_0->SetBinContent(14,18.61639956);
  S12_PT_0->SetBinContent(15,13.96229967);
  S12_PT_0->SetBinContent(16,9.30819978);
  S12_PT_0->SetBinContent(17,4.65409989);
  S12_PT_0->SetBinContent(18,9.30819978);
  S12_PT_0->SetBinContent(19,0.0);
  S12_PT_0->SetBinContent(20,0.0);
  S12_PT_0->SetBinContent(21,0.0);
  S12_PT_0->SetBinContent(22,0.0);
  S12_PT_0->SetBinContent(23,0.0);
  S12_PT_0->SetBinContent(24,0.0);
  S12_PT_0->SetBinContent(25,0.0);
  S12_PT_0->SetBinContent(26,0.0);
  S12_PT_0->SetBinContent(27,0.0);
  S12_PT_0->SetBinContent(28,0.0);
  S12_PT_0->SetBinContent(29,0.0);
  S12_PT_0->SetBinContent(30,0.0);
  S12_PT_0->SetBinContent(31,0.0);
  S12_PT_0->SetBinContent(32,0.0);
  S12_PT_0->SetBinContent(33,0.0);
  S12_PT_0->SetBinContent(34,0.0);
  S12_PT_0->SetBinContent(35,0.0);
  S12_PT_0->SetBinContent(36,0.0);
  S12_PT_0->SetBinContent(37,0.0);
  S12_PT_0->SetBinContent(38,0.0);
  S12_PT_0->SetBinContent(39,0.0);
  S12_PT_0->SetBinContent(40,0.0);
  S12_PT_0->SetBinContent(41,0.0); // overflow
  S12_PT_0->SetEntries(10000);
  // Style
  S12_PT_0->SetLineColor(9);
  S12_PT_0->SetLineStyle(1);
  S12_PT_0->SetLineWidth(1);
  S12_PT_0->SetFillColor(9);
  S12_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_236","mystack");
  stack->Add(S12_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ l-_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_11.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_11.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_11.eps");

}
