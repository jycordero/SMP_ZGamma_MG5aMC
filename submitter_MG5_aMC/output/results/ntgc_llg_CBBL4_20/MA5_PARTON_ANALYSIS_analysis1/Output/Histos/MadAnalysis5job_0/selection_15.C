void selection_15()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo31","canvas_plotflow_tempo31",0,0,700,500);
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
  TH1F* S16_M_0 = new TH1F("S16_M_0","S16_M_0",40,0.0,800.0);
  // Content
  S16_M_0->SetBinContent(0,0.0); // underflow
  S16_M_0->SetBinContent(1,0.0);
  S16_M_0->SetBinContent(2,0.22403310165);
  S16_M_0->SetBinContent(3,0.22403310165);
  S16_M_0->SetBinContent(4,0.0);
  S16_M_0->SetBinContent(5,0.4480661033);
  S16_M_0->SetBinContent(6,0.67209920495);
  S16_M_0->SetBinContent(7,1.7922650132);
  S16_M_0->SetBinContent(8,4.25662803135);
  S16_M_0->SetBinContent(9,3.36049602475);
  S16_M_0->SetBinContent(10,5.60082704125);
  S16_M_0->SetBinContent(11,4.9287280363);
  S16_M_0->SetBinContent(12,7.39309105445);
  S16_M_0->SetBinContent(13,3.80856202805);
  S16_M_0->SetBinContent(14,5.8248600429);
  S16_M_0->SetBinContent(15,6.2729260462);
  S16_M_0->SetBinContent(16,7.1690580528);
  S16_M_0->SetBinContent(17,10.0814900743);
  S16_M_0->SetBinContent(18,10.7535900792);
  S16_M_0->SetBinContent(19,9.18535606765);
  S16_M_0->SetBinContent(20,11.6497200858);
  S16_M_0->SetBinContent(21,14.7861801089);
  S16_M_0->SetBinContent(22,12.9939200957);
  S16_M_0->SetBinContent(23,9.8574550726);
  S16_M_0->SetBinContent(24,12.7698900941);
  S16_M_0->SetBinContent(25,14.3381201056);
  S16_M_0->SetBinContent(26,13.2179500973);
  S16_M_0->SetBinContent(27,13.441980099);
  S16_M_0->SetBinContent(28,18.1466801336);
  S16_M_0->SetBinContent(29,15.4582801138);
  S16_M_0->SetBinContent(30,18.594750137);
  S16_M_0->SetBinContent(31,18.1466801336);
  S16_M_0->SetBinContent(32,17.6986101303);
  S16_M_0->SetBinContent(33,18.594750137);
  S16_M_0->SetBinContent(34,19.0428101402);
  S16_M_0->SetBinContent(35,17.922650132);
  S16_M_0->SetBinContent(36,18.3707101353);
  S16_M_0->SetBinContent(37,19.2668401419);
  S16_M_0->SetBinContent(38,18.8187801386);
  S16_M_0->SetBinContent(39,18.594750137);
  S16_M_0->SetBinContent(40,22.8513701683);
  S16_M_0->SetBinContent(41,1813.77201336); // overflow
  S16_M_0->SetEntries(10000);
  // Style
  S16_M_0->SetLineColor(9);
  S16_M_0->SetLineStyle(1);
  S16_M_0->SetLineWidth(1);
  S16_M_0->SetFillColor(9);
  S16_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_32","mystack");
  stack->Add(S16_M_0);
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
  stack->GetXaxis()->SetTitle("M [ a_{1} l+_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_15.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_15.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_15.eps");

}
