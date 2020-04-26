void selection_11()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo23","canvas_plotflow_tempo23",0,0,700,500);
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
  TH1F* S12_PT_0 = new TH1F("S12_PT_0","S12_PT_0",40,0.0,650.0);
  // Content
  S12_PT_0->SetBinContent(0,0.0); // underflow
  S12_PT_0->SetBinContent(1,0.078737623978);
  S12_PT_0->SetBinContent(2,0.182177209204);
  S12_PT_0->SetBinContent(3,0.242388412246);
  S12_PT_0->SetBinContent(4,0.288704614586);
  S12_PT_0->SetBinContent(5,0.345828017472);
  S12_PT_0->SetBinContent(6,0.364354518408);
  S12_PT_0->SetBinContent(7,0.375161618954);
  S12_PT_0->SetBinContent(8,0.390600419734);
  S12_PT_0->SetBinContent(9,0.412214620826);
  S12_PT_0->SetBinContent(10,0.398319720124);
  S12_PT_0->SetBinContent(11,0.398319720124);
  S12_PT_0->SetBinContent(12,0.444636022464);
  S12_PT_0->SetBinContent(13,0.412214620826);
  S12_PT_0->SetBinContent(14,0.436916622074);
  S12_PT_0->SetBinContent(15,0.384424919422);
  S12_PT_0->SetBinContent(16,0.359722918174);
  S12_PT_0->SetBinContent(17,0.396775920046);
  S12_PT_0->SetBinContent(18,0.359722918174);
  S12_PT_0->SetBinContent(19,0.344284117394);
  S12_PT_0->SetBinContent(20,0.358179018096);
  S12_PT_0->SetBinContent(21,0.342740217316);
  S12_PT_0->SetBinContent(22,0.313406615834);
  S12_PT_0->SetBinContent(23,0.311862715756);
  S12_PT_0->SetBinContent(24,0.328845416614);
  S12_PT_0->SetBinContent(25,0.297967915054);
  S12_PT_0->SetBinContent(26,0.276353613962);
  S12_PT_0->SetBinContent(27,0.29333621482);
  S12_PT_0->SetBinContent(28,0.243932212324);
  S12_PT_0->SetBinContent(29,0.279441414118);
  S12_PT_0->SetBinContent(30,0.237756712012);
  S12_PT_0->SetBinContent(31,0.259371013104);
  S12_PT_0->SetBinContent(32,0.213054710764);
  S12_PT_0->SetBinContent(33,0.211510910686);
  S12_PT_0->SetBinContent(34,0.196072109906);
  S12_PT_0->SetBinContent(35,0.202247610218);
  S12_PT_0->SetBinContent(36,0.182177209204);
  S12_PT_0->SetBinContent(37,0.166738508424);
  S12_PT_0->SetBinContent(38,0.18526500936);
  S12_PT_0->SetBinContent(39,0.203791510296);
  S12_PT_0->SetBinContent(40,0.152843607722);
  S12_PT_0->SetBinContent(41,3.56635118018); // overflow
  S12_PT_0->SetEntries(10000);
  // Style
  S12_PT_0->SetLineColor(9);
  S12_PT_0->SetLineStyle(1);
  S12_PT_0->SetLineWidth(1);
  S12_PT_0->SetFillColor(9);
  S12_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_24","mystack");
  stack->Add(S12_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ l-_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_11.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_11.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_11.eps");

}
