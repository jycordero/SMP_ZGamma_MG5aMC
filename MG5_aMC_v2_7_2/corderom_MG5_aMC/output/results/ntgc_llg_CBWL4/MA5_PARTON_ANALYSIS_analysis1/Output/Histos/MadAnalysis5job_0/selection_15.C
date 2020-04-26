void selection_15()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo31","canvas_plotflow_tempo31",0,0,700,500);
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
  S16_M_0->SetBinContent(1,0.0);
  S16_M_0->SetBinContent(2,0.001543874562);
  S16_M_0->SetBinContent(3,0.001543874562);
  S16_M_0->SetBinContent(4,0.003087749124);
  S16_M_0->SetBinContent(5,0.003087749124);
  S16_M_0->SetBinContent(6,0.012350996496);
  S16_M_0->SetBinContent(7,0.013894866058);
  S16_M_0->SetBinContent(8,0.026245862554);
  S16_M_0->SetBinContent(9,0.024701992992);
  S16_M_0->SetBinContent(10,0.033965240364);
  S16_M_0->SetBinContent(11,0.035509109926);
  S16_M_0->SetBinContent(12,0.033965240364);
  S16_M_0->SetBinContent(13,0.043228487736);
  S16_M_0->SetBinContent(14,0.055579484232);
  S16_M_0->SetBinContent(15,0.043228487736);
  S16_M_0->SetBinContent(16,0.060211102918);
  S16_M_0->SetBinContent(17,0.047860106422);
  S16_M_0->SetBinContent(18,0.049403985984);
  S16_M_0->SetBinContent(19,0.058667233356);
  S16_M_0->SetBinContent(20,0.06947435029);
  S16_M_0->SetBinContent(21,0.080281477224);
  S16_M_0->SetBinContent(22,0.086456975472);
  S16_M_0->SetBinContent(23,0.081825346786);
  S16_M_0->SetBinContent(24,0.075649848538);
  S16_M_0->SetBinContent(25,0.097264092406);
  S16_M_0->SetBinContent(26,0.101895671092);
  S16_M_0->SetBinContent(27,0.103439570654);
  S16_M_0->SetBinContent(28,0.114246667588);
  S16_M_0->SetBinContent(29,0.089544724596);
  S16_M_0->SetBinContent(30,0.114246667588);
  S16_M_0->SetBinContent(31,0.103439570654);
  S16_M_0->SetBinContent(32,0.101895671092);
  S16_M_0->SetBinContent(33,0.125053864522);
  S16_M_0->SetBinContent(34,0.111158968464);
  S16_M_0->SetBinContent(35,0.171370051382);
  S16_M_0->SetBinContent(36,0.125053864522);
  S16_M_0->SetBinContent(37,0.149755857514);
  S16_M_0->SetBinContent(38,0.137404861018);
  S16_M_0->SetBinContent(39,0.142036459704);
  S16_M_0->SetBinContent(40,0.152843556638);
  S16_M_0->SetBinContent(41,12.5563364377); // overflow
  S16_M_0->SetEntries(10000);
  // Style
  S16_M_0->SetLineColor(9);
  S16_M_0->SetLineStyle(1);
  S16_M_0->SetLineWidth(1);
  S16_M_0->SetFillColor(9);
  S16_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_32","mystack");
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
