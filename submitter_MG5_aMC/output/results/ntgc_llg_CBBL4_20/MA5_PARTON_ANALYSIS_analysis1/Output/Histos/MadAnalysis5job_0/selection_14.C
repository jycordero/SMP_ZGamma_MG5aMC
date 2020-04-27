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
  S15_ETA_0->SetBinContent(3,0.22403313827);
  S15_ETA_0->SetBinContent(4,0.0);
  S15_ETA_0->SetBinContent(5,0.0);
  S15_ETA_0->SetBinContent(6,0.44806617654);
  S15_ETA_0->SetBinContent(7,0.89613245308);
  S15_ETA_0->SetBinContent(8,0.89613245308);
  S15_ETA_0->SetBinContent(9,2.2403313827);
  S15_ETA_0->SetBinContent(10,3.58452961232);
  S15_ETA_0->SetBinContent(11,6.7209931481);
  S15_ETA_0->SetBinContent(12,14.5621524876);
  S15_ETA_0->SetBinContent(13,26.6599445541);
  S15_ETA_0->SetBinContent(14,40.1019268503);
  S15_ETA_0->SetBinContent(15,69.8983319402);
  S15_ETA_0->SetBinContent(16,117.393320053);
  S15_ETA_0->SetBinContent(17,145.845524914);
  S15_ETA_0->SetBinContent(18,197.597233754);
  S15_ETA_0->SetBinContent(19,250.469042786);
  S15_ETA_0->SetBinContent(20,244.868141829);
  S15_ETA_0->SetBinContent(21,258.086144087);
  S15_ETA_0->SetBinContent(22,224.257138308);
  S15_ETA_0->SetBinContent(23,198.941433984);
  S15_ETA_0->SetBinContent(24,162.872027822);
  S15_ETA_0->SetBinContent(25,107.311818331);
  S15_ETA_0->SetBinContent(26,68.5541317106);
  S15_ETA_0->SetBinContent(27,42.5662872713);
  S15_ETA_0->SetBinContent(28,27.5560747072);
  S15_ETA_0->SetBinContent(29,14.5621524876);
  S15_ETA_0->SetBinContent(30,6.94502618637);
  S15_ETA_0->SetBinContent(31,3.36049657405);
  S15_ETA_0->SetBinContent(32,1.56823226789);
  S15_ETA_0->SetBinContent(33,0.89613245308);
  S15_ETA_0->SetBinContent(34,0.22403313827);
  S15_ETA_0->SetBinContent(35,0.0);
  S15_ETA_0->SetBinContent(36,0.22403313827);
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
