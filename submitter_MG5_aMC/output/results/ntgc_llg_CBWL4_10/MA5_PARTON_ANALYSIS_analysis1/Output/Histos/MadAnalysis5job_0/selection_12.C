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
  S13_ETA_0->SetBinContent(3,0.0);
  S13_ETA_0->SetBinContent(4,0.0);
  S13_ETA_0->SetBinContent(5,0.0);
  S13_ETA_0->SetBinContent(6,0.0);
  S13_ETA_0->SetBinContent(7,0.0096492305639);
  S13_ETA_0->SetBinContent(8,0.0192984591278);
  S13_ETA_0->SetBinContent(9,0.0868430760751);
  S13_ETA_0->SetBinContent(10,0.115790794767);
  S13_ETA_0->SetBinContent(11,0.308775386045);
  S13_ETA_0->SetBinContent(12,0.453513879503);
  S13_ETA_0->SetBinContent(13,0.91667695857);
  S13_ETA_0->SetBinContent(14,1.69826492325);
  S13_ETA_0->SetBinContent(15,3.00091086437);
  S13_ETA_0->SetBinContent(16,4.94040577672);
  S13_ETA_0->SetBinContent(17,6.63867069996);
  S13_ETA_0->SetBinContent(18,8.4720246171);
  S13_ETA_0->SetBinContent(19,10.4694195268);
  S13_ETA_0->SetBinContent(20,11.1834594946);
  S13_ETA_0->SetBinContent(21,11.1255594972);
  S13_ETA_0->SetBinContent(22,10.4308195286);
  S13_ETA_0->SetBinContent(23,8.76150160402);
  S13_ETA_0->SetBinContent(24,6.13691072264);
  S13_ETA_0->SetBinContent(25,4.56408579372);
  S13_ETA_0->SetBinContent(26,3.44477584431);
  S13_ETA_0->SetBinContent(27,1.72721192194);
  S13_ETA_0->SetBinContent(28,0.945624557262);
  S13_ETA_0->SetBinContent(29,0.472812278631);
  S13_ETA_0->SetBinContent(30,0.260529188225);
  S13_ETA_0->SetBinContent(31,0.154387693022);
  S13_ETA_0->SetBinContent(32,0.0578953873834);
  S13_ETA_0->SetBinContent(33,0.0192984591278);
  S13_ETA_0->SetBinContent(34,0.0385969182556);
  S13_ETA_0->SetBinContent(35,0.0192984591278);
  S13_ETA_0->SetBinContent(36,0.0192984591278);
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
