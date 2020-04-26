void selection_16()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo289","canvas_plotflow_tempo289",0,0,700,500);
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
  TH1F* S17_M_0 = new TH1F("S17_M_0","S17_M_0",40,0.0,800.0);
  // Content
  S17_M_0->SetBinContent(0,0.0); // underflow
  S17_M_0->SetBinContent(1,3262.52426638);
  S17_M_0->SetBinContent(2,9941.15781168);
  S17_M_0->SetBinContent(3,12933.741056);
  S17_M_0->SetBinContent(4,8503.04169426);
  S17_M_0->SetBinContent(5,4500.51536746);
  S17_M_0->SetBinContent(6,2657.49121698);
  S17_M_0->SetBinContent(7,1475.35012046);
  S17_M_0->SetBinContent(8,851.70036954);
  S17_M_0->SetBinContent(9,581.7625475);
  S17_M_0->SetBinContent(10,446.79363648);
  S17_M_0->SetBinContent(11,381.63623116);
  S17_M_0->SetBinContent(12,209.4345171);
  S17_M_0->SetBinContent(13,153.58531254);
  S17_M_0->SetBinContent(14,130.31481064);
  S17_M_0->SetBinContent(15,107.04430874);
  S17_M_0->SetBinContent(16,88.42790722);
  S17_M_0->SetBinContent(17,41.88690342);
  S17_M_0->SetBinContent(18,46.5410038);
  S17_M_0->SetBinContent(19,37.23280304);
  S17_M_0->SetBinContent(20,37.23280304);
  S17_M_0->SetBinContent(21,27.92460228);
  S17_M_0->SetBinContent(22,13.96230114);
  S17_M_0->SetBinContent(23,18.61640152);
  S17_M_0->SetBinContent(24,13.96230114);
  S17_M_0->SetBinContent(25,18.61640152);
  S17_M_0->SetBinContent(26,4.65410038);
  S17_M_0->SetBinContent(27,13.96230114);
  S17_M_0->SetBinContent(28,9.30820076);
  S17_M_0->SetBinContent(29,0.0);
  S17_M_0->SetBinContent(30,4.65410038);
  S17_M_0->SetBinContent(31,9.30820076);
  S17_M_0->SetBinContent(32,0.0);
  S17_M_0->SetBinContent(33,9.30820076);
  S17_M_0->SetBinContent(34,0.0);
  S17_M_0->SetBinContent(35,0.0);
  S17_M_0->SetBinContent(36,0.0);
  S17_M_0->SetBinContent(37,0.0);
  S17_M_0->SetBinContent(38,0.0);
  S17_M_0->SetBinContent(39,4.65410038);
  S17_M_0->SetBinContent(40,0.0);
  S17_M_0->SetBinContent(41,4.65410038); // overflow
  S17_M_0->SetEntries(10000);
  // Style
  S17_M_0->SetLineColor(9);
  S17_M_0->SetLineStyle(1);
  S17_M_0->SetLineWidth(1);
  S17_M_0->SetFillColor(9);
  S17_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_290","mystack");
  stack->Add(S17_M_0);
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
  stack->GetXaxis()->SetTitle("M [ a_{1} l-_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_16.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_16.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_16.eps");

}
