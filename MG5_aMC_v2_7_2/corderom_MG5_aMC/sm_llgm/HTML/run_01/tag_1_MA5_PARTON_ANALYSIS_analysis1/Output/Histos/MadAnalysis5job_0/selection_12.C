void selection_12()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo281","canvas_plotflow_tempo281",0,0,700,500);
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
  S13_ETA_0->SetBinContent(0,13.96229988); // underflow
  S13_ETA_0->SetBinContent(1,9.30819992);
  S13_ETA_0->SetBinContent(2,9.30819992);
  S13_ETA_0->SetBinContent(3,23.2704998);
  S13_ETA_0->SetBinContent(4,51.19509956);
  S13_ETA_0->SetBinContent(5,41.88689964);
  S13_ETA_0->SetBinContent(6,158.23939864);
  S13_ETA_0->SetBinContent(7,153.58529868);
  S13_ETA_0->SetBinContent(8,363.01979688);
  S13_ETA_0->SetBinContent(9,549.18379528);
  S13_ETA_0->SetBinContent(10,740.00189364);
  S13_ETA_0->SetBinContent(11,1037.86399108);
  S13_ETA_0->SetBinContent(12,1298.49398884);
  S13_ETA_0->SetBinContent(13,1466.0409874);
  S13_ETA_0->SetBinContent(14,1829.06098428);
  S13_ETA_0->SetBinContent(15,2052.45798236);
  S13_ETA_0->SetBinContent(16,2448.05697896);
  S13_ETA_0->SetBinContent(17,2620.25797748);
  S13_ETA_0->SetBinContent(18,2541.13897816);
  S13_ETA_0->SetBinContent(19,2783.15197608);
  S13_ETA_0->SetBinContent(20,2922.77497488);
  S13_ETA_0->SetBinContent(21,2843.65497556);
  S13_ETA_0->SetBinContent(22,2792.459976);
  S13_ETA_0->SetBinContent(23,2601.64197764);
  S13_ETA_0->SetBinContent(24,2420.1319792);
  S13_ETA_0->SetBinContent(25,2313.08798012);
  S13_ETA_0->SetBinContent(26,2085.03698208);
  S13_ETA_0->SetBinContent(27,1894.21898372);
  S13_ETA_0->SetBinContent(28,1745.286985);
  S13_ETA_0->SetBinContent(29,1428.80898772);
  S13_ETA_0->SetBinContent(30,991.32329148);
  S13_ETA_0->SetBinContent(31,823.77569292);
  S13_ETA_0->SetBinContent(32,581.762495);
  S13_ETA_0->SetBinContent(33,428.17719632);
  S13_ETA_0->SetBinContent(34,190.81809836);
  S13_ETA_0->SetBinContent(35,121.00659896);
  S13_ETA_0->SetBinContent(36,88.42789924);
  S13_ETA_0->SetBinContent(37,32.57869972);
  S13_ETA_0->SetBinContent(38,23.2704998);
  S13_ETA_0->SetBinContent(39,9.30819992);
  S13_ETA_0->SetBinContent(40,9.30819992);
  S13_ETA_0->SetBinContent(41,4.65409996); // overflow
  S13_ETA_0->SetEntries(10000);
  // Style
  S13_ETA_0->SetLineColor(9);
  S13_ETA_0->SetLineStyle(1);
  S13_ETA_0->SetLineWidth(1);
  S13_ETA_0->SetFillColor(9);
  S13_ETA_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_282","mystack");
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
