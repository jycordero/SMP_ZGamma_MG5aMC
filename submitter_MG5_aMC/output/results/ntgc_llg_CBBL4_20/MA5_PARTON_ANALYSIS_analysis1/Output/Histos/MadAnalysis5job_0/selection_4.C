void selection_4()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo9","canvas_plotflow_tempo9",0,0,700,500);
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
  TH1F* S5_ETA_0 = new TH1F("S5_ETA_0","S5_ETA_0",40,-7.0,7.0);
  // Content
  S5_ETA_0->SetBinContent(0,0.0); // underflow
  S5_ETA_0->SetBinContent(1,0.0);
  S5_ETA_0->SetBinContent(2,0.0);
  S5_ETA_0->SetBinContent(3,0.0);
  S5_ETA_0->SetBinContent(4,0.0);
  S5_ETA_0->SetBinContent(5,0.67209926669);
  S5_ETA_0->SetBinContent(6,0.22403312223);
  S5_ETA_0->SetBinContent(7,0.44806614446);
  S5_ETA_0->SetBinContent(8,0.44806614446);
  S5_ETA_0->SetBinContent(9,2.91243028899);
  S5_ETA_0->SetBinContent(10,4.25662842237);
  S5_ETA_0->SetBinContent(11,5.82486057798);
  S5_ETA_0->SetBinContent(12,13.8900513783);
  S5_ETA_0->SetBinContent(13,23.7475123564);
  S5_ETA_0->SetBinContent(14,45.9267845571);
  S5_ETA_0->SetBinContent(15,68.1060567579);
  S5_ETA_0->SetBinContent(16,116.273211537);
  S5_ETA_0->SetBinContent(17,150.326214916);
  S5_ETA_0->SetBinContent(18,199.613519807);
  S5_ETA_0->SetBinContent(19,245.316224342);
  S5_ETA_0->SetBinContent(20,250.469024853);
  S5_ETA_0->SetBinContent(21,247.556524564);
  S5_ETA_0->SetBinContent(22,229.185822741);
  S5_ETA_0->SetBinContent(23,199.613519807);
  S5_ETA_0->SetBinContent(24,164.664316339);
  S5_ETA_0->SetBinContent(25,100.814910004);
  S5_ETA_0->SetBinContent(26,71.9146271358);
  S5_ETA_0->SetBinContent(27,43.4624243126);
  S5_ETA_0->SetBinContent(28,25.5397725342);
  S5_ETA_0->SetBinContent(29,16.3544116228);
  S5_ETA_0->SetBinContent(30,8.51325784474);
  S5_ETA_0->SetBinContent(31,2.46436424453);
  S5_ETA_0->SetBinContent(32,1.34419813338);
  S5_ETA_0->SetBinContent(33,0.22403312223);
  S5_ETA_0->SetBinContent(34,0.0);
  S5_ETA_0->SetBinContent(35,0.22403312223);
  S5_ETA_0->SetBinContent(36,0.0);
  S5_ETA_0->SetBinContent(37,0.0);
  S5_ETA_0->SetBinContent(38,0.0);
  S5_ETA_0->SetBinContent(39,0.0);
  S5_ETA_0->SetBinContent(40,0.0);
  S5_ETA_0->SetBinContent(41,0.0); // overflow
  S5_ETA_0->SetEntries(10000);
  // Style
  S5_ETA_0->SetLineColor(9);
  S5_ETA_0->SetLineStyle(1);
  S5_ETA_0->SetLineWidth(1);
  S5_ETA_0->SetFillColor(9);
  S5_ETA_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_10","mystack");
  stack->Add(S5_ETA_0);
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
  stack->GetXaxis()->SetTitle("#eta [ z_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_4.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_4.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_4.eps");

}
