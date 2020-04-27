void selection_11()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo23","canvas_plotflow_tempo23",0,0,700,500);
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
  S12_PT_0->SetBinContent(1,12.993921624);
  S12_PT_0->SetBinContent(2,26.659943332);
  S12_PT_0->SetBinContent(3,36.96546462);
  S12_PT_0->SetBinContent(4,42.342255292);
  S12_PT_0->SetBinContent(5,43.910485488);
  S12_PT_0->SetBinContent(6,60.48893756);
  S12_PT_0->SetBinContent(7,64.297498036);
  S12_PT_0->SetBinContent(8,52.64777658);
  S12_PT_0->SetBinContent(9,60.040867504);
  S12_PT_0->SetBinContent(10,62.72926784);
  S12_PT_0->SetBinContent(11,61.6090977);
  S12_PT_0->SetBinContent(12,60.712967588);
  S12_PT_0->SetBinContent(13,53.991976748);
  S12_PT_0->SetBinContent(14,56.008277);
  S12_PT_0->SetBinContent(15,54.216006776);
  S12_PT_0->SetBinContent(16,54.88810686);
  S12_PT_0->SetBinContent(17,54.440046804);
  S12_PT_0->SetBinContent(18,51.079546384);
  S12_PT_0->SetBinContent(19,44.582585572);
  S12_PT_0->SetBinContent(20,51.751646468);
  S12_PT_0->SetBinContent(21,46.822915852);
  S12_PT_0->SetBinContent(22,47.04695588);
  S12_PT_0->SetBinContent(23,47.495015936);
  S12_PT_0->SetBinContent(24,46.598885824);
  S12_PT_0->SetBinContent(25,39.429824928);
  S12_PT_0->SetBinContent(26,39.429824928);
  S12_PT_0->SetBinContent(27,35.397234424);
  S12_PT_0->SetBinContent(28,34.053034256);
  S12_PT_0->SetBinContent(29,36.741424592);
  S12_PT_0->SetBinContent(30,36.293364536);
  S12_PT_0->SetBinContent(31,38.981754872);
  S12_PT_0->SetBinContent(32,35.173194396);
  S12_PT_0->SetBinContent(33,28.676233584);
  S12_PT_0->SetBinContent(34,31.588663948);
  S12_PT_0->SetBinContent(35,32.708834088);
  S12_PT_0->SetBinContent(36,30.020433752);
  S12_PT_0->SetBinContent(37,24.195573024);
  S12_PT_0->SetBinContent(38,30.468503808);
  S12_PT_0->SetBinContent(39,23.747512968);
  S12_PT_0->SetBinContent(40,22.179272772);
  S12_PT_0->SetBinContent(41,526.925865856); // overflow
  S12_PT_0->SetEntries(10000);
  // Style
  S12_PT_0->SetLineColor(9);
  S12_PT_0->SetLineStyle(1);
  S12_PT_0->SetLineWidth(1);
  S12_PT_0->SetFillColor(9);
  S12_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_24","mystack");
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
