void selection_13()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo27","canvas_plotflow_tempo27",0,0,700,500);
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
  TH1F* S14_PT_0 = new TH1F("S14_PT_0","S14_PT_0",40,0.0,650.0);
  // Content
  S14_PT_0->SetBinContent(0,0.0); // underflow
  S14_PT_0->SetBinContent(1,9.1853571234);
  S14_PT_0->SetBinContent(2,30.0204336716);
  S14_PT_0->SetBinContent(3,36.2933644388);
  S14_PT_0->SetBinContent(4,38.9817547676);
  S14_PT_0->SetBinContent(5,50.8555162198);
  S14_PT_0->SetBinContent(6,50.6314761924);
  S14_PT_0->SetBinContent(7,55.3361767678);
  S14_PT_0->SetBinContent(8,57.128436987);
  S14_PT_0->SetBinContent(9,57.5765070418);
  S14_PT_0->SetBinContent(10,53.9919766034);
  S14_PT_0->SetBinContent(11,62.5052376446);
  S14_PT_0->SetBinContent(12,53.3198765212);
  S14_PT_0->SetBinContent(13,64.5215278912);
  S14_PT_0->SetBinContent(14,59.8168373158);
  S14_PT_0->SetBinContent(15,54.4400466582);
  S14_PT_0->SetBinContent(16,60.0408673432);
  S14_PT_0->SetBinContent(17,57.5765070418);
  S14_PT_0->SetBinContent(18,56.00827685);
  S14_PT_0->SetBinContent(19,48.167115891);
  S14_PT_0->SetBinContent(20,53.0958464938);
  S14_PT_0->SetBinContent(21,52.1997163842);
  S14_PT_0->SetBinContent(22,47.7190458362);
  S14_PT_0->SetBinContent(23,39.8778948772);
  S14_PT_0->SetBinContent(24,40.325954932);
  S14_PT_0->SetBinContent(25,43.2383852882);
  S14_PT_0->SetBinContent(26,41.8941851238);
  S14_PT_0->SetBinContent(27,37.6375646032);
  S14_PT_0->SetBinContent(28,38.7577247402);
  S14_PT_0->SetBinContent(29,34.9491642744);
  S14_PT_0->SetBinContent(30,40.325954932);
  S14_PT_0->SetBinContent(31,32.9328640278);
  S14_PT_0->SetBinContent(32,34.5010942196);
  S14_PT_0->SetBinContent(33,36.5173944662);
  S14_PT_0->SetBinContent(34,31.5886638634);
  S14_PT_0->SetBinContent(35,28.004133425);
  S14_PT_0->SetBinContent(36,28.004133425);
  S14_PT_0->SetBinContent(37,32.0367339182);
  S14_PT_0->SetBinContent(38,25.5397731236);
  S14_PT_0->SetBinContent(39,24.1955729592);
  S14_PT_0->SetBinContent(40,25.9878431784);
  S14_PT_0->SetBinContent(41,514.604062938); // overflow
  S14_PT_0->SetEntries(10000);
  // Style
  S14_PT_0->SetLineColor(9);
  S14_PT_0->SetLineStyle(1);
  S14_PT_0->SetLineWidth(1);
  S14_PT_0->SetFillColor(9);
  S14_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_28","mystack");
  stack->Add(S14_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ l+_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_13.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_13.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_13.eps");

}
