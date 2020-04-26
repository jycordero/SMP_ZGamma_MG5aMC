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
  S14_PT_0->SetBinContent(1,0.2393839215);
  S14_PT_0->SetBinContent(2,0.5511396495);
  S14_PT_0->SetBinContent(3,0.8962978805);
  S14_PT_0->SetBinContent(4,1.091145098);
  S14_PT_0->SetBinContent(5,1.414035127);
  S14_PT_0->SetBinContent(6,1.514242136);
  S14_PT_0->SetBinContent(7,1.33609612);
  S14_PT_0->SetBinContent(8,1.503108135);
  S14_PT_0->SetBinContent(9,1.313828118);
  S14_PT_0->SetBinContent(10,1.5754801415);
  S14_PT_0->SetBinContent(11,1.55877914);
  S14_PT_0->SetBinContent(12,1.5309431375);
  S14_PT_0->SetBinContent(13,1.4864071335);
  S14_PT_0->SetBinContent(14,1.6422851475);
  S14_PT_0->SetBinContent(15,1.4307361285);
  S14_PT_0->SetBinContent(16,1.44743713);
  S14_PT_0->SetBinContent(17,1.5086751355);
  S14_PT_0->SetBinContent(18,1.2191881095);
  S14_PT_0->SetBinContent(19,1.347230121);
  S14_PT_0->SetBinContent(20,1.1969191075);
  S14_PT_0->SetBinContent(21,1.1746511055);
  S14_PT_0->SetBinContent(22,1.0967120985);
  S14_PT_0->SetBinContent(23,1.0633100955);
  S14_PT_0->SetBinContent(24,1.035474093);
  S14_PT_0->SetBinContent(25,1.046609094);
  S14_PT_0->SetBinContent(26,1.0299070925);
  S14_PT_0->SetBinContent(27,0.9853708885);
  S14_PT_0->SetBinContent(28,0.901864881);
  S14_PT_0->SetBinContent(29,0.8962978805);
  S14_PT_0->SetBinContent(30,0.924133183);
  S14_PT_0->SetBinContent(31,0.8072247725);
  S14_PT_0->SetBinContent(32,0.7960906715);
  S14_PT_0->SetBinContent(33,0.857328377);
  S14_PT_0->SetBinContent(34,0.823925974);
  S14_PT_0->SetBinContent(35,0.5734079515);
  S14_PT_0->SetBinContent(36,0.6290786565);
  S14_PT_0->SetBinContent(37,0.590109153);
  S14_PT_0->SetBinContent(38,0.5734079515);
  S14_PT_0->SetBinContent(39,0.5511396495);
  S14_PT_0->SetBinContent(40,0.6290786565);
  S14_PT_0->SetBinContent(41,12.882191157); // overflow
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
