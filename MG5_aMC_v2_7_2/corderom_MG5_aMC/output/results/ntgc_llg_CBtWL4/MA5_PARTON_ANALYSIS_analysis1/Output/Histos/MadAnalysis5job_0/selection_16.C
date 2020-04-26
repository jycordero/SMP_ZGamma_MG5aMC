void selection_16()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo33","canvas_plotflow_tempo33",0,0,700,500);
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
  S17_M_0->SetBinContent(1,0.0);
  S17_M_0->SetBinContent(2,0.0);
  S17_M_0->SetBinContent(3,0.0);
  S17_M_0->SetBinContent(4,0.011134130958);
  S17_M_0->SetBinContent(5,0.027835332395);
  S17_M_0->SetBinContent(6,0.083506007185);
  S17_M_0->SetBinContent(7,0.038969473353);
  S17_M_0->SetBinContent(8,0.066804805748);
  S17_M_0->SetBinContent(9,0.061237745269);
  S17_M_0->SetBinContent(10,0.094640148143);
  S17_M_0->SetBinContent(11,0.11134130958);
  S17_M_0->SetBinContent(12,0.128042511017);
  S17_M_0->SetBinContent(13,0.083506007185);
  S17_M_0->SetBinContent(14,0.16701201437);
  S17_M_0->SetBinContent(15,0.183713215807);
  S17_M_0->SetBinContent(16,0.244950921076);
  S17_M_0->SetBinContent(17,0.244950921076);
  S17_M_0->SetBinContent(18,0.228249719639);
  S17_M_0->SetBinContent(19,0.267219222992);
  S17_M_0->SetBinContent(20,0.295054525387);
  S17_M_0->SetBinContent(21,0.328456928261);
  S17_M_0->SetBinContent(22,0.272786323471);
  S17_M_0->SetBinContent(23,0.395261734009);
  S17_M_0->SetBinContent(24,0.350725230177);
  S17_M_0->SetBinContent(25,0.317322827303);
  S17_M_0->SetBinContent(26,0.367426431614);
  S17_M_0->SetBinContent(27,0.400828834488);
  S17_M_0->SetBinContent(28,0.439798337841);
  S17_M_0->SetBinContent(29,0.484334841673);
  S17_M_0->SetBinContent(30,0.356292330656);
  S17_M_0->SetBinContent(31,0.450932438799);
  S17_M_0->SetBinContent(32,0.462066539757);
  S17_M_0->SetBinContent(33,0.428664136883);
  S17_M_0->SetBinContent(34,0.439798337841);
  S17_M_0->SetBinContent(35,0.456499539278);
  S17_M_0->SetBinContent(36,0.450932438799);
  S17_M_0->SetBinContent(37,0.690316359396);
  S17_M_0->SetBinContent(38,0.506603143589);
  S17_M_0->SetBinContent(39,0.484334841673);
  S17_M_0->SetBinContent(40,0.462066539757);
  S17_M_0->SetBinContent(41,44.7870538536); // overflow
  S17_M_0->SetEntries(10000);
  // Style
  S17_M_0->SetLineColor(9);
  S17_M_0->SetLineStyle(1);
  S17_M_0->SetLineWidth(1);
  S17_M_0->SetFillColor(9);
  S17_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_34","mystack");
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
