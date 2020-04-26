void selection_17()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo35","canvas_plotflow_tempo35",0,0,700,500);
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
  TH1F* S18_M_0 = new TH1F("S18_M_0","S18_M_0",40,0.0,900.0);
  // Content
  S18_M_0->SetBinContent(0,0.0); // underflow
  S18_M_0->SetBinContent(1,0.0);
  S18_M_0->SetBinContent(2,0.0);
  S18_M_0->SetBinContent(3,0.0);
  S18_M_0->SetBinContent(4,0.0);
  S18_M_0->SetBinContent(5,0.0);
  S18_M_0->SetBinContent(6,0.0);
  S18_M_0->SetBinContent(7,0.0);
  S18_M_0->SetBinContent(8,0.004631624238);
  S18_M_0->SetBinContent(9,0.004631624238);
  S18_M_0->SetBinContent(10,0.003087749492);
  S18_M_0->SetBinContent(11,0.003087749492);
  S18_M_0->SetBinContent(12,0.003087749492);
  S18_M_0->SetBinContent(13,0.006175498984);
  S18_M_0->SetBinContent(14,0.016982617206);
  S18_M_0->SetBinContent(15,0.01543874746);
  S18_M_0->SetBinContent(16,0.02315811619);
  S18_M_0->SetBinContent(17,0.02315811619);
  S18_M_0->SetBinContent(18,0.020070366698);
  S18_M_0->SetBinContent(19,0.026245865682);
  S18_M_0->SetBinContent(20,0.027789745428);
  S18_M_0->SetBinContent(21,0.027789745428);
  S18_M_0->SetBinContent(22,0.03087749492);
  S18_M_0->SetBinContent(23,0.049403991872);
  S18_M_0->SetBinContent(24,0.027789745428);
  S18_M_0->SetBinContent(25,0.047860112126);
  S18_M_0->SetBinContent(26,0.035509114158);
  S18_M_0->SetBinContent(27,0.032421364666);
  S18_M_0->SetBinContent(28,0.047860112126);
  S18_M_0->SetBinContent(29,0.058667240348);
  S18_M_0->SetBinContent(30,0.041684613142);
  S18_M_0->SetBinContent(31,0.040140743396);
  S18_M_0->SetBinContent(32,0.072562108062);
  S18_M_0->SetBinContent(33,0.08491310603);
  S18_M_0->SetBinContent(34,0.05403561111);
  S18_M_0->SetBinContent(35,0.063298859586);
  S18_M_0->SetBinContent(36,0.078737607046);
  S18_M_0->SetBinContent(37,0.064842739332);
  S18_M_0->SetBinContent(38,0.06947435857);
  S18_M_0->SetBinContent(39,0.078737607046);
  S18_M_0->SetBinContent(40,0.067930488824);
  S18_M_0->SetBinContent(41,14.186667666); // overflow
  S18_M_0->SetEntries(10000);
  // Style
  S18_M_0->SetLineColor(9);
  S18_M_0->SetLineStyle(1);
  S18_M_0->SetLineWidth(1);
  S18_M_0->SetFillColor(9);
  S18_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_36","mystack");
  stack->Add(S18_M_0);
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
  stack->GetXaxis()->SetTitle("M [ a_{1} l+_{1} l-_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_17.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_17.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_17.eps");

}
