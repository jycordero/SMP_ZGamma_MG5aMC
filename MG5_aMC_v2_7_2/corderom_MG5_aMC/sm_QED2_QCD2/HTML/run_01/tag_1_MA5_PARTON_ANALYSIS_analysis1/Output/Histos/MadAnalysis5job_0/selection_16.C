void selection_16()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo245","canvas_plotflow_tempo245",0,0,700,500);
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
  TH1F* S17_M_0 = new TH1F("S17_M_0","S17_M_0",40,0.0,500.0);
  // Content
  S17_M_0->SetBinContent(0,0.0); // underflow
  S17_M_0->SetBinContent(1,1265.91503264);
  S17_M_0->SetBinContent(2,3825.67009864);
  S17_M_0->SetBinContent(3,6664.67117184);
  S17_M_0->SetBinContent(4,8386.68821624);
  S17_M_0->SetBinContent(5,7297.62918816);
  S17_M_0->SetBinContent(6,5529.07114256);
  S17_M_0->SetBinContent(7,3644.16009396);
  S17_M_0->SetBinContent(8,2527.17606516);
  S17_M_0->SetBinContent(9,1745.287045);
  S17_M_0->SetBinContent(10,1382.26803564);
  S17_M_0->SetBinContent(11,833.08392148);
  S17_M_0->SetBinContent(12,642.26581656);
  S17_M_0->SetBinContent(13,488.6805126);
  S17_M_0->SetBinContent(14,372.3280096);
  S17_M_0->SetBinContent(15,293.20830756);
  S17_M_0->SetBinContent(16,255.9755066);
  S17_M_0->SetBinContent(17,255.9755066);
  S17_M_0->SetBinContent(18,181.50990468);
  S17_M_0->SetBinContent(19,121.00660312);
  S17_M_0->SetBinContent(20,102.39020264);
  S17_M_0->SetBinContent(21,102.39020264);
  S17_M_0->SetBinContent(22,97.73610252);
  S17_M_0->SetBinContent(23,51.19510132);
  S17_M_0->SetBinContent(24,69.8115018);
  S17_M_0->SetBinContent(25,55.84920144);
  S17_M_0->SetBinContent(26,46.5410012);
  S17_M_0->SetBinContent(27,23.2705006);
  S17_M_0->SetBinContent(28,23.2705006);
  S17_M_0->SetBinContent(29,27.92460072);
  S17_M_0->SetBinContent(30,32.57870084);
  S17_M_0->SetBinContent(31,18.61640048);
  S17_M_0->SetBinContent(32,23.2705006);
  S17_M_0->SetBinContent(33,18.61640048);
  S17_M_0->SetBinContent(34,18.61640048);
  S17_M_0->SetBinContent(35,4.65410012);
  S17_M_0->SetBinContent(36,13.96230036);
  S17_M_0->SetBinContent(37,9.30820024);
  S17_M_0->SetBinContent(38,4.65410012);
  S17_M_0->SetBinContent(39,9.30820024);
  S17_M_0->SetBinContent(40,13.96230036);
  S17_M_0->SetBinContent(41,60.50330156); // overflow
  S17_M_0->SetEntries(10000);
  // Style
  S17_M_0->SetLineColor(9);
  S17_M_0->SetLineStyle(1);
  S17_M_0->SetLineWidth(1);
  S17_M_0->SetFillColor(9);
  S17_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_246","mystack");
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
