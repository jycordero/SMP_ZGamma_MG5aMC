void selection_5()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo11","canvas_plotflow_tempo11",0,0,700,500);
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
  TH1F* S6_PT_0 = new TH1F("S6_PT_0","S6_PT_0",40,0.0,1000.0);
  // Content
  S6_PT_0->SetBinContent(0,0.0); // underflow
  S6_PT_0->SetBinContent(1,0.0055670671593);
  S6_PT_0->SetBinContent(2,0.0779389422302);
  S6_PT_0->SetBinContent(3,0.15587790446);
  S6_PT_0->SetBinContent(4,0.228249706531);
  S6_PT_0->SetBinContent(5,0.339591109717);
  S6_PT_0->SetBinContent(6,0.334024009558);
  S6_PT_0->SetBinContent(7,0.512170114656);
  S6_PT_0->SetBinContent(8,0.701450420072);
  S6_PT_0->SetBinContent(9,0.751554021505);
  S6_PT_0->SetBinContent(10,0.740419921187);
  S6_PT_0->SetBinContent(11,0.885163625329);
  S6_PT_0->SetBinContent(12,0.885163625329);
  S6_PT_0->SetBinContent(13,0.896297825647);
  S6_PT_0->SetBinContent(14,0.929700226603);
  S6_PT_0->SetBinContent(15,1.06887703059);
  S6_PT_0->SetBinContent(16,1.20805403457);
  S6_PT_0->SetBinContent(17,1.20248603441);
  S6_PT_0->SetBinContent(18,1.21362103473);
  S6_PT_0->SetBinContent(19,1.0800110309);
  S6_PT_0->SetBinContent(20,1.03547402963);
  S6_PT_0->SetBinContent(21,1.18578503393);
  S6_PT_0->SetBinContent(22,1.22475503505);
  S6_PT_0->SetBinContent(23,1.16351703329);
  S6_PT_0->SetBinContent(24,1.20248603441);
  S6_PT_0->SetBinContent(25,0.996505028515);
  S6_PT_0->SetBinContent(26,1.14681603282);
  S6_PT_0->SetBinContent(27,1.22475503505);
  S6_PT_0->SetBinContent(28,1.00207202867);
  S6_PT_0->SetBinContent(29,1.0800110309);
  S6_PT_0->SetBinContent(30,1.03547402963);
  S6_PT_0->SetBinContent(31,1.12454803218);
  S6_PT_0->SetBinContent(32,1.13011503234);
  S6_PT_0->SetBinContent(33,1.05217603011);
  S6_PT_0->SetBinContent(34,1.02434002931);
  S6_PT_0->SetBinContent(35,1.08557803106);
  S6_PT_0->SetBinContent(36,0.935267226762);
  S6_PT_0->SetBinContent(37,0.95196842724);
  S6_PT_0->SetBinContent(38,0.901864825807);
  S6_PT_0->SetBinContent(39,0.9575355274);
  S6_PT_0->SetBinContent(40,0.762688221824);
  S6_PT_0->SetBinContent(41,20.2307205789); // overflow
  S6_PT_0->SetEntries(10000);
  // Style
  S6_PT_0->SetLineColor(9);
  S6_PT_0->SetLineStyle(1);
  S6_PT_0->SetLineWidth(1);
  S6_PT_0->SetFillColor(9);
  S6_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_12","mystack");
  stack->Add(S6_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ a_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_5.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_5.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_5.eps");

}
