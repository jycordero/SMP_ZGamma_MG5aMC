void selection_7()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo227","canvas_plotflow_tempo227",0,0,700,500);
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
  TH1F* S8_M_0 = new TH1F("S8_M_0","S8_M_0",40,0.0,500.0);
  // Content
  S8_M_0->SetBinContent(0,0.0); // underflow
  S8_M_0->SetBinContent(1,0.0);
  S8_M_0->SetBinContent(2,0.0);
  S8_M_0->SetBinContent(3,0.0);
  S8_M_0->SetBinContent(4,0.0);
  S8_M_0->SetBinContent(5,0.0);
  S8_M_0->SetBinContent(6,37.23280496);
  S8_M_0->SetBinContent(7,125.66071674);
  S8_M_0->SetBinContent(8,623.64948308);
  S8_M_0->SetBinContent(9,12877.8917155);
  S8_M_0->SetBinContent(10,11183.8014899);
  S8_M_0->SetBinContent(11,6497.12486552);
  S8_M_0->SetBinContent(12,4263.15656792);
  S8_M_0->SetBinContent(13,2871.58038254);
  S8_M_0->SetBinContent(14,1815.0992418);
  S8_M_0->SetBinContent(15,1317.11017546);
  S8_M_0->SetBinContent(16,944.78242586);
  S8_M_0->SetBinContent(17,646.91998618);
  S8_M_0->SetBinContent(18,563.14617502);
  S8_M_0->SetBinContent(19,409.56085456);
  S8_M_0->SetBinContent(20,376.98215022);
  S8_M_0->SetBinContent(21,339.74934526);
  S8_M_0->SetBinContent(22,223.39682976);
  S8_M_0->SetBinContent(23,200.12632666);
  S8_M_0->SetBinContent(24,167.54762232);
  S8_M_0->SetBinContent(25,134.96891798);
  S8_M_0->SetBinContent(26,125.66071674);
  S8_M_0->SetBinContent(27,88.42791178);
  S8_M_0->SetBinContent(28,116.3525155);
  S8_M_0->SetBinContent(29,55.84920744);
  S8_M_0->SetBinContent(30,51.19510682);
  S8_M_0->SetBinContent(31,41.88690558);
  S8_M_0->SetBinContent(32,60.50330806);
  S8_M_0->SetBinContent(33,51.19510682);
  S8_M_0->SetBinContent(34,46.5410062);
  S8_M_0->SetBinContent(35,41.88690558);
  S8_M_0->SetBinContent(36,13.96230186);
  S8_M_0->SetBinContent(37,18.61640248);
  S8_M_0->SetBinContent(38,4.65410062);
  S8_M_0->SetBinContent(39,32.57870434);
  S8_M_0->SetBinContent(40,9.30820124);
  S8_M_0->SetBinContent(41,162.8935217); // overflow
  S8_M_0->SetEntries(10000);
  // Style
  S8_M_0->SetLineColor(9);
  S8_M_0->SetLineStyle(1);
  S8_M_0->SetLineWidth(1);
  S8_M_0->SetFillColor(9);
  S8_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_228","mystack");
  stack->Add(S8_M_0);
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
  stack->GetXaxis()->SetTitle("M [ a_{1} z_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_7.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_7.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_7.eps");

}
