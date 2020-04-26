void selection_4()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo265","canvas_plotflow_tempo265",0,0,700,500);
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
  S5_ETA_0->SetBinContent(2,13.96230114);
  S5_ETA_0->SetBinContent(3,97.73610798);
  S5_ETA_0->SetBinContent(4,237.35911938);
  S5_ETA_0->SetBinContent(5,493.33464028);
  S5_ETA_0->SetBinContent(6,656.22815358);
  S5_ETA_0->SetBinContent(7,1182.14109652);
  S5_ETA_0->SetBinContent(8,1521.89112426);
  S5_ETA_0->SetBinContent(9,1684.78413756);
  S5_ETA_0->SetBinContent(10,1922.14315694);
  S5_ETA_0->SetBinContent(11,2140.8861748);
  S5_ETA_0->SetBinContent(12,2271.20118544);
  S5_ETA_0->SetBinContent(13,2057.11216796);
  S5_ETA_0->SetBinContent(14,1922.14315694);
  S5_ETA_0->SetBinContent(15,1829.06114934);
  S5_ETA_0->SetBinContent(16,1507.92812312);
  S5_ETA_0->SetBinContent(17,1140.2540931);
  S5_ETA_0->SetBinContent(18,1075.09708778);
  S5_ETA_0->SetBinContent(19,814.4675665);
  S5_ETA_0->SetBinContent(20,726.03965928);
  S5_ETA_0->SetBinContent(21,609.68714978);
  S5_ETA_0->SetBinContent(22,819.12166688);
  S5_ETA_0->SetBinContent(23,1037.86408474);
  S5_ETA_0->SetBinContent(24,1135.60009272);
  S5_ETA_0->SetBinContent(25,1489.3121216);
  S5_ETA_0->SetBinContent(26,1773.21214478);
  S5_ETA_0->SetBinContent(27,1861.640152);
  S5_ETA_0->SetBinContent(28,2117.6151729);
  S5_ETA_0->SetBinContent(29,2289.81718696);
  S5_ETA_0->SetBinContent(30,2122.27017328);
  S5_ETA_0->SetBinContent(31,2052.45816758);
  S5_ETA_0->SetBinContent(32,1731.32514136);
  S5_ETA_0->SetBinContent(33,1419.5001159);
  S5_ETA_0->SetBinContent(34,1149.56309386);
  S5_ETA_0->SetBinContent(35,744.6560608);
  S5_ETA_0->SetBinContent(36,497.98874066);
  S5_ETA_0->SetBinContent(37,293.20832394);
  S5_ETA_0->SetBinContent(38,79.11970646);
  S5_ETA_0->SetBinContent(39,18.61640152);
  S5_ETA_0->SetBinContent(40,4.65410038);
  S5_ETA_0->SetBinContent(41,0.0); // overflow
  S5_ETA_0->SetEntries(10000);
  // Style
  S5_ETA_0->SetLineColor(9);
  S5_ETA_0->SetLineStyle(1);
  S5_ETA_0->SetLineWidth(1);
  S5_ETA_0->SetFillColor(9);
  S5_ETA_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_266","mystack");
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
