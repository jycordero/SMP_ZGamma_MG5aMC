void selection_4()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo9","canvas_plotflow_tempo9",0,0,700,500);
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
  TH1F* S5_ETA_0 = new TH1F("S5_ETA_0","S5_ETA_0",40,-7.0,7.0);
  // Content
  S5_ETA_0->SetBinContent(0,0.0); // underflow
  S5_ETA_0->SetBinContent(1,0.0);
  S5_ETA_0->SetBinContent(2,0.0);
  S5_ETA_0->SetBinContent(3,0.0);
  S5_ETA_0->SetBinContent(4,0.0);
  S5_ETA_0->SetBinContent(5,0.0268846331593);
  S5_ETA_0->SetBinContent(6,0.0089615440531);
  S5_ETA_0->SetBinContent(7,0.0179230921062);
  S5_ETA_0->SetBinContent(8,0.0179230921062);
  S5_ETA_0->SetBinContent(9,0.11650011369);
  S5_ETA_0->SetBinContent(10,0.170269320009);
  S5_ETA_0->SetBinContent(11,0.233000127381);
  S5_ETA_0->SetBinContent(12,0.555615665292);
  S5_ETA_0->SetBinContent(13,0.949923611629);
  S5_ETA_0->SetBinContent(14,1.83711621589);
  S5_ETA_0->SetBinContent(15,2.72430932014);
  S5_ETA_0->SetBinContent(16,4.65104154656);
  S5_ETA_0->SetBinContent(17,6.01319570663);
  S5_ETA_0->SetBinContent(18,7.98473493831);
  S5_ETA_0->SetBinContent(19,9.81289015314);
  S5_ETA_0->SetBinContent(20,10.0190011774);
  S5_ETA_0->SetBinContent(21,9.90250516368);
  S5_ETA_0->SetBinContent(22,9.16765907732);
  S5_ETA_0->SetBinContent(23,7.98473493831);
  S5_ETA_0->SetBinContent(24,6.58673477403);
  S5_ETA_0->SetBinContent(25,4.0326944739);
  S5_ETA_0->SetBinContent(26,2.87665533805);
  S5_ETA_0->SetBinContent(27,1.7385392043);
  S5_ETA_0->SetBinContent(28,1.02161612005);
  S5_ETA_0->SetBinContent(29,0.654192676876);
  S5_ETA_0->SetBinContent(30,0.340538640018);
  S5_ETA_0->SetBinContent(31,0.0985769815841);
  S5_ETA_0->SetBinContent(32,0.0537692663186);
  S5_ETA_0->SetBinContent(33,0.0089615440531);
  S5_ETA_0->SetBinContent(34,0.0);
  S5_ETA_0->SetBinContent(35,0.0089615440531);
  S5_ETA_0->SetBinContent(36,0.0);
  S5_ETA_0->SetBinContent(37,0.0);
  S5_ETA_0->SetBinContent(38,0.0);
  S5_ETA_0->SetBinContent(39,0.0);
  S5_ETA_0->SetBinContent(40,0.0);
  S5_ETA_0->SetBinContent(41,0.0); // overflow
  S5_ETA_0->SetEntries(10000);
  // Style
  S5_ETA_0->SetLineColor(9);
  S5_ETA_0->SetLineStyle(1);
  S5_ETA_0->SetLineWidth(1);
  S5_ETA_0->SetFillColor(9);
  S5_ETA_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_10","mystack");
  stack->Add(S5_ETA_0);
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
  stack->GetXaxis()->SetTitle("#eta [ z_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_4.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_4.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_4.eps");

}
