void selection_12()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo25","canvas_plotflow_tempo25",0,0,700,500);
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
  TH1F* S13_ETA_0 = new TH1F("S13_ETA_0","S13_ETA_0",40,-7.0,7.0);
  // Content
  S13_ETA_0->SetBinContent(0,0.0); // underflow
  S13_ETA_0->SetBinContent(1,0.0);
  S13_ETA_0->SetBinContent(2,0.0);
  S13_ETA_0->SetBinContent(3,0.00039584612205);
  S13_ETA_0->SetBinContent(4,0.0);
  S13_ETA_0->SetBinContent(5,0.0);
  S13_ETA_0->SetBinContent(6,0.0);
  S13_ETA_0->SetBinContent(7,0.00039584612205);
  S13_ETA_0->SetBinContent(8,0.0007916922441);
  S13_ETA_0->SetBinContent(9,0.00356261519845);
  S13_ETA_0->SetBinContent(10,0.0063335373528);
  S13_ETA_0->SetBinContent(11,0.0126670707056);
  S13_ETA_0->SetBinContent(12,0.0281050715655);
  S13_ETA_0->SetBinContent(13,0.0423555323593);
  S13_ETA_0->SetBinContent(14,0.0803567644762);
  S13_ETA_0->SetBinContent(15,0.14290040796);
  S13_ETA_0->SetBinContent(16,0.183276710209);
  S13_ETA_0->SetBinContent(17,0.275904715369);
  S13_ETA_0->SetBinContent(18,0.344781919206);
  S13_ETA_0->SetBinContent(19,0.408909022778);
  S13_ETA_0->SetBinContent(20,0.442951824674);
  S13_ETA_0->SetBinContent(21,0.452452125203);
  S13_ETA_0->SetBinContent(22,0.434639024211);
  S13_ETA_0->SetBinContent(23,0.367345220462);
  S13_ETA_0->SetBinContent(24,0.254529014178);
  S13_ETA_0->SetBinContent(25,0.194360410827);
  S13_ETA_0->SetBinContent(26,0.115587106439);
  S13_ETA_0->SetBinContent(27,0.0807526044982);
  S13_ETA_0->SetBinContent(28,0.0423555323593);
  S13_ETA_0->SetBinContent(29,0.023750771323);
  S13_ETA_0->SetBinContent(30,0.00910446050715);
  S13_ETA_0->SetBinContent(31,0.0071252303969);
  S13_ETA_0->SetBinContent(32,0.0023750771323);
  S13_ETA_0->SetBinContent(33,0.0);
  S13_ETA_0->SetBinContent(34,0.0);
  S13_ETA_0->SetBinContent(35,0.00039584612205);
  S13_ETA_0->SetBinContent(36,0.0);
  S13_ETA_0->SetBinContent(37,0.0);
  S13_ETA_0->SetBinContent(38,0.0);
  S13_ETA_0->SetBinContent(39,0.0);
  S13_ETA_0->SetBinContent(40,0.0);
  S13_ETA_0->SetBinContent(41,0.0); // overflow
  S13_ETA_0->SetEntries(10000);
  // Style
  S13_ETA_0->SetLineColor(9);
  S13_ETA_0->SetLineStyle(1);
  S13_ETA_0->SetLineWidth(1);
  S13_ETA_0->SetFillColor(9);
  S13_ETA_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_26","mystack");
  stack->Add(S13_ETA_0);
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
  stack->GetXaxis()->SetTitle("#eta [ l-_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_12.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_12.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_12.eps");

}
