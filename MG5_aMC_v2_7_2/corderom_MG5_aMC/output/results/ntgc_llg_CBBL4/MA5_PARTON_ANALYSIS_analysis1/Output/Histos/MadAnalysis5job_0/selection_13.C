void selection_13()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo27","canvas_plotflow_tempo27",0,0,700,500);
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
  TH1F* S14_PT_0 = new TH1F("S14_PT_0","S14_PT_0",40,0.0,650.0);
  // Content
  S14_PT_0->SetBinContent(0,0.0); // underflow
  S14_PT_0->SetBinContent(1,0.36742322542);
  S14_PT_0->SetBinContent(2,1.20084708308);
  S14_PT_0->SetBinContent(3,1.45177010044);
  S14_PT_0->SetBinContent(4,1.55930810788);
  S14_PT_0->SetBinContent(5,2.03427014074);
  S14_PT_0->SetBinContent(6,2.02530914012);
  S14_PT_0->SetBinContent(7,2.21350115314);
  S14_PT_0->SetBinContent(8,2.2851931581);
  S14_PT_0->SetBinContent(9,2.30311615934);
  S14_PT_0->SetBinContent(10,2.15973214942);
  S14_PT_0->SetBinContent(11,2.50027017298);
  S14_PT_0->SetBinContent(12,2.13284714756);
  S14_PT_0->SetBinContent(13,2.58092417856);
  S14_PT_0->SetBinContent(14,2.39273216554);
  S14_PT_0->SetBinContent(15,2.17765515066);
  S14_PT_0->SetBinContent(16,2.40169316616);
  S14_PT_0->SetBinContent(17,2.30311615934);
  S14_PT_0->SetBinContent(18,2.240386155);
  S14_PT_0->SetBinContent(19,1.9267321333);
  S14_PT_0->SetBinContent(20,2.12388614694);
  S14_PT_0->SetBinContent(21,2.08803914446);
  S14_PT_0->SetBinContent(22,1.90880913206);
  S14_PT_0->SetBinContent(23,1.59515511036);
  S14_PT_0->SetBinContent(24,1.6130781116);
  S14_PT_0->SetBinContent(25,1.72957811966);
  S14_PT_0->SetBinContent(26,1.67580811594);
  S14_PT_0->SetBinContent(27,1.50553910416);
  S14_PT_0->SetBinContent(28,1.55034710726);
  S14_PT_0->SetBinContent(29,1.39800109672);
  S14_PT_0->SetBinContent(30,1.6130781116);
  S14_PT_0->SetBinContent(31,1.31734709114);
  S14_PT_0->SetBinContent(32,1.38007809548);
  S14_PT_0->SetBinContent(33,1.46073110106);
  S14_PT_0->SetBinContent(34,1.26357708742);
  S14_PT_0->SetBinContent(35,1.1201930775);
  S14_PT_0->SetBinContent(36,1.1201930775);
  S14_PT_0->SetBinContent(37,1.28150108866);
  S14_PT_0->SetBinContent(38,1.02161607068);
  S14_PT_0->SetBinContent(39,0.96784666696);
  S14_PT_0->SetBinContent(40,1.03953907192);
  S14_PT_0->SetBinContent(41,20.5846614241); // overflow
  S14_PT_0->SetEntries(10000);
  // Style
  S14_PT_0->SetLineColor(9);
  S14_PT_0->SetLineStyle(1);
  S14_PT_0->SetLineWidth(1);
  S14_PT_0->SetFillColor(9);
  S14_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_28","mystack");
  stack->Add(S14_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ l+_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_13.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_13.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_13.eps");

}
