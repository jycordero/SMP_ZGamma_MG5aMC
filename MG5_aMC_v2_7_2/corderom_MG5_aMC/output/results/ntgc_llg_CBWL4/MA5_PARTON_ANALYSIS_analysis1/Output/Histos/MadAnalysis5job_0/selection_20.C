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
  S21_DELTAR_0->SetBinContent(4,0.001543875139);
  S21_DELTAR_0->SetBinContent(5,0.001543875139);
  S21_DELTAR_0->SetBinContent(6,0.001543875139);
  S21_DELTAR_0->SetBinContent(7,0.001543875139);
  S21_DELTAR_0->SetBinContent(8,0.003087750278);
  S21_DELTAR_0->SetBinContent(9,0.001543875139);
  S21_DELTAR_0->SetBinContent(10,0.004631625417);
  S21_DELTAR_0->SetBinContent(11,0.010807120973);
  S21_DELTAR_0->SetBinContent(12,0.007719375695);
  S21_DELTAR_0->SetBinContent(13,0.03087750278);
  S21_DELTAR_0->SetBinContent(14,0.075649876811);
  S21_DELTAR_0->SetBinContent(15,0.512566546148);
  S21_DELTAR_0->SetBinContent(16,5.00833045092);
  S21_DELTAR_0->SetBinContent(17,3.23133029093);
  S21_DELTAR_0->SetBinContent(18,1.90205417125);
  S21_DELTAR_0->SetBinContent(19,1.31692511857);
  S21_DELTAR_0->SetBinContent(20,0.901623081176);
  S21_DELTAR_0->SetBinContent(21,0.702463163245);
  S21_DELTAR_0->SetBinContent(22,0.490952244202);
  S21_DELTAR_0->SetBinContent(23,0.350459631553);
  S21_DELTAR_0->SetBinContent(24,0.297967926827);
  S21_DELTAR_0->SetBinContent(25,0.202247618209);
  S21_DELTAR_0->SetBinContent(26,0.128141611537);
  S21_DELTAR_0->SetBinContent(27,0.09263250834);
  S21_DELTAR_0->SetBinContent(28,0.060211125421);
  S21_DELTAR_0->SetBinContent(29,0.043228503892);
  S21_DELTAR_0->SetBinContent(30,0.012351001112);
  S21_DELTAR_0->SetBinContent(31,0.021614251946);
  S21_DELTAR_0->SetBinContent(32,0.009263250834);
  S21_DELTAR_0->SetBinContent(33,0.003087750278);
  S21_DELTAR_0->SetBinContent(34,0.003087750278);
  S21_DELTAR_0->SetBinContent(35,0.0);
  S21_DELTAR_0->SetBinContent(36,0.0);
  S21_DELTAR_0->SetBinContent(37,0.001543875139);
  S21_DELTAR_0->SetBinContent(38,0.003087750278);
  S21_DELTAR_0->SetBinContent(39,0.003087750278);
  S21_DELTAR_0->SetBinContent(40,0.0);
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
