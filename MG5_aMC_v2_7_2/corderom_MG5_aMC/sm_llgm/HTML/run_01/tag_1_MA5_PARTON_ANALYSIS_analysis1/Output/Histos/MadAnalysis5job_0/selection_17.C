void selection_17()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo291","canvas_plotflow_tempo291",0,0,700,500);
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
  TH1F* S18_M_0 = new TH1F("S18_M_0","S18_M_0",40,0.0,900.0);
  // Content
  S18_M_0->SetBinContent(0,0.0); // underflow
  S18_M_0->SetBinContent(1,0.0);
  S18_M_0->SetBinContent(2,0.0);
  S18_M_0->SetBinContent(3,0.0);
  S18_M_0->SetBinContent(4,218.74275029);
  S18_M_0->SetBinContent(5,13445.6930912);
  S18_M_0->SetBinContent(6,16624.443822);
  S18_M_0->SetBinContent(7,7139.39064138);
  S18_M_0->SetBinContent(8,3411.45578431);
  S18_M_0->SetBinContent(9,1875.60243121);
  S18_M_0->SetBinContent(10,1051.82724182);
  S18_M_0->SetBinContent(11,721.38566585);
  S18_M_0->SetBinContent(12,572.45443161);
  S18_M_0->SetBinContent(13,311.82477169);
  S18_M_0->SetBinContent(14,269.93786206);
  S18_M_0->SetBinContent(15,190.81814387);
  S18_M_0->SetBinContent(16,162.89353745);
  S18_M_0->SetBinContent(17,74.46561712);
  S18_M_0->SetBinContent(18,111.69842568);
  S18_M_0->SetBinContent(19,74.46561712);
  S18_M_0->SetBinContent(20,55.84921284);
  S18_M_0->SetBinContent(21,23.27050535);
  S18_M_0->SetBinContent(22,32.57870749);
  S18_M_0->SetBinContent(23,18.61640428);
  S18_M_0->SetBinContent(24,27.92460642);
  S18_M_0->SetBinContent(25,9.30820214);
  S18_M_0->SetBinContent(26,18.61640428);
  S18_M_0->SetBinContent(27,18.61640428);
  S18_M_0->SetBinContent(28,9.30820214);
  S18_M_0->SetBinContent(29,18.61640428);
  S18_M_0->SetBinContent(30,0.0);
  S18_M_0->SetBinContent(31,9.30820214);
  S18_M_0->SetBinContent(32,9.30820214);
  S18_M_0->SetBinContent(33,9.30820214);
  S18_M_0->SetBinContent(34,0.0);
  S18_M_0->SetBinContent(35,0.0);
  S18_M_0->SetBinContent(36,4.65410107);
  S18_M_0->SetBinContent(37,0.0);
  S18_M_0->SetBinContent(38,0.0);
  S18_M_0->SetBinContent(39,0.0);
  S18_M_0->SetBinContent(40,4.65410107);
  S18_M_0->SetBinContent(41,13.96230321); // overflow
  S18_M_0->SetEntries(10000);
  // Style
  S18_M_0->SetLineColor(9);
  S18_M_0->SetLineStyle(1);
  S18_M_0->SetLineWidth(1);
  S18_M_0->SetFillColor(9);
  S18_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_292","mystack");
  stack->Add(S18_M_0);
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
  stack->GetXaxis()->SetTitle("M [ a_{1} l+_{1} l-_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_17.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_17.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_17.eps");

}
