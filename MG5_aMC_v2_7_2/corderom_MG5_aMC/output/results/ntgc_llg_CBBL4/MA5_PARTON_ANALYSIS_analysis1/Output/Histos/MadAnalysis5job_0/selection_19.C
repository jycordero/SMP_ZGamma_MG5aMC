void selection_19()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo39","canvas_plotflow_tempo39",0,0,700,500);
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
  TH1F* S20_DELTAR_0 = new TH1F("S20_DELTAR_0","S20_DELTAR_0",40,0.0,8.0);
  // Content
  S20_DELTAR_0->SetBinContent(0,0.0); // underflow
  S20_DELTAR_0->SetBinContent(1,0.0);
  S20_DELTAR_0->SetBinContent(2,0.0);
  S20_DELTAR_0->SetBinContent(3,0.0);
  S20_DELTAR_0->SetBinContent(4,0.0089615442498);
  S20_DELTAR_0->SetBinContent(5,0.0);
  S20_DELTAR_0->SetBinContent(6,0.0);
  S20_DELTAR_0->SetBinContent(7,0.0);
  S20_DELTAR_0->SetBinContent(8,0.0);
  S20_DELTAR_0->SetBinContent(9,0.0089615442498);
  S20_DELTAR_0->SetBinContent(10,0.0);
  S20_DELTAR_0->SetBinContent(11,0.0268846337494);
  S20_DELTAR_0->SetBinContent(12,0.0985769837478);
  S20_DELTAR_0->SetBinContent(13,0.233000132495);
  S20_DELTAR_0->SetBinContent(14,0.636269588736);
  S20_DELTAR_0->SetBinContent(15,2.74223238244);
  S20_DELTAR_0->SetBinContent(16,28.2378239381);
  S20_DELTAR_0->SetBinContent(17,19.5451227258);
  S20_DELTAR_0->SetBinContent(18,11.049581541);
  S20_DELTAR_0->SetBinContent(19,7.95785110982);
  S20_DELTAR_0->SetBinContent(20,5.69057979362);
  S20_DELTAR_0->SetBinContent(21,3.91619454616);
  S20_DELTAR_0->SetBinContent(22,2.61677036494);
  S20_DELTAR_0->SetBinContent(23,1.93569326996);
  S20_DELTAR_0->SetBinContent(24,1.63100122746);
  S20_DELTAR_0->SetBinContent(25,1.12915415747);
  S20_DELTAR_0->SetBinContent(26,0.636269588736);
  S20_DELTAR_0->SetBinContent(27,0.501846469989);
  S20_DELTAR_0->SetBinContent(28,0.277807838744);
  S20_DELTAR_0->SetBinContent(29,0.268846337494);
  S20_DELTAR_0->SetBinContent(30,0.170269323746);
  S20_DELTAR_0->SetBinContent(31,0.0985769837478);
  S20_DELTAR_0->SetBinContent(32,0.0537692674988);
  S20_DELTAR_0->SetBinContent(33,0.044807716249);
  S20_DELTAR_0->SetBinContent(34,0.0627308087486);
  S20_DELTAR_0->SetBinContent(35,0.0179230924996);
  S20_DELTAR_0->SetBinContent(36,0.0089615442498);
  S20_DELTAR_0->SetBinContent(37,0.0);
  S20_DELTAR_0->SetBinContent(38,0.0);
  S20_DELTAR_0->SetBinContent(39,0.0);
  S20_DELTAR_0->SetBinContent(40,0.0089615442498);
  S20_DELTAR_0->SetBinContent(41,0.0); // overflow
  S20_DELTAR_0->SetEntries(10000);
  // Style
  S20_DELTAR_0->SetLineColor(9);
  S20_DELTAR_0->SetLineStyle(1);
  S20_DELTAR_0->SetLineWidth(1);
  S20_DELTAR_0->SetFillColor(9);
  S20_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_40","mystack");
  stack->Add(S20_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ a_{1}, l+_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_19.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_19.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_19.eps");

}
