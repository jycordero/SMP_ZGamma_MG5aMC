void selection_11()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo23","canvas_plotflow_tempo23",0,0,700,500);
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
  TH1F* S12_PT_0 = new TH1F("S12_PT_0","S12_PT_0",40,0.0,650.0);
  // Content
  S12_PT_0->SetBinContent(0,0.0); // underflow
  S12_PT_0->SetBinContent(1,0.25051801755);
  S12_PT_0->SetBinContent(2,0.66248104641);
  S12_PT_0->SetBinContent(3,0.8350600585);
  S12_PT_0->SetBinContent(4,1.26372408853);
  S12_PT_0->SetBinContent(5,1.00763907059);
  S12_PT_0->SetBinContent(6,1.30269409126);
  S12_PT_0->SetBinContent(7,1.56434610959);
  S12_PT_0->SetBinContent(8,1.3917670975);
  S12_PT_0->SetBinContent(9,1.58661411115);
  S12_PT_0->SetBinContent(10,1.54764510842);
  S12_PT_0->SetBinContent(11,1.51424210608);
  S12_PT_0->SetBinContent(12,1.38063309672);
  S12_PT_0->SetBinContent(13,1.70909011973);
  S12_PT_0->SetBinContent(14,1.34166309399);
  S12_PT_0->SetBinContent(15,1.53651010764);
  S12_PT_0->SetBinContent(16,1.41960209945);
  S12_PT_0->SetBinContent(17,1.2804250897);
  S12_PT_0->SetBinContent(18,1.32496209282);
  S12_PT_0->SetBinContent(19,1.31382809204);
  S12_PT_0->SetBinContent(20,1.27485808931);
  S12_PT_0->SetBinContent(21,1.113413078);
  S12_PT_0->SetBinContent(22,0.99650506981);
  S12_PT_0->SetBinContent(23,1.02990707215);
  S12_PT_0->SetBinContent(24,1.01320607098);
  S12_PT_0->SetBinContent(25,1.07444407527);
  S12_PT_0->SetBinContent(26,1.03547407254);
  S12_PT_0->SetBinContent(27,0.97980386864);
  S12_PT_0->SetBinContent(28,1.17465108229);
  S12_PT_0->SetBinContent(29,0.90186486318);
  S12_PT_0->SetBinContent(30,0.80165765616);
  S12_PT_0->SetBinContent(31,0.8907307624);
  S12_PT_0->SetBinContent(32,0.72928585109);
  S12_PT_0->SetBinContent(33,0.76825525382);
  S12_PT_0->SetBinContent(34,0.74041995187);
  S12_PT_0->SetBinContent(35,0.76268825343);
  S12_PT_0->SetBinContent(36,0.81279185694);
  S12_PT_0->SetBinContent(37,0.65134684563);
  S12_PT_0->SetBinContent(38,0.76268825343);
  S12_PT_0->SetBinContent(39,0.64021274485);
  S12_PT_0->SetBinContent(40,0.55113963861);
  S12_PT_0->SetBinContent(41,12.7318808919); // overflow
  S12_PT_0->SetEntries(10000);
  // Style
  S12_PT_0->SetLineColor(9);
  S12_PT_0->SetLineStyle(1);
  S12_PT_0->SetLineWidth(1);
  S12_PT_0->SetFillColor(9);
  S12_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_24","mystack");
  stack->Add(S12_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ l-_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_11.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_11.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_11.eps");

}
