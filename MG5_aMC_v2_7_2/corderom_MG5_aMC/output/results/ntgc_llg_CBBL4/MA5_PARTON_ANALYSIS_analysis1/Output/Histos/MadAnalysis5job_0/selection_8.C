void selection_8()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo17","canvas_plotflow_tempo17",0,0,700,500);
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
  TH1F* S9_DELTAR_0 = new TH1F("S9_DELTAR_0","S9_DELTAR_0",40,0.0,8.0);
  // Content
  S9_DELTAR_0->SetBinContent(0,0.0); // underflow
  S9_DELTAR_0->SetBinContent(1,0.0);
  S9_DELTAR_0->SetBinContent(2,0.0);
  S9_DELTAR_0->SetBinContent(3,0.0);
  S9_DELTAR_0->SetBinContent(4,0.0);
  S9_DELTAR_0->SetBinContent(5,0.0);
  S9_DELTAR_0->SetBinContent(6,0.0);
  S9_DELTAR_0->SetBinContent(7,0.0);
  S9_DELTAR_0->SetBinContent(8,0.0);
  S9_DELTAR_0->SetBinContent(9,0.0);
  S9_DELTAR_0->SetBinContent(10,0.0);
  S9_DELTAR_0->SetBinContent(11,0.0);
  S9_DELTAR_0->SetBinContent(12,0.0);
  S9_DELTAR_0->SetBinContent(13,0.0);
  S9_DELTAR_0->SetBinContent(14,0.0);
  S9_DELTAR_0->SetBinContent(15,0.0);
  S9_DELTAR_0->SetBinContent(16,21.5435513633);
  S9_DELTAR_0->SetBinContent(17,23.6674314977);
  S9_DELTAR_0->SetBinContent(18,12.7253908053);
  S9_DELTAR_0->SetBinContent(19,9.38273559375);
  S9_DELTAR_0->SetBinContent(20,6.13865738846);
  S9_DELTAR_0->SetBinContent(21,4.74961830056);
  S9_DELTAR_0->SetBinContent(22,3.23511720472);
  S9_DELTAR_0->SetBinContent(23,2.21350114007);
  S9_DELTAR_0->SetBinContent(24,1.72061610888);
  S9_DELTAR_0->SetBinContent(25,1.2815010811);
  S9_DELTAR_0->SetBinContent(26,1.00369306352);
  S9_DELTAR_0->SetBinContent(27,0.55561563516);
  S9_DELTAR_0->SetBinContent(28,0.376384823818);
  S9_DELTAR_0->SetBinContent(29,0.313654019849);
  S9_DELTAR_0->SetBinContent(30,0.206115513043);
  S9_DELTAR_0->SetBinContent(31,0.179230911342);
  S9_DELTAR_0->SetBinContent(32,0.107538506805);
  S9_DELTAR_0->SetBinContent(33,0.0537692634026);
  S9_DELTAR_0->SetBinContent(34,0.0716923445368);
  S9_DELTAR_0->SetBinContent(35,0.0358461722684);
  S9_DELTAR_0->SetBinContent(36,0.0);
  S9_DELTAR_0->SetBinContent(37,0.0089615435671);
  S9_DELTAR_0->SetBinContent(38,0.0268846317013);
  S9_DELTAR_0->SetBinContent(39,0.0089615435671);
  S9_DELTAR_0->SetBinContent(40,0.0089615435671);
  S9_DELTAR_0->SetBinContent(41,0.0); // overflow
  S9_DELTAR_0->SetEntries(10000);
  // Style
  S9_DELTAR_0->SetLineColor(9);
  S9_DELTAR_0->SetLineStyle(1);
  S9_DELTAR_0->SetLineWidth(1);
  S9_DELTAR_0->SetFillColor(9);
  S9_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_18","mystack");
  stack->Add(S9_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ z_{1}, a_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_8.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_8.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_8.eps");

}
