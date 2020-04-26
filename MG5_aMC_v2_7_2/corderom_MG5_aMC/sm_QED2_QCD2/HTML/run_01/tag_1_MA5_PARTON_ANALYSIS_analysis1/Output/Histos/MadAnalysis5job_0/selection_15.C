void selection_15()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo243","canvas_plotflow_tempo243",0,0,700,500);
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
  TH1F* S16_M_0 = new TH1F("S16_M_0","S16_M_0",40,0.0,500.0);
  // Content
  S16_M_0->SetBinContent(0,0.0); // underflow
  S16_M_0->SetBinContent(1,1168.17900251);
  S16_M_0->SetBinContent(2,4044.41300869);
  S16_M_0->SetBinContent(3,6404.04201376);
  S16_M_0->SetBinContent(4,9205.81001978);
  S16_M_0->SetBinContent(5,7362.78601582);
  S16_M_0->SetBinContent(6,5287.05801136);
  S16_M_0->SetBinContent(7,3420.76300735);
  S16_M_0->SetBinContent(8,2373.5910051);
  S16_M_0->SetBinContent(9,1880.25600404);
  S16_M_0->SetBinContent(10,1210.0660026);
  S16_M_0->SetBinContent(11,898.24130193);
  S16_M_0->SetBinContent(12,660.88220142);
  S16_M_0->SetBinContent(13,572.45430123);
  S16_M_0->SetBinContent(14,376.98210081);
  S16_M_0->SetBinContent(15,297.86240064);
  S16_M_0->SetBinContent(16,293.20830063);
  S16_M_0->SetBinContent(17,204.78040044);
  S16_M_0->SetBinContent(18,125.66070027);
  S16_M_0->SetBinContent(19,121.00660026);
  S16_M_0->SetBinContent(20,97.73610021);
  S16_M_0->SetBinContent(21,65.15740014);
  S16_M_0->SetBinContent(22,74.46560016);
  S16_M_0->SetBinContent(23,65.15740014);
  S16_M_0->SetBinContent(24,46.5410001);
  S16_M_0->SetBinContent(25,41.88690009);
  S16_M_0->SetBinContent(26,37.23280008);
  S16_M_0->SetBinContent(27,37.23280008);
  S16_M_0->SetBinContent(28,23.27050005);
  S16_M_0->SetBinContent(29,9.30820002);
  S16_M_0->SetBinContent(30,23.27050005);
  S16_M_0->SetBinContent(31,4.65410001);
  S16_M_0->SetBinContent(32,4.65410001);
  S16_M_0->SetBinContent(33,18.61640004);
  S16_M_0->SetBinContent(34,4.65410001);
  S16_M_0->SetBinContent(35,4.65410001);
  S16_M_0->SetBinContent(36,13.96230003);
  S16_M_0->SetBinContent(37,0.0);
  S16_M_0->SetBinContent(38,9.30820002);
  S16_M_0->SetBinContent(39,4.65410001);
  S16_M_0->SetBinContent(40,4.65410001);
  S16_M_0->SetBinContent(41,41.88690009); // overflow
  S16_M_0->SetEntries(10000);
  // Style
  S16_M_0->SetLineColor(9);
  S16_M_0->SetLineStyle(1);
  S16_M_0->SetLineWidth(1);
  S16_M_0->SetFillColor(9);
  S16_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_244","mystack");
  stack->Add(S16_M_0);
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
  stack->GetXaxis()->SetTitle("M [ a_{1} l+_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_15.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_15.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_15.eps");

}
