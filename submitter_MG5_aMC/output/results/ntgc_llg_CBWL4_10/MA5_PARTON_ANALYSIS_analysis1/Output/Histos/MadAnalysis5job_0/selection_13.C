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
  S14_PT_0->SetBinContent(1,0.41491689355);
  S14_PT_0->SetBinContent(2,1.0421169838);
  S14_PT_0->SetBinContent(3,1.45703397735);
  S14_PT_0->SetBinContent(4,1.9105479703);
  S14_PT_0->SetBinContent(5,2.1035319673);
  S14_PT_0->SetBinContent(6,2.1421289667);
  S14_PT_0->SetBinContent(7,2.40265896265);
  S14_PT_0->SetBinContent(8,2.4123079625);
  S14_PT_0->SetBinContent(9,2.36406196325);
  S14_PT_0->SetBinContent(10,2.47985196145);
  S14_PT_0->SetBinContent(11,2.80792595635);
  S14_PT_0->SetBinContent(12,2.8561719556);
  S14_PT_0->SetBinContent(13,2.40265896265);
  S14_PT_0->SetBinContent(14,2.55704596025);
  S14_PT_0->SetBinContent(15,2.24827096505);
  S14_PT_0->SetBinContent(16,2.3351139637);
  S14_PT_0->SetBinContent(17,2.5473969604);
  S14_PT_0->SetBinContent(18,2.28686796445);
  S14_PT_0->SetBinContent(19,2.49915096115);
  S14_PT_0->SetBinContent(20,2.11318196715);
  S14_PT_0->SetBinContent(21,2.11318196715);
  S14_PT_0->SetBinContent(22,1.95879396955);
  S14_PT_0->SetBinContent(23,1.6982649736);
  S14_PT_0->SetBinContent(24,1.90089897045);
  S14_PT_0->SetBinContent(25,1.8140549718);
  S14_PT_0->SetBinContent(26,1.7561599727);
  S14_PT_0->SetBinContent(27,1.68861497375);
  S14_PT_0->SetBinContent(28,1.63071997465);
  S14_PT_0->SetBinContent(29,1.66931697405);
  S14_PT_0->SetBinContent(30,1.5631749757);
  S14_PT_0->SetBinContent(31,1.4666829772);
  S14_PT_0->SetBinContent(32,1.5824739754);
  S14_PT_0->SetBinContent(33,1.41843697795);
  S14_PT_0->SetBinContent(34,1.28334798005);
  S14_PT_0->SetBinContent(35,1.28334798005);
  S14_PT_0->SetBinContent(36,1.05176598365);
  S14_PT_0->SetBinContent(37,1.26404898035);
  S14_PT_0->SetBinContent(38,1.2158029811);
  S14_PT_0->SetBinContent(39,0.9842215847);
  S14_PT_0->SetBinContent(40,1.05176598365);
  S14_PT_0->SetBinContent(41,22.7142896469); // overflow
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
