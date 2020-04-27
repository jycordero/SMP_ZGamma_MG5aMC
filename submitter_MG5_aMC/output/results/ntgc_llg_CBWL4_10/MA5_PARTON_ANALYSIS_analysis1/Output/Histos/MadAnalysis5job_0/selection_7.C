void selection_7()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo15","canvas_plotflow_tempo15",0,0,700,500);
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
  S8_M_0->SetBinContent(4,0.0);
  S8_M_0->SetBinContent(5,0.0);
  S8_M_0->SetBinContent(6,0.0);
  S8_M_0->SetBinContent(7,0.0);
  S8_M_0->SetBinContent(8,0.0);
  S8_M_0->SetBinContent(9,0.028947688539);
  S8_M_0->SetBinContent(10,0.019298459026);
  S8_M_0->SetBinContent(11,0.028947688539);
  S8_M_0->SetBinContent(12,0.0);
  S8_M_0->SetBinContent(13,0.028947688539);
  S8_M_0->SetBinContent(14,0.028947688539);
  S8_M_0->SetBinContent(15,0.057895387078);
  S8_M_0->SetBinContent(16,0.077193846104);
  S8_M_0->SetBinContent(17,0.09649230513);
  S8_M_0->SetBinContent(18,0.135089193182);
  S8_M_0->SetBinContent(19,0.125439993669);
  S8_M_0->SetBinContent(20,0.106141494643);
  S8_M_0->SetBinContent(21,0.144738492695);
  S8_M_0->SetBinContent(22,0.144738492695);
  S8_M_0->SetBinContent(23,0.154387692208);
  S8_M_0->SetBinContent(24,0.164036891721);
  S8_M_0->SetBinContent(25,0.202633889773);
  S8_M_0->SetBinContent(26,0.250879987338);
  S8_M_0->SetBinContent(27,0.164036891721);
  S8_M_0->SetBinContent(28,0.279827685877);
  S8_M_0->SetBinContent(29,0.183335390747);
  S8_M_0->SetBinContent(30,0.173686191234);
  S8_M_0->SetBinContent(31,0.250879987338);
  S8_M_0->SetBinContent(32,0.299126184903);
  S8_M_0->SetBinContent(33,0.270178486364);
  S8_M_0->SetBinContent(34,0.260529186851);
  S8_M_0->SetBinContent(35,0.221932288799);
  S8_M_0->SetBinContent(36,0.414916879059);
  S8_M_0->SetBinContent(37,0.472812276137);
  S8_M_0->SetBinContent(38,0.328073883442);
  S8_M_0->SetBinContent(39,0.328073883442);
  S8_M_0->SetBinContent(40,0.395618480033);
  S8_M_0->SetBinContent(41,90.6545254246); // overflow
  S8_M_0->SetEntries(10000);
  // Style
  S8_M_0->SetLineColor(9);
  S8_M_0->SetLineStyle(1);
  S8_M_0->SetLineWidth(1);
  S8_M_0->SetFillColor(9);
  S8_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_16","mystack");
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
