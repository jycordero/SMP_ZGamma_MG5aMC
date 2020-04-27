void selection_20()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo41","canvas_plotflow_tempo41",0,0,700,500);
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
  TH1F* S21_DELTAR_0 = new TH1F("S21_DELTAR_0","S21_DELTAR_0",40,0.0,8.0);
  // Content
  S21_DELTAR_0->SetBinContent(0,0.0); // underflow
  S21_DELTAR_0->SetBinContent(1,0.0);
  S21_DELTAR_0->SetBinContent(2,0.0);
  S21_DELTAR_0->SetBinContent(3,0.0);
  S21_DELTAR_0->SetBinContent(4,0.0);
  S21_DELTAR_0->SetBinContent(5,0.0);
  S21_DELTAR_0->SetBinContent(6,0.0);
  S21_DELTAR_0->SetBinContent(7,0.0);
  S21_DELTAR_0->SetBinContent(8,0.44806617064);
  S21_DELTAR_0->SetBinContent(9,0.44806617064);
  S21_DELTAR_0->SetBinContent(10,0.44806617064);
  S21_DELTAR_0->SetBinContent(11,1.1201651766);
  S21_DELTAR_0->SetBinContent(12,2.46436438852);
  S21_DELTAR_0->SetBinContent(13,6.27292698896);
  S21_DELTAR_0->SetBinContent(14,15.0102223664);
  S21_DELTAR_0->SetBinContent(15,74.1549616909);
  S21_DELTAR_0->SetBinContent(16,700.32751041);
  S21_DELTAR_0->SetBinContent(17,479.206775549);
  S21_DELTAR_0->SetBinContent(18,285.418144998);
  S21_DELTAR_0->SetBinContent(19,200.509631611);
  S21_DELTAR_0->SetBinContent(20,129.491120415);
  S21_DELTAR_0->SetBinContent(21,103.727316353);
  S21_DELTAR_0->SetBinContent(22,72.5867314437);
  S21_DELTAR_0->SetBinContent(23,48.8392176998);
  S21_DELTAR_0->SetBinContent(24,37.1894958631);
  S21_DELTAR_0->SetBinContent(25,25.9878440971);
  S21_DELTAR_0->SetBinContent(26,17.0265126843);
  S21_DELTAR_0->SetBinContent(27,11.6497218366);
  S21_DELTAR_0->SetBinContent(28,9.85745655408);
  S21_DELTAR_0->SetBinContent(29,7.16905913024);
  S21_DELTAR_0->SetBinContent(30,2.68839742384);
  S21_DELTAR_0->SetBinContent(31,3.3604965298);
  S21_DELTAR_0->SetBinContent(32,2.01629831788);
  S21_DELTAR_0->SetBinContent(33,1.1201651766);
  S21_DELTAR_0->SetBinContent(34,0.22403313532);
  S21_DELTAR_0->SetBinContent(35,0.44806617064);
  S21_DELTAR_0->SetBinContent(36,0.44806617064);
  S21_DELTAR_0->SetBinContent(37,0.0);
  S21_DELTAR_0->SetBinContent(38,0.0);
  S21_DELTAR_0->SetBinContent(39,0.22403313532);
  S21_DELTAR_0->SetBinContent(40,0.44806617064);
  S21_DELTAR_0->SetBinContent(41,0.0); // overflow
  S21_DELTAR_0->SetEntries(10000);
  // Style
  S21_DELTAR_0->SetLineColor(9);
  S21_DELTAR_0->SetLineStyle(1);
  S21_DELTAR_0->SetLineWidth(1);
  S21_DELTAR_0->SetFillColor(9);
  S21_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_42","mystack");
  stack->Add(S21_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ a_{1}, l-_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_20.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_20.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_20.eps");

}
