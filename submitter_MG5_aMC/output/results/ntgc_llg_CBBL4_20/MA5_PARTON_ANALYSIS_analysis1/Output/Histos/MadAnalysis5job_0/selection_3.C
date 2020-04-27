void selection_3()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo7","canvas_plotflow_tempo7",0,0,700,500);
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
  TH1F* S4_PT_0 = new TH1F("S4_PT_0","S4_PT_0",40,0.0,1000.0);
  // Content
  S4_PT_0->SetBinContent(0,0.0); // underflow
  S4_PT_0->SetBinContent(1,0.44806615258);
  S4_PT_0->SetBinContent(2,3.36049639435);
  S4_PT_0->SetBinContent(3,4.70469555209);
  S4_PT_0->SetBinContent(4,8.73729102531);
  S4_PT_0->SetBinContent(5,15.458281814);
  S4_PT_0->SetBinContent(6,15.6823218403);
  S4_PT_0->SetBinContent(7,22.403312629);
  S4_PT_0->SetBinContent(8,25.0917029445);
  S4_PT_0->SetBinContent(9,25.7638030233);
  S4_PT_0->SetBinContent(10,30.0204335229);
  S4_PT_0->SetBinContent(11,28.6762333651);
  S4_PT_0->SetBinContent(12,39.2057946008);
  S4_PT_0->SetBinContent(13,37.861594443);
  S4_PT_0->SetBinContent(14,48.6151857049);
  S4_PT_0->SetBinContent(15,40.1019247059);
  S4_PT_0->SetBinContent(16,41.4461248637);
  S4_PT_0->SetBinContent(17,45.7027553632);
  S4_PT_0->SetBinContent(18,47.7190455998);
  S4_PT_0->SetBinContent(19,40.1019247059);
  S4_PT_0->SetBinContent(20,43.9104851528);
  S4_PT_0->SetBinContent(21,43.4624251003);
  S4_PT_0->SetBinContent(22,47.7190455998);
  S4_PT_0->SetBinContent(23,38.0856244693);
  S4_PT_0->SetBinContent(24,54.2160063622);
  S4_PT_0->SetBinContent(25,47.7190455998);
  S4_PT_0->SetBinContent(26,42.3422549688);
  S4_PT_0->SetBinContent(27,42.5662849951);
  S4_PT_0->SetBinContent(28,47.4950155735);
  S4_PT_0->SetBinContent(29,44.806615258);
  S4_PT_0->SetBinContent(30,42.7903250214);
  S4_PT_0->SetBinContent(31,43.6864551266);
  S4_PT_0->SetBinContent(32,39.2057946008);
  S4_PT_0->SetBinContent(33,38.7577245482);
  S4_PT_0->SetBinContent(34,40.1019247059);
  S4_PT_0->SetBinContent(35,41.4461248637);
  S4_PT_0->SetBinContent(36,45.2546853106);
  S4_PT_0->SetBinContent(37,41.4461248637);
  S4_PT_0->SetBinContent(38,37.861594443);
  S4_PT_0->SetBinContent(39,34.9491641012);
  S4_PT_0->SetBinContent(40,33.8289939698);
  S4_PT_0->SetBinContent(41,827.578297115); // overflow
  S4_PT_0->SetEntries(10000);
  // Style
  S4_PT_0->SetLineColor(9);
  S4_PT_0->SetLineStyle(1);
  S4_PT_0->SetLineWidth(1);
  S4_PT_0->SetFillColor(9);
  S4_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_8","mystack");
  stack->Add(S4_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ z_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_3.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_3.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_3.eps");

}
