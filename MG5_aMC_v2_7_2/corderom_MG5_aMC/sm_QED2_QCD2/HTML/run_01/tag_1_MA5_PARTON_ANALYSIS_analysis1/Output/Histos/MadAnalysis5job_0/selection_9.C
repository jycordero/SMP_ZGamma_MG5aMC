void selection_9()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo231","canvas_plotflow_tempo231",0,0,700,500);
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
  TH1F* S10_PT_0 = new TH1F("S10_PT_0","S10_PT_0",40,0.0,500.0);
  // Content
  S10_PT_0->SetBinContent(0,0.0); // underflow
  S10_PT_0->SetBinContent(1,10695.1212639);
  S10_PT_0->SetBinContent(2,22921.4427088);
  S10_PT_0->SetBinContent(3,6678.63378925);
  S10_PT_0->SetBinContent(4,2769.18932725);
  S10_PT_0->SetBinContent(5,1498.6201771);
  S10_PT_0->SetBinContent(6,712.07738415);
  S10_PT_0->SetBinContent(7,390.9444462);
  S10_PT_0->SetBinContent(8,246.66732915);
  S10_PT_0->SetBinContent(9,121.0066143);
  S10_PT_0->SetBinContent(10,125.66071485);
  S10_PT_0->SetBinContent(11,121.0066143);
  S10_PT_0->SetBinContent(12,55.8492066);
  S10_PT_0->SetBinContent(13,51.19510605);
  S10_PT_0->SetBinContent(14,27.9246033);
  S10_PT_0->SetBinContent(15,13.96230165);
  S10_PT_0->SetBinContent(16,27.9246033);
  S10_PT_0->SetBinContent(17,13.96230165);
  S10_PT_0->SetBinContent(18,9.3082011);
  S10_PT_0->SetBinContent(19,9.3082011);
  S10_PT_0->SetBinContent(20,9.3082011);
  S10_PT_0->SetBinContent(21,4.65410055);
  S10_PT_0->SetBinContent(22,9.3082011);
  S10_PT_0->SetBinContent(23,9.3082011);
  S10_PT_0->SetBinContent(24,4.65410055);
  S10_PT_0->SetBinContent(25,4.65410055);
  S10_PT_0->SetBinContent(26,4.65410055);
  S10_PT_0->SetBinContent(27,0.0);
  S10_PT_0->SetBinContent(28,0.0);
  S10_PT_0->SetBinContent(29,0.0);
  S10_PT_0->SetBinContent(30,0.0);
  S10_PT_0->SetBinContent(31,0.0);
  S10_PT_0->SetBinContent(32,0.0);
  S10_PT_0->SetBinContent(33,0.0);
  S10_PT_0->SetBinContent(34,4.65410055);
  S10_PT_0->SetBinContent(35,0.0);
  S10_PT_0->SetBinContent(36,0.0);
  S10_PT_0->SetBinContent(37,0.0);
  S10_PT_0->SetBinContent(38,0.0);
  S10_PT_0->SetBinContent(39,0.0);
  S10_PT_0->SetBinContent(40,0.0);
  S10_PT_0->SetBinContent(41,0.0); // overflow
  S10_PT_0->SetEntries(10000);
  // Style
  S10_PT_0->SetLineColor(9);
  S10_PT_0->SetLineStyle(1);
  S10_PT_0->SetLineWidth(1);
  S10_PT_0->SetFillColor(9);
  S10_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_232","mystack");
  stack->Add(S10_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ a_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_9.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_9.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_9.eps");

}
