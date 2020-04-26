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
  S10_PT_0->SetBinContent(1,0.0);
  S10_PT_0->SetBinContent(2,0.071692342768);
  S10_PT_0->SetBinContent(3,0.107538504152);
  S10_PT_0->SetBinContent(4,0.188192407266);
  S10_PT_0->SetBinContent(5,0.322615512456);
  S10_PT_0->SetBinContent(6,0.439115616954);
  S10_PT_0->SetBinContent(7,0.519769520068);
  S10_PT_0->SetBinContent(8,0.528731020414);
  S10_PT_0->SetBinContent(9,0.779654230102);
  S10_PT_0->SetBinContent(10,0.878231233908);
  S10_PT_0->SetBinContent(11,0.770692729756);
  S10_PT_0->SetBinContent(12,0.932000435984);
  S10_PT_0->SetBinContent(13,1.03057703979);
  S10_PT_0->SetBinContent(14,0.994731238406);
  S10_PT_0->SetBinContent(15,1.21877004706);
  S10_PT_0->SetBinContent(16,1.24565404809);
  S10_PT_0->SetBinContent(17,1.35319305225);
  S10_PT_0->SetBinContent(18,1.51450105847);
  S10_PT_0->SetBinContent(19,1.39800105398);
  S10_PT_0->SetBinContent(20,1.20980804671);
  S10_PT_0->SetBinContent(21,1.40696205432);
  S10_PT_0->SetBinContent(22,1.58619306124);
  S10_PT_0->SetBinContent(23,1.28150104948);
  S10_PT_0->SetBinContent(24,1.36215405259);
  S10_PT_0->SetBinContent(25,1.4607310564);
  S10_PT_0->SetBinContent(26,1.40696205432);
  S10_PT_0->SetBinContent(27,1.49657805778);
  S10_PT_0->SetBinContent(28,1.36215405259);
  S10_PT_0->SetBinContent(29,1.27253904913);
  S10_PT_0->SetBinContent(30,1.80127006955);
  S10_PT_0->SetBinContent(31,1.48761605744);
  S10_PT_0->SetBinContent(32,1.36215405259);
  S10_PT_0->SetBinContent(33,1.46969305674);
  S10_PT_0->SetBinContent(34,1.33527005155);
  S10_PT_0->SetBinContent(35,1.55034705986);
  S10_PT_0->SetBinContent(36,1.4607310564);
  S10_PT_0->SetBinContent(37,1.39800105398);
  S10_PT_0->SetBinContent(38,1.31734705086);
  S10_PT_0->SetBinContent(39,1.43384705536);
  S10_PT_0->SetBinContent(40,1.20980804671);
  S10_PT_0->SetBinContent(41,45.6501017625); // overflow
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
