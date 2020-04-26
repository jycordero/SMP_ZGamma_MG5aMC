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
  S5_ETA_0->SetBinContent(5,0.0);
  S5_ETA_0->SetBinContent(6,0.0);
  S5_ETA_0->SetBinContent(7,0.001543875221);
  S5_ETA_0->SetBinContent(8,0.001543875221);
  S5_ETA_0->SetBinContent(9,0.01543875221);
  S5_ETA_0->SetBinContent(10,0.01543875221);
  S5_ETA_0->SetBinContent(11,0.037053005304);
  S5_ETA_0->SetBinContent(12,0.081825381713);
  S5_ETA_0->SetBinContent(13,0.157475222542);
  S5_ETA_0->SetBinContent(14,0.287160741106);
  S5_ETA_0->SetBinContent(15,0.469338067184);
  S5_ETA_0->SetBinContent(16,0.788920212931);
  S5_ETA_0->SetBinContent(17,1.02822114719);
  S5_ETA_0->SetBinContent(18,1.40492620111);
  S5_ETA_0->SetBinContent(19,1.67819224023);
  S5_ETA_0->SetBinContent(20,1.80015825769);
  S5_ETA_0->SetBinContent(21,1.76310525238);
  S5_ETA_0->SetBinContent(22,1.65040223625);
  S5_ETA_0->SetBinContent(23,1.3894871989);
  S5_ETA_0->SetBinContent(24,1.01895714586);
  S5_ETA_0->SetBinContent(25,0.711726501881);
  S5_ETA_0->SetBinContent(26,0.534180776466);
  S5_ETA_0->SetBinContent(27,0.256283236686);
  S5_ETA_0->SetBinContent(28,0.172914024752);
  S5_ETA_0->SetBinContent(29,0.095720263702);
  S5_ETA_0->SetBinContent(30,0.03087750442);
  S5_ETA_0->SetBinContent(31,0.01543875221);
  S5_ETA_0->SetBinContent(32,0.013894871989);
  S5_ETA_0->SetBinContent(33,0.012351001768);
  S5_ETA_0->SetBinContent(34,0.001543875221);
  S5_ETA_0->SetBinContent(35,0.001543875221);
  S5_ETA_0->SetBinContent(36,0.003087750442);
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
