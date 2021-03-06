void selection_9()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo19","canvas_plotflow_tempo19",0,0,700,500);
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
  TH1F* S10_PT_0 = new TH1F("S10_PT_0","S10_PT_0",40,0.0,800.0);
  // Content
  S10_PT_0->SetBinContent(0,0.0); // underflow
  S10_PT_0->SetBinContent(1,0.0096492311249);
  S10_PT_0->SetBinContent(2,0.0675446208743);
  S10_PT_0->SetBinContent(3,0.106141501374);
  S10_PT_0->SetBinContent(4,0.183335402373);
  S10_PT_0->SetBinContent(5,0.328073904247);
  S10_PT_0->SetBinContent(6,0.395618505121);
  S10_PT_0->SetBinContent(7,0.617550807994);
  S10_PT_0->SetBinContent(8,0.578953907494);
  S10_PT_0->SetBinContent(9,0.897378511616);
  S10_PT_0->SetBinContent(10,0.752640009742);
  S10_PT_0->SetBinContent(11,0.935975412115);
  S10_PT_0->SetBinContent(12,1.08071401399);
  S10_PT_0->SetBinContent(13,1.08071401399);
  S10_PT_0->SetBinContent(14,1.18685501536);
  S10_PT_0->SetBinContent(15,1.06141501374);
  S10_PT_0->SetBinContent(16,1.37984001786);
  S10_PT_0->SetBinContent(17,1.21580301574);
  S10_PT_0->SetBinContent(18,1.33159401724);
  S10_PT_0->SetBinContent(19,1.43773501861);
  S10_PT_0->SetBinContent(20,1.57282502036);
  S10_PT_0->SetBinContent(21,1.52457901973);
  S10_PT_0->SetBinContent(22,1.51492901961);
  S10_PT_0->SetBinContent(23,1.50528001948);
  S10_PT_0->SetBinContent(24,1.74651102261);
  S10_PT_0->SetBinContent(25,1.55352602011);
  S10_PT_0->SetBinContent(26,1.71756302223);
  S10_PT_0->SetBinContent(27,1.91054802473);
  S10_PT_0->SetBinContent(28,1.59212302061);
  S10_PT_0->SetBinContent(29,1.63072002111);
  S10_PT_0->SetBinContent(30,1.78510802311);
  S10_PT_0->SetBinContent(31,1.54387701998);
  S10_PT_0->SetBinContent(32,1.49563101936);
  S10_PT_0->SetBinContent(33,1.40878801824);
  S10_PT_0->SetBinContent(34,1.56317502023);
  S10_PT_0->SetBinContent(35,1.52457901973);
  S10_PT_0->SetBinContent(36,1.49563101936);
  S10_PT_0->SetBinContent(37,1.66931702161);
  S10_PT_0->SetBinContent(38,1.63072002111);
  S10_PT_0->SetBinContent(39,1.41843701836);
  S10_PT_0->SetBinContent(40,1.25440001624);
  S10_PT_0->SetBinContent(41,48.7865106315); // overflow
  S10_PT_0->SetEntries(10000);
  // Style
  S10_PT_0->SetLineColor(9);
  S10_PT_0->SetLineStyle(1);
  S10_PT_0->SetLineWidth(1);
  S10_PT_0->SetFillColor(9);
  S10_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_20","mystack");
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
