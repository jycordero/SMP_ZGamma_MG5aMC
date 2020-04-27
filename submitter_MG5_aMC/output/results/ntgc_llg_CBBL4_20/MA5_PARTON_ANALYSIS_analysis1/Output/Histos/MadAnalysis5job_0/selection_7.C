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
  S8_M_0->SetBinContent(8,0.22403310554);
  S8_M_0->SetBinContent(9,0.22403310554);
  S8_M_0->SetBinContent(10,0.0);
  S8_M_0->SetBinContent(11,0.44806611108);
  S8_M_0->SetBinContent(12,0.44806611108);
  S8_M_0->SetBinContent(13,0.67209921662);
  S8_M_0->SetBinContent(14,1.56823203878);
  S8_M_0->SetBinContent(15,2.2403310554);
  S8_M_0->SetBinContent(16,1.1201650277);
  S8_M_0->SetBinContent(17,2.68839706648);
  S8_M_0->SetBinContent(18,1.56823203878);
  S8_M_0->SetBinContent(19,1.56823203878);
  S8_M_0->SetBinContent(20,3.58452908864);
  S8_M_0->SetBinContent(21,4.4806611108);
  S8_M_0->SetBinContent(22,2.2403310554);
  S8_M_0->SetBinContent(23,3.80856209418);
  S8_M_0->SetBinContent(24,3.13646307756);
  S8_M_0->SetBinContent(25,6.04889314958);
  S8_M_0->SetBinContent(26,5.15276112742);
  S8_M_0->SetBinContent(27,4.03259509972);
  S8_M_0->SetBinContent(28,5.15276112742);
  S8_M_0->SetBinContent(29,5.82486014404);
  S8_M_0->SetBinContent(30,4.03259509972);
  S8_M_0->SetBinContent(31,6.49695916066);
  S8_M_0->SetBinContent(32,6.27292615512);
  S8_M_0->SetBinContent(33,5.6008271385);
  S8_M_0->SetBinContent(34,8.9613232216);
  S8_M_0->SetBinContent(35,8.9613232216);
  S8_M_0->SetBinContent(36,7.8411581939);
  S8_M_0->SetBinContent(37,6.49695916066);
  S8_M_0->SetBinContent(38,9.18535622714);
  S8_M_0->SetBinContent(39,8.28922420498);
  S8_M_0->SetBinContent(40,6.7209921662);
  S8_M_0->SetBinContent(41,2105.23905206); // overflow
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
