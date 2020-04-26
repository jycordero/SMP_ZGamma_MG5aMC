void selection_15()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo31","canvas_plotflow_tempo31",0,0,700,500);
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
  TH1F* S16_M_0 = new TH1F("S16_M_0","S16_M_0",40,0.0,800.0);
  // Content
  S16_M_0->SetBinContent(0,0.0); // underflow
  S16_M_0->SetBinContent(1,0.0);
  S16_M_0->SetBinContent(2,0.0);
  S16_M_0->SetBinContent(3,0.011134130492);
  S16_M_0->SetBinContent(4,0.02783533123);
  S16_M_0->SetBinContent(5,0.022268270984);
  S16_M_0->SetBinContent(6,0.050103602214);
  S16_M_0->SetBinContent(7,0.02783533123);
  S16_M_0->SetBinContent(8,0.05567067246);
  S16_M_0->SetBinContent(9,0.089073073936);
  S16_M_0->SetBinContent(10,0.094640144182);
  S16_M_0->SetBinContent(11,0.116908405166);
  S16_M_0->SetBinContent(12,0.100207204428);
  S16_M_0->SetBinContent(13,0.133609605904);
  S16_M_0->SetBinContent(14,0.105774304674);
  S16_M_0->SetBinContent(15,0.205981509102);
  S16_M_0->SetBinContent(16,0.205981509102);
  S16_M_0->SetBinContent(17,0.205981509102);
  S16_M_0->SetBinContent(18,0.200414408856);
  S16_M_0->SetBinContent(19,0.283920412546);
  S16_M_0->SetBinContent(20,0.350725215498);
  S16_M_0->SetBinContent(21,0.350725215498);
  S16_M_0->SetBinContent(22,0.289487512792);
  S16_M_0->SetBinContent(23,0.328456914514);
  S16_M_0->SetBinContent(24,0.411962918204);
  S16_M_0->SetBinContent(25,0.339591115006);
  S16_M_0->SetBinContent(26,0.411962918204);
  S16_M_0->SetBinContent(27,0.350725215498);
  S16_M_0->SetBinContent(28,0.384127616974);
  S16_M_0->SetBinContent(29,0.47320072091);
  S16_M_0->SetBinContent(30,0.450932419926);
  S16_M_0->SetBinContent(31,0.434231219188);
  S16_M_0->SetBinContent(32,0.484334821402);
  S16_M_0->SetBinContent(33,0.456499520172);
  S16_M_0->SetBinContent(34,0.534438423616);
  S16_M_0->SetBinContent(35,0.5567067246);
  S16_M_0->SetBinContent(36,0.484334821402);
  S16_M_0->SetBinContent(37,0.517737222878);
  S16_M_0->SetBinContent(38,0.495468921894);
  S16_M_0->SetBinContent(39,0.50103602214);
  S16_M_0->SetBinContent(40,0.506603122386);
  S16_M_0->SetBinContent(41,44.6200419717); // overflow
  S16_M_0->SetEntries(10000);
  // Style
  S16_M_0->SetLineColor(9);
  S16_M_0->SetLineStyle(1);
  S16_M_0->SetLineWidth(1);
  S16_M_0->SetFillColor(9);
  S16_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_32","mystack");
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
