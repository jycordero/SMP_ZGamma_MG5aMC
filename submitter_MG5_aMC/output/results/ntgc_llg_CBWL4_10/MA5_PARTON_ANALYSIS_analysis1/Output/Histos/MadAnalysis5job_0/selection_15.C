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
  S16_M_0->SetBinContent(2,0.0096492305088);
  S16_M_0->SetBinContent(3,0.0096492305088);
  S16_M_0->SetBinContent(4,0.0192984590176);
  S16_M_0->SetBinContent(5,0.0192984590176);
  S16_M_0->SetBinContent(6,0.0771938460704);
  S16_M_0->SetBinContent(7,0.0868430755792);
  S16_M_0->SetBinContent(8,0.16403689165);
  S16_M_0->SetBinContent(9,0.154387692141);
  S16_M_0->SetBinContent(10,0.212283089194);
  S16_M_0->SetBinContent(11,0.221932288702);
  S16_M_0->SetBinContent(12,0.212283089194);
  S16_M_0->SetBinContent(13,0.270178486246);
  S16_M_0->SetBinContent(14,0.347372282317);
  S16_M_0->SetBinContent(15,0.270178486246);
  S16_M_0->SetBinContent(16,0.376319980843);
  S16_M_0->SetBinContent(17,0.299126184773);
  S16_M_0->SetBinContent(18,0.308775384282);
  S16_M_0->SetBinContent(19,0.366670781334);
  S16_M_0->SetBinContent(20,0.434215377896);
  S16_M_0->SetBinContent(21,0.501759974458);
  S16_M_0->SetBinContent(22,0.540356872493);
  S16_M_0->SetBinContent(23,0.511409173966);
  S16_M_0->SetBinContent(24,0.472812275931);
  S16_M_0->SetBinContent(25,0.607901569054);
  S16_M_0->SetBinContent(26,0.636849267581);
  S16_M_0->SetBinContent(27,0.64649846709);
  S16_M_0->SetBinContent(28,0.714043063651);
  S16_M_0->SetBinContent(29,0.55965537151);
  S16_M_0->SetBinContent(30,0.714043063651);
  S16_M_0->SetBinContent(31,0.64649846709);
  S16_M_0->SetBinContent(32,0.636849267581);
  S16_M_0->SetBinContent(33,0.781587660213);
  S16_M_0->SetBinContent(34,0.694744564634);
  S16_M_0->SetBinContent(35,1.07106494548);
  S16_M_0->SetBinContent(36,0.781587660213);
  S16_M_0->SetBinContent(37,0.935975352354);
  S16_M_0->SetBinContent(38,0.858781556283);
  S16_M_0->SetBinContent(39,0.88772925481);
  S16_M_0->SetBinContent(40,0.955273851371);
  S16_M_0->SetBinContent(41,78.4771960051); // overflow
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
