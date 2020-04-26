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
  S15_ETA_0->SetBinContent(3,0.0015438750885);
  S15_ETA_0->SetBinContent(4,0.0);
  S15_ETA_0->SetBinContent(5,0.003087750177);
  S15_ETA_0->SetBinContent(6,0.0);
  S15_ETA_0->SetBinContent(7,0.0015438750885);
  S15_ETA_0->SetBinContent(8,0.0046316252655);
  S15_ETA_0->SetBinContent(9,0.0077193754425);
  S15_ETA_0->SetBinContent(10,0.021614251239);
  S15_ETA_0->SetBinContent(11,0.0324213718585);
  S15_ETA_0->SetBinContent(12,0.0663866238055);
  S15_ETA_0->SetBinContent(13,0.140492608053);
  S15_ETA_0->SetBinContent(14,0.302599517346);
  S15_ETA_0->SetBinContent(15,0.472425727081);
  S15_ETA_0->SetBinContent(16,0.807446646286);
  S15_ETA_0->SetBinContent(17,0.997343257171);
  S15_ETA_0->SetBinContent(18,1.42962808195);
  S15_ETA_0->SetBinContent(19,1.68128009638);
  S15_ETA_0->SetBinContent(20,1.78471910231);
  S15_ETA_0->SetBinContent(21,1.79707010301);
  S15_ETA_0->SetBinContent(22,1.64577109434);
  S15_ETA_0->SetBinContent(23,1.36015407797);
  S15_ETA_0->SetBinContent(24,1.01432605814);
  S15_ETA_0->SetBinContent(25,0.748779442923);
  S15_ETA_0->SetBinContent(26,0.466250226727);
  S15_ETA_0->SetBinContent(27,0.288704616549);
  S15_ETA_0->SetBinContent(28,0.177545610177);
  S15_ETA_0->SetBinContent(29,0.0910886252215);
  S15_ETA_0->SetBinContent(30,0.0447723725665);
  S15_ETA_0->SetBinContent(31,0.0200703711505);
  S15_ETA_0->SetBinContent(32,0.0138948707965);
  S15_ETA_0->SetBinContent(33,0.0108071206195);
  S15_ETA_0->SetBinContent(34,0.003087750177);
  S15_ETA_0->SetBinContent(35,0.0);
  S15_ETA_0->SetBinContent(36,0.0);
  S15_ETA_0->SetBinContent(37,0.0);
  S15_ETA_0->SetBinContent(38,0.0015438750885);
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
