void selection_15()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo287","canvas_plotflow_tempo287",0,0,700,500);
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
  TH1F* S16_M_0 = new TH1F("S16_M_0","S16_M_0",40,0.0,800.0);
  // Content
  S16_M_0->SetBinContent(0,0.0); // underflow
  S16_M_0->SetBinContent(1,3248.56211168);
  S16_M_0->SetBinContent(2,10090.0903469);
  S16_M_0->SetBinContent(3,13659.7804696);
  S16_M_0->SetBinContent(4,8037.63127632);
  S16_M_0->SetBinContent(5,4230.57714544);
  S16_M_0->SetBinContent(6,2694.72409264);
  S16_M_0->SetBinContent(7,1442.7710496);
  S16_M_0->SetBinContent(8,977.3610336);
  S16_M_0->SetBinContent(9,614.34122112);
  S16_M_0->SetBinContent(10,460.75591584);
  S16_M_0->SetBinContent(11,269.93780928);
  S16_M_0->SetBinContent(12,190.81810656);
  S16_M_0->SetBinContent(13,144.27710496);
  S16_M_0->SetBinContent(14,102.39020352);
  S16_M_0->SetBinContent(15,93.0820032);
  S16_M_0->SetBinContent(16,60.50330208);
  S16_M_0->SetBinContent(17,55.84920192);
  S16_M_0->SetBinContent(18,32.57870112);
  S16_M_0->SetBinContent(19,23.2705008);
  S16_M_0->SetBinContent(20,9.30820032);
  S16_M_0->SetBinContent(21,23.2705008);
  S16_M_0->SetBinContent(22,13.96230048);
  S16_M_0->SetBinContent(23,4.65410016);
  S16_M_0->SetBinContent(24,9.30820032);
  S16_M_0->SetBinContent(25,9.30820032);
  S16_M_0->SetBinContent(26,4.65410016);
  S16_M_0->SetBinContent(27,9.30820032);
  S16_M_0->SetBinContent(28,0.0);
  S16_M_0->SetBinContent(29,0.0);
  S16_M_0->SetBinContent(30,0.0);
  S16_M_0->SetBinContent(31,4.65410016);
  S16_M_0->SetBinContent(32,4.65410016);
  S16_M_0->SetBinContent(33,4.65410016);
  S16_M_0->SetBinContent(34,4.65410016);
  S16_M_0->SetBinContent(35,4.65410016);
  S16_M_0->SetBinContent(36,0.0);
  S16_M_0->SetBinContent(37,0.0);
  S16_M_0->SetBinContent(38,0.0);
  S16_M_0->SetBinContent(39,0.0);
  S16_M_0->SetBinContent(40,0.0);
  S16_M_0->SetBinContent(41,4.65410016); // overflow
  S16_M_0->SetEntries(10000);
  // Style
  S16_M_0->SetLineColor(9);
  S16_M_0->SetLineStyle(1);
  S16_M_0->SetLineWidth(1);
  S16_M_0->SetFillColor(9);
  S16_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_288","mystack");
  stack->Add(S16_M_0);
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
  stack->GetXaxis()->SetTitle("M [ a_{1} l+_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_15.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_15.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_15.eps");

}
