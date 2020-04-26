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
  S5_ETA_0->SetBinContent(5,0.0167012006267);
  S5_ETA_0->SetBinContent(6,0.0);
  S5_ETA_0->SetBinContent(7,0.0);
  S5_ETA_0->SetBinContent(8,0.0167012006267);
  S5_ETA_0->SetBinContent(9,0.0222682708356);
  S5_ETA_0->SetBinContent(10,0.0723718727157);
  S5_ETA_0->SetBinContent(11,0.155877905849);
  S5_ETA_0->SetBinContent(12,0.322889912116);
  S5_ETA_0->SetBinContent(13,0.684749225695);
  S5_ETA_0->SetBinContent(14,0.929700234886);
  S5_ETA_0->SetBinContent(15,1.78146106685);
  S5_ETA_0->SetBinContent(16,2.54971709568);
  S5_ETA_0->SetBinContent(17,3.90808114665);
  S5_ETA_0->SetBinContent(18,5.23861019657);
  S5_ETA_0->SetBinContent(19,5.71181121433);
  S5_ETA_0->SetBinContent(20,6.32975523752);
  S5_ETA_0->SetBinContent(21,6.41326124065);
  S5_ETA_0->SetBinContent(22,5.61717021078);
  S5_ETA_0->SetBinContent(23,5.24974419699);
  S5_ETA_0->SetBinContent(24,3.78003814184);
  S5_ETA_0->SetBinContent(25,2.60538709777);
  S5_ETA_0->SetBinContent(26,1.93177207249);
  S5_ETA_0->SetBinContent(27,1.07444404032);
  S5_ETA_0->SetBinContent(28,0.629078623606);
  S5_ETA_0->SetBinContent(29,0.30618871149);
  S5_ETA_0->SetBinContent(30,0.183713206894);
  S5_ETA_0->SetBinContent(31,0.0835060031335);
  S5_ETA_0->SetBinContent(32,0.0389694714623);
  S5_ETA_0->SetBinContent(33,0.0055670672089);
  S5_ETA_0->SetBinContent(34,0.0055670672089);
  S5_ETA_0->SetBinContent(35,0.0055670672089);
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
