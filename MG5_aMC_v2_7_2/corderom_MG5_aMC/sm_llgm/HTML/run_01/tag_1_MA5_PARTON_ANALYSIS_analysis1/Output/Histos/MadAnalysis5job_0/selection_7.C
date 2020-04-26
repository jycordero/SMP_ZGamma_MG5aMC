void selection_7()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo271","canvas_plotflow_tempo271",0,0,700,500);
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
  TH1F* S8_M_0 = new TH1F("S8_M_0","S8_M_0",40,0.0,800.0);
  // Content
  S8_M_0->SetBinContent(0,0.0); // underflow
  S8_M_0->SetBinContent(1,0.0);
  S8_M_0->SetBinContent(2,0.0);
  S8_M_0->SetBinContent(3,0.0);
  S8_M_0->SetBinContent(4,65.1574049);
  S8_M_0->SetBinContent(5,721.38555425);
  S8_M_0->SetBinContent(6,20091.751511);
  S8_M_0->SetBinContent(7,11435.1208599);
  S8_M_0->SetBinContent(8,5687.3104277);
  S8_M_0->SetBinContent(9,2839.0012135);
  S8_M_0->SetBinContent(10,1717.36312915);
  S8_M_0->SetBinContent(11,968.0528728);
  S8_M_0->SetBinContent(12,753.9642567);
  S8_M_0->SetBinContent(13,544.52974095);
  S8_M_0->SetBinContent(14,400.2526301);
  S8_M_0->SetBinContent(15,260.6296196);
  S8_M_0->SetBinContent(16,204.7804154);
  S8_M_0->SetBinContent(17,148.9312112);
  S8_M_0->SetBinContent(18,158.2394119);
  S8_M_0->SetBinContent(19,65.1574049);
  S8_M_0->SetBinContent(20,97.73610735);
  S8_M_0->SetBinContent(21,79.11970595);
  S8_M_0->SetBinContent(22,60.50330455);
  S8_M_0->SetBinContent(23,32.57870245);
  S8_M_0->SetBinContent(24,23.27050175);
  S8_M_0->SetBinContent(25,23.27050175);
  S8_M_0->SetBinContent(26,13.96230105);
  S8_M_0->SetBinContent(27,23.27050175);
  S8_M_0->SetBinContent(28,4.65410035);
  S8_M_0->SetBinContent(29,18.6164014);
  S8_M_0->SetBinContent(30,18.6164014);
  S8_M_0->SetBinContent(31,4.65410035);
  S8_M_0->SetBinContent(32,18.6164014);
  S8_M_0->SetBinContent(33,9.3082007);
  S8_M_0->SetBinContent(34,4.65410035);
  S8_M_0->SetBinContent(35,4.65410035);
  S8_M_0->SetBinContent(36,9.3082007);
  S8_M_0->SetBinContent(37,9.3082007);
  S8_M_0->SetBinContent(38,0.0);
  S8_M_0->SetBinContent(39,0.0);
  S8_M_0->SetBinContent(40,4.65410035);
  S8_M_0->SetBinContent(41,18.6164014); // overflow
  S8_M_0->SetEntries(10000);
  // Style
  S8_M_0->SetLineColor(9);
  S8_M_0->SetLineStyle(1);
  S8_M_0->SetLineWidth(1);
  S8_M_0->SetFillColor(9);
  S8_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_272","mystack");
  stack->Add(S8_M_0);
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
  stack->GetXaxis()->SetTitle("M [ a_{1} z_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_7.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_7.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_7.eps");

}
