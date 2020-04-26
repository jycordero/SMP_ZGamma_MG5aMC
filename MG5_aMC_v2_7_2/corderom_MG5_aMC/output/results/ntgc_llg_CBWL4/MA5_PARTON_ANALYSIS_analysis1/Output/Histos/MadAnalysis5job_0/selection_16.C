void selection_16()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo33","canvas_plotflow_tempo33",0,0,700,500);
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
  TH1F* S17_M_0 = new TH1F("S17_M_0","S17_M_0",40,0.0,800.0);
  // Content
  S17_M_0->SetBinContent(0,0.0); // underflow
  S17_M_0->SetBinContent(1,0.0);
  S17_M_0->SetBinContent(2,0.004631624706);
  S17_M_0->SetBinContent(3,0.001543874902);
  S17_M_0->SetBinContent(4,0.009263249412);
  S17_M_0->SetBinContent(5,0.003087749804);
  S17_M_0->SetBinContent(6,0.006175499608);
  S17_M_0->SetBinContent(7,0.012350999216);
  S17_M_0->SetBinContent(8,0.013894869118);
  S17_M_0->SetBinContent(9,0.013894869118);
  S17_M_0->SetBinContent(10,0.021614248628);
  S17_M_0->SetBinContent(11,0.021614248628);
  S17_M_0->SetBinContent(12,0.035509117746);
  S17_M_0->SetBinContent(13,0.057123366374);
  S17_M_0->SetBinContent(14,0.049403996864);
  S17_M_0->SetBinContent(15,0.050947866766);
  S17_M_0->SetBinContent(16,0.0771937451);
  S17_M_0->SetBinContent(17,0.057123366374);
  S17_M_0->SetBinContent(18,0.047860116962);
  S17_M_0->SetBinContent(19,0.072562115394);
  S17_M_0->SetBinContent(20,0.074105995296);
  S17_M_0->SetBinContent(21,0.097264113826);
  S17_M_0->SetBinContent(22,0.0771937451);
  S17_M_0->SetBinContent(23,0.098807993728);
  S17_M_0->SetBinContent(24,0.109615093042);
  S17_M_0->SetBinContent(25,0.106527393238);
  S17_M_0->SetBinContent(26,0.098807993728);
  S17_M_0->SetBinContent(27,0.089544744316);
  S17_M_0->SetBinContent(28,0.112702892846);
  S17_M_0->SetBinContent(29,0.10807119314);
  S17_M_0->SetBinContent(30,0.109615093042);
  S17_M_0->SetBinContent(31,0.101895693532);
  S17_M_0->SetBinContent(32,0.128141591866);
  S17_M_0->SetBinContent(33,0.128141591866);
  S17_M_0->SetBinContent(34,0.125053892062);
  S17_M_0->SetBinContent(35,0.132773191572);
  S17_M_0->SetBinContent(36,0.128141591866);
  S17_M_0->SetBinContent(37,0.137404891278);
  S17_M_0->SetBinContent(38,0.148211990592);
  S17_M_0->SetBinContent(39,0.114246692748);
  S17_M_0->SetBinContent(40,0.166738489416);
  S17_M_0->SetBinContent(41,12.4899492072); // overflow
  S17_M_0->SetEntries(10000);
  // Style
  S17_M_0->SetLineColor(9);
  S17_M_0->SetLineStyle(1);
  S17_M_0->SetLineWidth(1);
  S17_M_0->SetFillColor(9);
  S17_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_34","mystack");
  stack->Add(S17_M_0);
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
  stack->GetXaxis()->SetTitle("M [ a_{1} l-_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_16.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_16.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_16.eps");

}
