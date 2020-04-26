void selection_3()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo7","canvas_plotflow_tempo7",0,0,700,500);
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
  TH1F* S4_PT_0 = new TH1F("S4_PT_0","S4_PT_0",40,0.0,1000.0);
  // Content
  S4_PT_0->SetBinContent(0,0.0); // underflow
  S4_PT_0->SetBinContent(1,0.017923090102);
  S4_PT_0->SetBinContent(2,0.134423100765);
  S4_PT_0->SetBinContent(3,0.188192401071);
  S4_PT_0->SetBinContent(4,0.349500201989);
  S4_PT_0->SetBinContent(5,0.618346403519);
  S4_PT_0->SetBinContent(6,0.62730800357);
  S4_PT_0->SetBinContent(7,0.8961543051);
  S4_PT_0->SetBinContent(8,1.00369300571);
  S4_PT_0->SetBinContent(9,1.03057700586);
  S4_PT_0->SetBinContent(10,1.20084700683);
  S4_PT_0->SetBinContent(11,1.14707700653);
  S4_PT_0->SetBinContent(12,1.56827000893);
  S4_PT_0->SetBinContent(13,1.51450100862);
  S4_PT_0->SetBinContent(14,1.94465501107);
  S4_PT_0->SetBinContent(15,1.60411600913);
  S4_PT_0->SetBinContent(16,1.65788500943);
  S4_PT_0->SetBinContent(17,1.8281550104);
  S4_PT_0->SetBinContent(18,1.90880901086);
  S4_PT_0->SetBinContent(19,1.60411600913);
  S4_PT_0->SetBinContent(20,1.75646201);
  S4_PT_0->SetBinContent(21,1.73853900989);
  S4_PT_0->SetBinContent(22,1.90880901086);
  S4_PT_0->SetBinContent(23,1.52346200867);
  S4_PT_0->SetBinContent(24,2.16869301234);
  S4_PT_0->SetBinContent(25,1.90880901086);
  S4_PT_0->SetBinContent(26,1.69373200964);
  S4_PT_0->SetBinContent(27,1.70269300969);
  S4_PT_0->SetBinContent(28,1.89984701081);
  S4_PT_0->SetBinContent(29,1.7923090102);
  S4_PT_0->SetBinContent(30,1.71165500974);
  S4_PT_0->SetBinContent(31,1.74750100995);
  S4_PT_0->SetBinContent(32,1.56827000893);
  S4_PT_0->SetBinContent(33,1.55034700882);
  S4_PT_0->SetBinContent(34,1.60411600913);
  S4_PT_0->SetBinContent(35,1.65788500943);
  S4_PT_0->SetBinContent(36,1.8102320103);
  S4_PT_0->SetBinContent(37,1.65788500943);
  S4_PT_0->SetBinContent(38,1.51450100862);
  S4_PT_0->SetBinContent(39,1.39800100796);
  S4_PT_0->SetBinContent(40,1.3531930077);
  S4_PT_0->SetBinContent(41,33.1039401884); // overflow
  S4_PT_0->SetEntries(10000);
  // Style
  S4_PT_0->SetLineColor(9);
  S4_PT_0->SetLineStyle(1);
  S4_PT_0->SetLineWidth(1);
  S4_PT_0->SetFillColor(9);
  S4_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_8","mystack");
  stack->Add(S4_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ z_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_3.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_3.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_3.eps");

}
