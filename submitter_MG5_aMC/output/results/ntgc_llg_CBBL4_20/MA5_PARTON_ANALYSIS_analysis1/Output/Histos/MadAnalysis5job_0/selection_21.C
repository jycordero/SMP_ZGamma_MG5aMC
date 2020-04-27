void selection_21()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo43","canvas_plotflow_tempo43",0,0,700,500);
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
  TH1F* S22_DELTAR_0 = new TH1F("S22_DELTAR_0","S22_DELTAR_0",40,0.0,5.0);
  // Content
  S22_DELTAR_0->SetBinContent(0,0.0); // underflow
  S22_DELTAR_0->SetBinContent(1,257.638048656);
  S22_DELTAR_0->SetBinContent(2,827.354256251);
  S22_DELTAR_0->SetBinContent(3,464.868687793);
  S22_DELTAR_0->SetBinContent(4,252.261247641);
  S22_DELTAR_0->SetBinContent(5,146.517627671);
  S22_DELTAR_0->SetBinContent(6,84.0124158663);
  S22_DELTAR_0->SetBinContent(7,58.9207111275);
  S22_DELTAR_0->SetBinContent(8,34.0530364311);
  S22_DELTAR_0->SetBinContent(9,25.987844908);
  S22_DELTAR_0->SetBinContent(10,16.5784531309);
  S22_DELTAR_0->SetBinContent(11,13.6660225809);
  S22_DELTAR_0->SetBinContent(12,12.7698924117);
  S22_DELTAR_0->SetBinContent(13,7.16905935392);
  S22_DELTAR_0->SetBinContent(14,6.94502631161);
  S22_DELTAR_0->SetBinContent(15,6.27292718468);
  S22_DELTAR_0->SetBinContent(16,3.58452967696);
  S22_DELTAR_0->SetBinContent(17,4.70469588851);
  S22_DELTAR_0->SetBinContent(18,2.91243055003);
  S22_DELTAR_0->SetBinContent(19,1.12016521155);
  S22_DELTAR_0->SetBinContent(20,1.34419825386);
  S22_DELTAR_0->SetBinContent(21,1.56823229617);
  S22_DELTAR_0->SetBinContent(22,1.79226533848);
  S22_DELTAR_0->SetBinContent(23,0.67209932693);
  S22_DELTAR_0->SetBinContent(24,1.12016521155);
  S22_DELTAR_0->SetBinContent(25,1.79226533848);
  S22_DELTAR_0->SetBinContent(26,2.2403314231);
  S22_DELTAR_0->SetBinContent(27,0.44806618462);
  S22_DELTAR_0->SetBinContent(28,0.67209932693);
  S22_DELTAR_0->SetBinContent(29,0.67209932693);
  S22_DELTAR_0->SetBinContent(30,0.44806618462);
  S22_DELTAR_0->SetBinContent(31,0.0);
  S22_DELTAR_0->SetBinContent(32,0.0);
  S22_DELTAR_0->SetBinContent(33,0.0);
  S22_DELTAR_0->SetBinContent(34,0.0);
  S22_DELTAR_0->SetBinContent(35,0.0);
  S22_DELTAR_0->SetBinContent(36,0.0);
  S22_DELTAR_0->SetBinContent(37,0.0);
  S22_DELTAR_0->SetBinContent(38,0.22403314231);
  S22_DELTAR_0->SetBinContent(39,0.0);
  S22_DELTAR_0->SetBinContent(40,0.0);
  S22_DELTAR_0->SetBinContent(41,0.0); // overflow
  S22_DELTAR_0->SetEntries(10000);
  // Style
  S22_DELTAR_0->SetLineColor(9);
  S22_DELTAR_0->SetLineStyle(1);
  S22_DELTAR_0->SetLineWidth(1);
  S22_DELTAR_0->SetFillColor(9);
  S22_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_44","mystack");
  stack->Add(S22_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ l-_{1}, l+_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_21.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_21.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_21.eps");

}
