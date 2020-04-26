void selection_11()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo279","canvas_plotflow_tempo279",0,0,700,500);
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
  TH1F* S12_PT_0 = new TH1F("S12_PT_0","S12_PT_0",40,0.0,650.0);
  // Content
  S12_PT_0->SetBinContent(0,0.0); // underflow
  S12_PT_0->SetBinContent(1,4156.11131255);
  S12_PT_0->SetBinContent(2,13329.3410024);
  S12_PT_0->SetBinContent(3,20966.7215768);
  S12_PT_0->SetBinContent(4,6576.24349455);
  S12_PT_0->SetBinContent(5,898.24136755);
  S12_PT_0->SetBinContent(6,265.28371995);
  S12_PT_0->SetBinContent(7,125.66070945);
  S12_PT_0->SetBinContent(8,93.082007);
  S12_PT_0->SetBinContent(9,55.8492042);
  S12_PT_0->SetBinContent(10,18.6164014);
  S12_PT_0->SetBinContent(11,18.6164014);
  S12_PT_0->SetBinContent(12,13.96230105);
  S12_PT_0->SetBinContent(13,13.96230105);
  S12_PT_0->SetBinContent(14,9.3082007);
  S12_PT_0->SetBinContent(15,0.0);
  S12_PT_0->SetBinContent(16,0.0);
  S12_PT_0->SetBinContent(17,0.0);
  S12_PT_0->SetBinContent(18,0.0);
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
  THStack* stack = new THStack("mystack_280","mystack");
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
