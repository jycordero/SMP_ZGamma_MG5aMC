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
  S20_DELTAR_0->SetBinContent(4,0.22403312643);
  S20_DELTAR_0->SetBinContent(5,0.0);
  S20_DELTAR_0->SetBinContent(6,0.0);
  S20_DELTAR_0->SetBinContent(7,0.0);
  S20_DELTAR_0->SetBinContent(8,0.0);
  S20_DELTAR_0->SetBinContent(9,0.22403312643);
  S20_DELTAR_0->SetBinContent(10,0.0);
  S20_DELTAR_0->SetBinContent(11,0.67209927929);
  S20_DELTAR_0->SetBinContent(12,2.46436429073);
  S20_DELTAR_0->SetBinContent(13,5.82486068718);
  S20_DELTAR_0->SetBinContent(14,15.9063518765);
  S20_DELTAR_0->SetBinContent(15,68.5541280876);
  S20_DELTAR_0->SetBinContent(16,705.928283281);
  S20_DELTAR_0->SetBinContent(17,488.616157644);
  S20_DELTAR_0->SetBinContent(18,276.232832588);
  S20_DELTAR_0->SetBinContent(19,198.94142347);
  S20_DELTAR_0->SetBinContent(20,142.261016783);
  S20_DELTAR_0->SetBinContent(21,97.9024615499);
  S20_DELTAR_0->SetBinContent(22,65.4176677176);
  S20_DELTAR_0->SetBinContent(23,48.3911457089);
  S20_DELTAR_0->SetBinContent(24,40.7740248103);
  S20_DELTAR_0->SetBinContent(25,28.2281733302);
  S20_DELTAR_0->SetBinContent(26,15.9063518765);
  S20_DELTAR_0->SetBinContent(27,12.5458514801);
  S20_DELTAR_0->SetBinContent(28,6.94502581933);
  S20_DELTAR_0->SetBinContent(29,6.7209927929);
  S20_DELTAR_0->SetBinContent(30,4.25662850217);
  S20_DELTAR_0->SetBinContent(31,2.46436429073);
  S20_DELTAR_0->SetBinContent(32,1.34419815858);
  S20_DELTAR_0->SetBinContent(33,1.12016513215);
  S20_DELTAR_0->SetBinContent(34,1.56823218501);
  S20_DELTAR_0->SetBinContent(35,0.44806615286);
  S20_DELTAR_0->SetBinContent(36,0.22403312643);
  S20_DELTAR_0->SetBinContent(37,0.0);
  S20_DELTAR_0->SetBinContent(38,0.0);
  S20_DELTAR_0->SetBinContent(39,0.0);
  S20_DELTAR_0->SetBinContent(40,0.22403312643);
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
