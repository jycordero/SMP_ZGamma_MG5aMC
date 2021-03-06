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
  S13_ETA_0->SetBinContent(3,0.22403312101);
  S13_ETA_0->SetBinContent(4,0.0);
  S13_ETA_0->SetBinContent(5,0.44806614202);
  S13_ETA_0->SetBinContent(6,0.22403312101);
  S13_ETA_0->SetBinContent(7,0.67209926303);
  S13_ETA_0->SetBinContent(8,1.56823214707);
  S13_ETA_0->SetBinContent(9,2.46436423111);
  S13_ETA_0->SetBinContent(10,3.13646329414);
  S13_ETA_0->SetBinContent(11,6.49695960929);
  S13_ETA_0->SetBinContent(12,11.2016510505);
  S13_ETA_0->SetBinContent(13,28.4522026683);
  S13_ETA_0->SetBinContent(14,42.1182239499);
  S13_ETA_0->SetBinContent(15,68.3300964081);
  S13_ETA_0->SetBinContent(16,111.792510484);
  S13_ETA_0->SetBinContent(17,155.030914539);
  S13_ETA_0->SetBinContent(18,205.662419287);
  S13_ETA_0->SetBinContent(19,245.316223006);
  S13_ETA_0->SetBinContent(20,245.092222985);
  S13_ETA_0->SetBinContent(21,253.605423783);
  S13_ETA_0->SetBinContent(22,228.737821451);
  S13_ETA_0->SetBinContent(23,205.886419308);
  S13_ETA_0->SetBinContent(24,150.326214098);
  S13_ETA_0->SetBinContent(25,107.087810043);
  S13_ETA_0->SetBinContent(26,67.657996345);
  S13_ETA_0->SetBinContent(27,43.2383840549);
  S13_ETA_0->SetBinContent(28,26.6599425002);
  S13_ETA_0->SetBinContent(29,15.6823214707);
  S13_ETA_0->SetBinContent(30,5.60082752525);
  S13_ETA_0->SetBinContent(31,3.80856235717);
  S13_ETA_0->SetBinContent(32,1.12016510505);
  S13_ETA_0->SetBinContent(33,1.34419812606);
  S13_ETA_0->SetBinContent(34,0.44806614202);
  S13_ETA_0->SetBinContent(35,0.44806614202);
  S13_ETA_0->SetBinContent(36,0.22403312101);
  S13_ETA_0->SetBinContent(37,0.22403312101);
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
