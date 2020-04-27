void selection_18()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo37","canvas_plotflow_tempo37",0,0,700,500);
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
  TH1F* S19_M_0 = new TH1F("S19_M_0","S19_M_0",40,20.0,200.0);
  // Content
  S19_M_0->SetBinContent(0,0.0); // underflow
  S19_M_0->SetBinContent(1,0.0);
  S19_M_0->SetBinContent(2,0.0);
  S19_M_0->SetBinContent(3,0.0);
  S19_M_0->SetBinContent(4,0.0);
  S19_M_0->SetBinContent(5,0.0);
  S19_M_0->SetBinContent(6,0.0);
  S19_M_0->SetBinContent(7,0.0);
  S19_M_0->SetBinContent(8,0.67209935111);
  S19_M_0->SetBinContent(9,2.2403315037);
  S19_M_0->SetBinContent(10,5.60082825925);
  S19_M_0->SetBinContent(11,6.7209935111);
  S19_M_0->SetBinContent(12,10.5295523674);
  S19_M_0->SetBinContent(13,18.3707141303);
  S19_M_0->SetBinContent(14,38.0856285629);
  S19_M_0->SetBinContent(15,127.02682856);
  S19_M_0->SetBinContent(16,1342.85430192);
  S19_M_0->SetBinContent(17,554.257924615);
  S19_M_0->SetBinContent(18,67.4339651614);
  S19_M_0->SetBinContent(19,31.5886671022);
  S19_M_0->SetBinContent(20,12.5458528207);
  S19_M_0->SetBinContent(21,8.73729196443);
  S19_M_0->SetBinContent(22,5.60082825925);
  S19_M_0->SetBinContent(23,4.25662895703);
  S19_M_0->SetBinContent(24,3.36049675555);
  S19_M_0->SetBinContent(25,0.44806620074);
  S19_M_0->SetBinContent(26,0.0);
  S19_M_0->SetBinContent(27,0.0);
  S19_M_0->SetBinContent(28,0.0);
  S19_M_0->SetBinContent(29,0.0);
  S19_M_0->SetBinContent(30,0.0);
  S19_M_0->SetBinContent(31,0.0);
  S19_M_0->SetBinContent(32,0.0);
  S19_M_0->SetBinContent(33,0.0);
  S19_M_0->SetBinContent(34,0.0);
  S19_M_0->SetBinContent(35,0.0);
  S19_M_0->SetBinContent(36,0.0);
  S19_M_0->SetBinContent(37,0.0);
  S19_M_0->SetBinContent(38,0.0);
  S19_M_0->SetBinContent(39,0.0);
  S19_M_0->SetBinContent(40,0.0);
  S19_M_0->SetBinContent(41,0.0); // overflow
  S19_M_0->SetEntries(10000);
  // Style
  S19_M_0->SetLineColor(9);
  S19_M_0->SetLineStyle(1);
  S19_M_0->SetLineWidth(1);
  S19_M_0->SetFillColor(9);
  S19_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_38","mystack");
  stack->Add(S19_M_0);
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
  stack->GetXaxis()->SetTitle("M [ l+_{1} l-_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_18.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_18.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_18.eps");

}
