void selection_2()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo5","canvas_plotflow_tempo5",0,0,700,500);
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
  TH1F* S3_SQRTS_0 = new TH1F("S3_SQRTS_0","S3_SQRTS_0",40,0.0,500.0);
  // Content
  S3_SQRTS_0->SetBinContent(0,0.0); // underflow
  S3_SQRTS_0->SetBinContent(1,0.0);
  S3_SQRTS_0->SetBinContent(2,0.0);
  S3_SQRTS_0->SetBinContent(3,0.0);
  S3_SQRTS_0->SetBinContent(4,0.0);
  S3_SQRTS_0->SetBinContent(5,0.0);
  S3_SQRTS_0->SetBinContent(6,0.0);
  S3_SQRTS_0->SetBinContent(7,0.0);
  S3_SQRTS_0->SetBinContent(8,0.0);
  S3_SQRTS_0->SetBinContent(9,0.0);
  S3_SQRTS_0->SetBinContent(10,0.0);
  S3_SQRTS_0->SetBinContent(11,0.0);
  S3_SQRTS_0->SetBinContent(12,0.22403316747);
  S3_SQRTS_0->SetBinContent(13,0.0);
  S3_SQRTS_0->SetBinContent(14,0.22403316747);
  S3_SQRTS_0->SetBinContent(15,0.0);
  S3_SQRTS_0->SetBinContent(16,0.0);
  S3_SQRTS_0->SetBinContent(17,0.22403316747);
  S3_SQRTS_0->SetBinContent(18,0.22403316747);
  S3_SQRTS_0->SetBinContent(19,0.0);
  S3_SQRTS_0->SetBinContent(20,0.44806623494);
  S3_SQRTS_0->SetBinContent(21,0.89613256988);
  S3_SQRTS_0->SetBinContent(22,0.67209940241);
  S3_SQRTS_0->SetBinContent(23,1.56823247229);
  S3_SQRTS_0->SetBinContent(24,1.34419840482);
  S3_SQRTS_0->SetBinContent(25,0.44806623494);
  S3_SQRTS_0->SetBinContent(26,1.34419840482);
  S3_SQRTS_0->SetBinContent(27,1.56823247229);
  S3_SQRTS_0->SetBinContent(28,1.34419840482);
  S3_SQRTS_0->SetBinContent(29,0.67209940241);
  S3_SQRTS_0->SetBinContent(30,1.12016533735);
  S3_SQRTS_0->SetBinContent(31,1.79226553976);
  S3_SQRTS_0->SetBinContent(32,2.2403316747);
  S3_SQRTS_0->SetBinContent(33,2.68839780964);
  S3_SQRTS_0->SetBinContent(34,2.2403316747);
  S3_SQRTS_0->SetBinContent(35,1.34419840482);
  S3_SQRTS_0->SetBinContent(36,2.68839780964);
  S3_SQRTS_0->SetBinContent(37,1.79226553976);
  S3_SQRTS_0->SetBinContent(38,2.01629860723);
  S3_SQRTS_0->SetBinContent(39,2.68839780964);
  S3_SQRTS_0->SetBinContent(40,4.25662928193);
  S3_SQRTS_0->SetBinContent(41,2204.26166384); // overflow
  S3_SQRTS_0->SetEntries(10000);
  // Style
  S3_SQRTS_0->SetLineColor(9);
  S3_SQRTS_0->SetLineStyle(1);
  S3_SQRTS_0->SetLineWidth(1);
  S3_SQRTS_0->SetFillColor(9);
  S3_SQRTS_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_6","mystack");
  stack->Add(S3_SQRTS_0);
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
  stack->GetXaxis()->SetTitle("#sqrt{#hat{s}} (GeV) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_2.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_2.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_2.eps");

}
