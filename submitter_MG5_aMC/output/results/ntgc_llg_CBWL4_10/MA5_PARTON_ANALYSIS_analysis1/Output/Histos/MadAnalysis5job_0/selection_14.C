void selection_14()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo29","canvas_plotflow_tempo29",0,0,700,500);
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
  TH1F* S15_ETA_0 = new TH1F("S15_ETA_0","S15_ETA_0",40,-7.0,7.0);
  // Content
  S15_ETA_0->SetBinContent(0,0.0); // underflow
  S15_ETA_0->SetBinContent(1,0.0);
  S15_ETA_0->SetBinContent(2,0.0);
  S15_ETA_0->SetBinContent(3,0.0096492317537);
  S15_ETA_0->SetBinContent(4,0.0);
  S15_ETA_0->SetBinContent(5,0.0192984615074);
  S15_ETA_0->SetBinContent(6,0.0);
  S15_ETA_0->SetBinContent(7,0.0096492317537);
  S15_ETA_0->SetBinContent(8,0.0289476922611);
  S15_ETA_0->SetBinContent(9,0.0482461637685);
  S15_ETA_0->SetBinContent(10,0.135089210552);
  S15_ETA_0->SetBinContent(11,0.202633915828);
  S15_ETA_0->SetBinContent(12,0.414916932409);
  S15_ETA_0->SetBinContent(13,0.878080068587);
  S15_ETA_0->SetBinContent(14,1.89124914773);
  S15_ETA_0->SetBinContent(15,2.95266523063);
  S15_ETA_0->SetBinContent(16,5.04654839419);
  S15_ETA_0->SetBinContent(17,6.23340348689);
  S15_ETA_0->SetBinContent(18,8.93518869793);
  S15_ETA_0->SetBinContent(19,10.5080108208);
  S15_ETA_0->SetBinContent(20,11.1545108713);
  S15_ETA_0->SetBinContent(21,11.2317008773);
  S15_ETA_0->SetBinContent(22,10.2860808034);
  S15_ETA_0->SetBinContent(23,8.50097366401);
  S15_ETA_0->SetBinContent(24,6.33954549518);
  S15_ETA_0->SetBinContent(25,4.67987736554);
  S15_ETA_0->SetBinContent(26,2.91406822762);
  S15_ETA_0->SetBinContent(27,1.80440614094);
  S15_ETA_0->SetBinContent(28,1.10966208668);
  S15_ETA_0->SetBinContent(29,0.569304644468);
  S15_ETA_0->SetBinContent(30,0.279827721857);
  S15_ETA_0->SetBinContent(31,0.125440009798);
  S15_ETA_0->SetBinContent(32,0.0868430867833);
  S15_ETA_0->SetBinContent(33,0.0675446252759);
  S15_ETA_0->SetBinContent(34,0.0192984615074);
  S15_ETA_0->SetBinContent(35,0.0);
  S15_ETA_0->SetBinContent(36,0.0);
  S15_ETA_0->SetBinContent(37,0.0);
  S15_ETA_0->SetBinContent(38,0.0096492317537);
  S15_ETA_0->SetBinContent(39,0.0);
  S15_ETA_0->SetBinContent(40,0.0);
  S15_ETA_0->SetBinContent(41,0.0); // overflow
  S15_ETA_0->SetEntries(10000);
  // Style
  S15_ETA_0->SetLineColor(9);
  S15_ETA_0->SetLineStyle(1);
  S15_ETA_0->SetLineWidth(1);
  S15_ETA_0->SetFillColor(9);
  S15_ETA_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_30","mystack");
  stack->Add(S15_ETA_0);
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
  stack->GetXaxis()->SetTitle("#eta [ l+_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_14.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_14.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_14.eps");

}
