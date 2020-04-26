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
  S14_PT_0->SetBinContent(1,0.066386620344);
  S14_PT_0->SetBinContent(2,0.166738500864);
  S14_PT_0->SetBinContent(3,0.233125101208);
  S14_PT_0->SetBinContent(4,0.305687201584);
  S14_PT_0->SetBinContent(5,0.336564701744);
  S14_PT_0->SetBinContent(6,0.342740201776);
  S14_PT_0->SetBinContent(7,0.384424901992);
  S14_PT_0->SetBinContent(8,0.385968702);
  S14_PT_0->SetBinContent(9,0.37824940196);
  S14_PT_0->SetBinContent(10,0.396775902056);
  S14_PT_0->SetBinContent(11,0.449267602328);
  S14_PT_0->SetBinContent(12,0.456987002368);
  S14_PT_0->SetBinContent(13,0.384424901992);
  S14_PT_0->SetBinContent(14,0.40912690212);
  S14_PT_0->SetBinContent(15,0.359722901864);
  S14_PT_0->SetBinContent(16,0.373617701936);
  S14_PT_0->SetBinContent(17,0.407583002112);
  S14_PT_0->SetBinContent(18,0.365898401896);
  S14_PT_0->SetBinContent(19,0.399863602072);
  S14_PT_0->SetBinContent(20,0.338108601752);
  S14_PT_0->SetBinContent(21,0.338108601752);
  S14_PT_0->SetBinContent(22,0.313406601624);
  S14_PT_0->SetBinContent(23,0.271722001408);
  S14_PT_0->SetBinContent(24,0.304143401576);
  S14_PT_0->SetBinContent(25,0.290248501504);
  S14_PT_0->SetBinContent(26,0.280985201456);
  S14_PT_0->SetBinContent(27,0.2701781014);
  S14_PT_0->SetBinContent(28,0.260914901352);
  S14_PT_0->SetBinContent(29,0.267090401384);
  S14_PT_0->SetBinContent(30,0.250107701296);
  S14_PT_0->SetBinContent(31,0.234669001216);
  S14_PT_0->SetBinContent(32,0.253195501312);
  S14_PT_0->SetBinContent(33,0.226949601176);
  S14_PT_0->SetBinContent(34,0.205335401064);
  S14_PT_0->SetBinContent(35,0.205335401064);
  S14_PT_0->SetBinContent(36,0.168282400872);
  S14_PT_0->SetBinContent(37,0.202247601048);
  S14_PT_0->SetBinContent(38,0.194528201008);
  S14_PT_0->SetBinContent(39,0.157475200816);
  S14_PT_0->SetBinContent(40,0.168282400872);
  S14_PT_0->SetBinContent(41,3.63428201883); // overflow
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
