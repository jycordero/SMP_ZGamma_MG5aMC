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
  S17_M_0->SetBinContent(2,0.0);
  S17_M_0->SetBinContent(3,0.0);
  S17_M_0->SetBinContent(4,0.896132475);
  S17_M_0->SetBinContent(5,0.67209933125);
  S17_M_0->SetBinContent(6,1.3441982625);
  S17_M_0->SetBinContent(7,1.79226535);
  S17_M_0->SetBinContent(8,2.688397525);
  S17_M_0->SetBinContent(9,2.46436448125);
  S17_M_0->SetBinContent(10,4.9287289625);
  S17_M_0->SetBinContent(11,6.49696026875);
  S17_M_0->SetBinContent(12,7.84115953125);
  S17_M_0->SetBinContent(13,7.1690594);
  S17_M_0->SetBinContent(14,7.1690594);
  S17_M_0->SetBinContent(15,8.5132586625);
  S17_M_0->SetBinContent(16,8.73729170625);
  S17_M_0->SetBinContent(17,7.1690594);
  S17_M_0->SetBinContent(18,10.9776221438);
  S17_M_0->SetBinContent(19,10.5295520562);
  S17_M_0->SetBinContent(20,8.065192575);
  S17_M_0->SetBinContent(21,12.0977923625);
  S17_M_0->SetBinContent(22,12.54585245);
  S17_M_0->SetBinContent(23,14.7861828875);
  S17_M_0->SetBinContent(24,16.8024832813);
  S17_M_0->SetBinContent(25,15.0102229313);
  S17_M_0->SetBinContent(26,11.4256922313);
  S17_M_0->SetBinContent(27,14.3381228);
  S17_M_0->SetBinContent(28,18.3707135875);
  S17_M_0->SetBinContent(29,18.1466835438);
  S17_M_0->SetBinContent(30,14.5621528438);
  S17_M_0->SetBinContent(31,19.4908838063);
  S17_M_0->SetBinContent(32,17.026513325);
  S17_M_0->SetBinContent(33,15.0102229313);
  S17_M_0->SetBinContent(34,18.3707135875);
  S17_M_0->SetBinContent(35,21.5071742);
  S17_M_0->SetBinContent(36,20.3870139813);
  S17_M_0->SetBinContent(37,16.3544131937);
  S17_M_0->SetBinContent(38,15.9063531063);
  S17_M_0->SetBinContent(39,17.6986134562);
  S17_M_0->SetBinContent(40,23.29944455);
  S17_M_0->SetBinContent(41,1809.73935341); // overflow
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
