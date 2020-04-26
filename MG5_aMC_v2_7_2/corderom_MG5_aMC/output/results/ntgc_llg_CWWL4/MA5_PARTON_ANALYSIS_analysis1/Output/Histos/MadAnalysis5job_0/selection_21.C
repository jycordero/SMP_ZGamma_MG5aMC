void selection_21()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo43","canvas_plotflow_tempo43",0,0,700,500);
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
  TH1F* S22_DELTAR_0 = new TH1F("S22_DELTAR_0","S22_DELTAR_0",40,0.0,5.0);
  // Content
  S22_DELTAR_0->SetBinContent(0,0.0); // underflow
  S22_DELTAR_0->SetBinContent(1,0.415638389028);
  S22_DELTAR_0->SetBinContent(2,1.43058796223);
  S22_DELTAR_0->SetBinContent(3,0.855819177407);
  S22_DELTAR_0->SetBinContent(4,0.478973787355);
  S22_DELTAR_0->SetBinContent(5,0.250570593385);
  S22_DELTAR_0->SetBinContent(6,0.154775795914);
  S22_DELTAR_0->SetBinContent(7,0.109253497116);
  S22_DELTAR_0->SetBinContent(8,0.0657104482653);
  S22_DELTAR_0->SetBinContent(9,0.0407721489236);
  S22_DELTAR_0->SetBinContent(10,0.0324593791431);
  S22_DELTAR_0->SetBinContent(11,0.023750769373);
  S22_DELTAR_0->SetBinContent(12,0.0186047695088);
  S22_DELTAR_0->SetBinContent(13,0.0126670696656);
  S22_DELTAR_0->SetBinContent(14,0.0106878397179);
  S22_DELTAR_0->SetBinContent(15,0.00752107580145);
  S22_DELTAR_0->SetBinContent(16,0.00672938282235);
  S22_DELTAR_0->SetBinContent(17,0.0063335368328);
  S22_DELTAR_0->SetBinContent(18,0.00514599886415);
  S22_DELTAR_0->SetBinContent(19,0.0047501528746);
  S22_DELTAR_0->SetBinContent(20,0.0063335368328);
  S22_DELTAR_0->SetBinContent(21,0.0039584608955);
  S22_DELTAR_0->SetBinContent(22,0.0031667689164);
  S22_DELTAR_0->SetBinContent(23,0.0039584608955);
  S22_DELTAR_0->SetBinContent(24,0.0031667689164);
  S22_DELTAR_0->SetBinContent(25,0.00277092292685);
  S22_DELTAR_0->SetBinContent(26,0.00118753796865);
  S22_DELTAR_0->SetBinContent(27,0.00118753796865);
  S22_DELTAR_0->SetBinContent(28,0.0007916921791);
  S22_DELTAR_0->SetBinContent(29,0.0007916921791);
  S22_DELTAR_0->SetBinContent(30,0.00039584608955);
  S22_DELTAR_0->SetBinContent(31,0.0);
  S22_DELTAR_0->SetBinContent(32,0.0);
  S22_DELTAR_0->SetBinContent(33,0.0);
  S22_DELTAR_0->SetBinContent(34,0.0);
  S22_DELTAR_0->SetBinContent(35,0.0);
  S22_DELTAR_0->SetBinContent(36,0.0);
  S22_DELTAR_0->SetBinContent(37,0.0);
  S22_DELTAR_0->SetBinContent(38,0.0);
  S22_DELTAR_0->SetBinContent(39,0.0);
  S22_DELTAR_0->SetBinContent(40,0.0);
  S22_DELTAR_0->SetBinContent(41,0.0); // overflow
  S22_DELTAR_0->SetEntries(10000);
  // Style
  S22_DELTAR_0->SetLineColor(9);
  S22_DELTAR_0->SetLineStyle(1);
  S22_DELTAR_0->SetLineWidth(1);
  S22_DELTAR_0->SetFillColor(9);
  S22_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_44","mystack");
  stack->Add(S22_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ l-_{1}, l+_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_21.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_21.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_21.eps");

}
