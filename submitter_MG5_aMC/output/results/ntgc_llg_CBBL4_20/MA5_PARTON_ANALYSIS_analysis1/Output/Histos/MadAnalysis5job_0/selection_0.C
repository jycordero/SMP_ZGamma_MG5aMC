void selection_0()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo1","canvas_plotflow_tempo1",0,0,700,500);
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
  TH1F* S1_THT_0 = new TH1F("S1_THT_0","S1_THT_0",40,0.0,500.0);
  // Content
  S1_THT_0->SetBinContent(0,0.0); // underflow
  S1_THT_0->SetBinContent(1,2240.331);
  S1_THT_0->SetBinContent(2,0.0);
  S1_THT_0->SetBinContent(3,0.0);
  S1_THT_0->SetBinContent(4,0.0);
  S1_THT_0->SetBinContent(5,0.0);
  S1_THT_0->SetBinContent(6,0.0);
  S1_THT_0->SetBinContent(7,0.0);
  S1_THT_0->SetBinContent(8,0.0);
  S1_THT_0->SetBinContent(9,0.0);
  S1_THT_0->SetBinContent(10,0.0);
  S1_THT_0->SetBinContent(11,0.0);
  S1_THT_0->SetBinContent(12,0.0);
  S1_THT_0->SetBinContent(13,0.0);
  S1_THT_0->SetBinContent(14,0.0);
  S1_THT_0->SetBinContent(15,0.0);
  S1_THT_0->SetBinContent(16,0.0);
  S1_THT_0->SetBinContent(17,0.0);
  S1_THT_0->SetBinContent(18,0.0);
  S1_THT_0->SetBinContent(19,0.0);
  S1_THT_0->SetBinContent(20,0.0);
  S1_THT_0->SetBinContent(21,0.0);
  S1_THT_0->SetBinContent(22,0.0);
  S1_THT_0->SetBinContent(23,0.0);
  S1_THT_0->SetBinContent(24,0.0);
  S1_THT_0->SetBinContent(25,0.0);
  S1_THT_0->SetBinContent(26,0.0);
  S1_THT_0->SetBinContent(27,0.0);
  S1_THT_0->SetBinContent(28,0.0);
  S1_THT_0->SetBinContent(29,0.0);
  S1_THT_0->SetBinContent(30,0.0);
  S1_THT_0->SetBinContent(31,0.0);
  S1_THT_0->SetBinContent(32,0.0);
  S1_THT_0->SetBinContent(33,0.0);
  S1_THT_0->SetBinContent(34,0.0);
  S1_THT_0->SetBinContent(35,0.0);
  S1_THT_0->SetBinContent(36,0.0);
  S1_THT_0->SetBinContent(37,0.0);
  S1_THT_0->SetBinContent(38,0.0);
  S1_THT_0->SetBinContent(39,0.0);
  S1_THT_0->SetBinContent(40,0.0);
  S1_THT_0->SetBinContent(41,0.0); // overflow
  S1_THT_0->SetEntries(10000);
  // Style
  S1_THT_0->SetLineColor(9);
  S1_THT_0->SetLineStyle(1);
  S1_THT_0->SetLineWidth(1);
  S1_THT_0->SetFillColor(9);
  S1_THT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_2","mystack");
  stack->Add(S1_THT_0);
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
  stack->GetXaxis()->SetTitle("H_{T} (GeV) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_0.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_0.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_0.eps");

}
