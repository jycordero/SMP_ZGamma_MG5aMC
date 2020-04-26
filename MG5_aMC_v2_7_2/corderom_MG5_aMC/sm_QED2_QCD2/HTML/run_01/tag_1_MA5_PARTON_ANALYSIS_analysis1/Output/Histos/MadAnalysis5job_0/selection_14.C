void selection_14()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo241","canvas_plotflow_tempo241",0,0,700,500);
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
  TH1F* S15_ETA_0 = new TH1F("S15_ETA_0","S15_ETA_0",40,-10.0,10.0);
  // Content
  S15_ETA_0->SetBinContent(0,0.0); // underflow
  S15_ETA_0->SetBinContent(1,0.0);
  S15_ETA_0->SetBinContent(2,0.0);
  S15_ETA_0->SetBinContent(3,0.0);
  S15_ETA_0->SetBinContent(4,0.0);
  S15_ETA_0->SetBinContent(5,0.0);
  S15_ETA_0->SetBinContent(6,0.0);
  S15_ETA_0->SetBinContent(7,13.96230027);
  S15_ETA_0->SetBinContent(8,18.61640036);
  S15_ETA_0->SetBinContent(9,46.5410009);
  S15_ETA_0->SetBinContent(10,134.96890261);
  S15_ETA_0->SetBinContent(11,279.2460054);
  S15_ETA_0->SetBinContent(12,549.18381062);
  S15_ETA_0->SetBinContent(13,930.820018);
  S15_ETA_0->SetBinContent(14,1461.38702826);
  S15_ETA_0->SetBinContent(15,2085.03704032);
  S15_ETA_0->SetBinContent(16,2648.18305121);
  S15_ETA_0->SetBinContent(17,3104.28506003);
  S15_ETA_0->SetBinContent(18,3741.89607236);
  S15_ETA_0->SetBinContent(19,3909.4440756);
  S15_ETA_0->SetBinContent(20,4332.96708379);
  S15_ETA_0->SetBinContent(21,4281.7720828);
  S15_ETA_0->SetBinContent(22,3909.4440756);
  S15_ETA_0->SetBinContent(23,3532.46206831);
  S15_ETA_0->SetBinContent(24,3327.68106435);
  S15_ETA_0->SetBinContent(25,2750.57305319);
  S15_ETA_0->SetBinContent(26,2136.23204131);
  S15_ETA_0->SetBinContent(27,1498.62002898);
  S15_ETA_0->SetBinContent(28,940.12821818);
  S15_ETA_0->SetBinContent(29,502.64280972);
  S15_ETA_0->SetBinContent(30,246.66730477);
  S15_ETA_0->SetBinContent(31,107.04430207);
  S15_ETA_0->SetBinContent(32,46.5410009);
  S15_ETA_0->SetBinContent(33,4.65410009);
  S15_ETA_0->SetBinContent(34,0.0);
  S15_ETA_0->SetBinContent(35,0.0);
  S15_ETA_0->SetBinContent(36,0.0);
  S15_ETA_0->SetBinContent(37,0.0);
  S15_ETA_0->SetBinContent(38,0.0);
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
  THStack* stack = new THStack("mystack_242","mystack");
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
