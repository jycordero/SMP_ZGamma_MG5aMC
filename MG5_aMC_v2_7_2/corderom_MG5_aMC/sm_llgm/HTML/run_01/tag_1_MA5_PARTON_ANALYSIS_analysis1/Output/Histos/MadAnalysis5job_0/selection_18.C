void selection_18()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo293","canvas_plotflow_tempo293",0,0,700,500);
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
  TH1F* S19_M_0 = new TH1F("S19_M_0","S19_M_0",40,20.0,200.0);
  // Content
  S19_M_0->SetBinContent(0,0.0); // underflow
  S19_M_0->SetBinContent(1,0.0);
  S19_M_0->SetBinContent(2,0.0);
  S19_M_0->SetBinContent(3,0.0);
  S19_M_0->SetBinContent(4,0.0);
  S19_M_0->SetBinContent(5,0.0);
  S19_M_0->SetBinContent(6,0.0);
  S19_M_0->SetBinContent(7,0.0);
  S19_M_0->SetBinContent(8,23.2705028);
  S19_M_0->SetBinContent(9,88.42791064);
  S19_M_0->SetBinContent(10,69.8115084);
  S19_M_0->SetBinContent(11,125.66071512);
  S19_M_0->SetBinContent(12,176.85582128);
  S19_M_0->SetBinContent(13,386.29034648);
  S19_M_0->SetBinContent(14,632.95767616);
  S19_M_0->SetBinContent(15,2517.86830296);
  S19_M_0->SetBinContent(16,27905.9833578);
  S19_M_0->SetBinContent(17,11649.2114017);
  S19_M_0->SetBinContent(18,1656.86019936);
  S19_M_0->SetBinContent(19,558.4920672);
  S19_M_0->SetBinContent(20,288.55423472);
  S19_M_0->SetBinContent(21,209.4345252);
  S19_M_0->SetBinContent(22,102.39021232);
  S19_M_0->SetBinContent(23,79.11970952);
  S19_M_0->SetBinContent(24,69.8115084);
  S19_M_0->SetBinContent(25,0.0);
  S19_M_0->SetBinContent(26,0.0);
  S19_M_0->SetBinContent(27,0.0);
  S19_M_0->SetBinContent(28,0.0);
  S19_M_0->SetBinContent(29,0.0);
  S19_M_0->SetBinContent(30,0.0);
  S19_M_0->SetBinContent(31,0.0);
  S19_M_0->SetBinContent(32,0.0);
  S19_M_0->SetBinContent(33,0.0);
  S19_M_0->SetBinContent(34,0.0);
  S19_M_0->SetBinContent(35,0.0);
  S19_M_0->SetBinContent(36,0.0);
  S19_M_0->SetBinContent(37,0.0);
  S19_M_0->SetBinContent(38,0.0);
  S19_M_0->SetBinContent(39,0.0);
  S19_M_0->SetBinContent(40,0.0);
  S19_M_0->SetBinContent(41,0.0); // overflow
  S19_M_0->SetEntries(10000);
  // Style
  S19_M_0->SetLineColor(9);
  S19_M_0->SetLineStyle(1);
  S19_M_0->SetLineWidth(1);
  S19_M_0->SetFillColor(9);
  S19_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_294","mystack");
  stack->Add(S19_M_0);
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
  stack->GetXaxis()->SetTitle("M [ l+_{1} l-_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_18.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_18.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_18.eps");

}
