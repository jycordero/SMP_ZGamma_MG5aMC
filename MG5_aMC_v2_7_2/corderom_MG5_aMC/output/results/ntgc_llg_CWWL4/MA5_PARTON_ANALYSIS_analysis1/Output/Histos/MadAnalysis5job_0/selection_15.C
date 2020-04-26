void selection_15()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo31","canvas_plotflow_tempo31",0,0,700,500);
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
  TH1F* S16_M_0 = new TH1F("S16_M_0","S16_M_0",40,0.0,800.0);
  // Content
  S16_M_0->SetBinContent(0,0.0); // underflow
  S16_M_0->SetBinContent(1,0.0);
  S16_M_0->SetBinContent(2,0.0);
  S16_M_0->SetBinContent(3,0.00039584610178);
  S16_M_0->SetBinContent(4,0.00039584610178);
  S16_M_0->SetBinContent(5,0.00237507701068);
  S16_M_0->SetBinContent(6,0.00277092301246);
  S16_M_0->SetBinContent(7,0.00356261501602);
  S16_M_0->SetBinContent(8,0.00475015302136);
  S16_M_0->SetBinContent(9,0.00435430701958);
  S16_M_0->SetBinContent(10,0.00672938303026);
  S16_M_0->SetBinContent(11,0.0098961520445);
  S16_M_0->SetBinContent(12,0.0102920000463);
  S16_M_0->SetBinContent(13,0.0114795400516);
  S16_M_0->SetBinContent(14,0.0102920000463);
  S16_M_0->SetBinContent(15,0.0158338400712);
  S16_M_0->SetBinContent(16,0.0134587700605);
  S16_M_0->SetBinContent(17,0.0146463100659);
  S16_M_0->SetBinContent(18,0.0154380000694);
  S16_M_0->SetBinContent(19,0.0166255400748);
  S16_M_0->SetBinContent(20,0.016229690073);
  S16_M_0->SetBinContent(21,0.0241466101086);
  S16_M_0->SetBinContent(22,0.0257300001157);
  S16_M_0->SetBinContent(23,0.0225632301015);
  S16_M_0->SetBinContent(24,0.0328552301477);
  S16_M_0->SetBinContent(25,0.023354920105);
  S16_M_0->SetBinContent(26,0.0336469201513);
  S16_M_0->SetBinContent(27,0.0281050701264);
  S16_M_0->SetBinContent(28,0.0273133801228);
  S16_M_0->SetBinContent(29,0.0308759901388);
  S16_M_0->SetBinContent(30,0.0304801501371);
  S16_M_0->SetBinContent(31,0.0304801501371);
  S16_M_0->SetBinContent(32,0.0225632301015);
  S16_M_0->SetBinContent(33,0.0316676901424);
  S16_M_0->SetBinContent(34,0.0356261501602);
  S16_M_0->SetBinContent(35,0.0364178401638);
  S16_M_0->SetBinContent(36,0.0391887601762);
  S16_M_0->SetBinContent(37,0.0415638401869);
  S16_M_0->SetBinContent(38,0.0336469201513);
  S16_M_0->SetBinContent(39,0.0427513801922);
  S16_M_0->SetBinContent(40,0.0320635301442);
  S16_M_0->SetBinContent(41,3.17389401427); // overflow
  S16_M_0->SetEntries(10000);
  // Style
  S16_M_0->SetLineColor(9);
  S16_M_0->SetLineStyle(1);
  S16_M_0->SetLineWidth(1);
  S16_M_0->SetFillColor(9);
  S16_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_32","mystack");
  stack->Add(S16_M_0);
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
  stack->GetXaxis()->SetTitle("M [ a_{1} l+_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_15.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_15.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_15.eps");

}
