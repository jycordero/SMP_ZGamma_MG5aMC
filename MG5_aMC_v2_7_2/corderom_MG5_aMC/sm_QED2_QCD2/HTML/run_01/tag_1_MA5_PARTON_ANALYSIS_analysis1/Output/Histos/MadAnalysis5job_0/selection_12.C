void selection_12()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo237","canvas_plotflow_tempo237",0,0,700,500);
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
  TH1F* S13_ETA_0 = new TH1F("S13_ETA_0","S13_ETA_0",40,-10.0,10.0);
  // Content
  S13_ETA_0->SetBinContent(0,0.0); // underflow
  S13_ETA_0->SetBinContent(1,0.0);
  S13_ETA_0->SetBinContent(2,0.0);
  S13_ETA_0->SetBinContent(3,0.0);
  S13_ETA_0->SetBinContent(4,4.6541002);
  S13_ETA_0->SetBinContent(5,0.0);
  S13_ETA_0->SetBinContent(6,9.3082004);
  S13_ETA_0->SetBinContent(7,9.3082004);
  S13_ETA_0->SetBinContent(8,27.9246012);
  S13_ETA_0->SetBinContent(9,65.1574028);
  S13_ETA_0->SetBinContent(10,134.9689058);
  S13_ETA_0->SetBinContent(11,242.0132104);
  S13_ETA_0->SetBinContent(12,581.762525);
  S13_ETA_0->SetBinContent(13,1037.8640446);
  S13_ETA_0->SetBinContent(14,1601.0100688);
  S13_ETA_0->SetBinContent(15,1977.992085);
  S13_ETA_0->SetBinContent(16,2564.4091102);
  S13_ETA_0->SetBinContent(17,3239.2541392);
  S13_ETA_0->SetBinContent(18,3741.8961608);
  S13_ETA_0->SetBinContent(19,3695.3551588);
  S13_ETA_0->SetBinContent(20,4179.3821796);
  S13_ETA_0->SetBinContent(21,4090.9541758);
  S13_ETA_0->SetBinContent(22,3830.3241646);
  S13_ETA_0->SetBinContent(23,3476.6131494);
  S13_ETA_0->SetBinContent(24,3094.976133);
  S13_ETA_0->SetBinContent(25,2792.46012);
  S13_ETA_0->SetBinContent(26,2275.8550978);
  S13_ETA_0->SetBinContent(27,1554.4690668);
  S13_ETA_0->SetBinContent(28,1107.6760476);
  S13_ETA_0->SetBinContent(29,702.7691302);
  S13_ETA_0->SetBinContent(30,251.3214108);
  S13_ETA_0->SetBinContent(31,148.9312064);
  S13_ETA_0->SetBinContent(32,65.1574028);
  S13_ETA_0->SetBinContent(33,18.6164008);
  S13_ETA_0->SetBinContent(34,13.9623006);
  S13_ETA_0->SetBinContent(35,4.6541002);
  S13_ETA_0->SetBinContent(36,0.0);
  S13_ETA_0->SetBinContent(37,0.0);
  S13_ETA_0->SetBinContent(38,0.0);
  S13_ETA_0->SetBinContent(39,0.0);
  S13_ETA_0->SetBinContent(40,0.0);
  S13_ETA_0->SetBinContent(41,0.0); // overflow
  S13_ETA_0->SetEntries(10000);
  // Style
  S13_ETA_0->SetLineColor(9);
  S13_ETA_0->SetLineStyle(1);
  S13_ETA_0->SetLineWidth(1);
  S13_ETA_0->SetFillColor(9);
  S13_ETA_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_238","mystack");
  stack->Add(S13_ETA_0);
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
  stack->GetXaxis()->SetTitle("#eta [ l-_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_12.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_12.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_12.eps");

}
