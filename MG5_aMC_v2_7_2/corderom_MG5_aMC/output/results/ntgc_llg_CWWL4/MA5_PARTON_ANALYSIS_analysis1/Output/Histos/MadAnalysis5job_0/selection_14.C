void selection_14()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo29","canvas_plotflow_tempo29",0,0,700,500);
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
  TH1F* S15_ETA_0 = new TH1F("S15_ETA_0","S15_ETA_0",40,-7.0,7.0);
  // Content
  S15_ETA_0->SetBinContent(0,0.0); // underflow
  S15_ETA_0->SetBinContent(1,0.0);
  S15_ETA_0->SetBinContent(2,0.0);
  S15_ETA_0->SetBinContent(3,0.0);
  S15_ETA_0->SetBinContent(4,0.0);
  S15_ETA_0->SetBinContent(5,0.0007916922563);
  S15_ETA_0->SetBinContent(6,0.0);
  S15_ETA_0->SetBinContent(7,0.00039584612815);
  S15_ETA_0->SetBinContent(8,0.00039584612815);
  S15_ETA_0->SetBinContent(9,0.0039584612815);
  S15_ETA_0->SetBinContent(10,0.00514599936595);
  S15_ETA_0->SetBinContent(11,0.0130629209289);
  S15_ETA_0->SetBinContent(12,0.0257300018298);
  S15_ETA_0->SetBinContent(13,0.0506683036032);
  S15_ETA_0->SetBinContent(14,0.0831276859115);
  S15_ETA_0->SetBinContent(15,0.124691508867);
  S15_ETA_0->SetBinContent(16,0.192381213681);
  S15_ETA_0->SetBinContent(17,0.267196119001);
  S15_ETA_0->SetBinContent(18,0.356657325363);
  S15_ETA_0->SetBinContent(19,0.398617028347);
  S15_ETA_0->SetBinContent(20,0.445722731697);
  S15_ETA_0->SetBinContent(21,0.464723333048);
  S15_ETA_0->SetBinContent(22,0.426326230318);
  S15_ETA_0->SetBinContent(23,0.35942822556);
  S15_ETA_0->SetBinContent(24,0.269967019198);
  S15_ETA_0->SetBinContent(25,0.180901712865);
  S15_ETA_0->SetBinContent(26,0.123899808811);
  S15_ETA_0->SetBinContent(27,0.0771899954893);
  S15_ETA_0->SetBinContent(28,0.0407721528995);
  S15_ETA_0->SetBinContent(29,0.0221673815764);
  S15_ETA_0->SetBinContent(30,0.0138546109852);
  S15_ETA_0->SetBinContent(31,0.0047501533378);
  S15_ETA_0->SetBinContent(32,0.00277092319705);
  S15_ETA_0->SetBinContent(33,0.0015833841126);
  S15_ETA_0->SetBinContent(34,0.00118753808445);
  S15_ETA_0->SetBinContent(35,0.0);
  S15_ETA_0->SetBinContent(36,0.0);
  S15_ETA_0->SetBinContent(37,0.0);
  S15_ETA_0->SetBinContent(38,0.00039584612815);
  S15_ETA_0->SetBinContent(39,0.0);
  S15_ETA_0->SetBinContent(40,0.0);
  S15_ETA_0->SetBinContent(41,0.0); // overflow
  S15_ETA_0->SetEntries(10000);
  // Style
  S15_ETA_0->SetLineColor(9);
  S15_ETA_0->SetLineStyle(1);
  S15_ETA_0->SetLineWidth(1);
  S15_ETA_0->SetFillColor(9);
  S15_ETA_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_30","mystack");
  stack->Add(S15_ETA_0);
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
  stack->GetXaxis()->SetTitle("#eta [ l+_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_14.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_14.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_14.eps");

}
