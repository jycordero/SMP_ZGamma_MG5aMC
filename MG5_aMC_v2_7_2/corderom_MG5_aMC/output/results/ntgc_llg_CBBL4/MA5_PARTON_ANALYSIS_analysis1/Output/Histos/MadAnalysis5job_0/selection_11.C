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
  S12_PT_0->SetBinContent(1,0.51976952726);
  S12_PT_0->SetBinContent(2,1.06642405593);
  S12_PT_0->SetBinContent(3,1.47865507755);
  S12_PT_0->SetBinContent(4,1.69373208883);
  S12_PT_0->SetBinContent(5,1.75646209212);
  S12_PT_0->SetBinContent(6,2.4196161269);
  S12_PT_0->SetBinContent(7,2.57196313489);
  S12_PT_0->SetBinContent(8,2.10596211045);
  S12_PT_0->SetBinContent(9,2.40169312596);
  S12_PT_0->SetBinContent(10,2.5092321316);
  S12_PT_0->SetBinContent(11,2.46442412925);
  S12_PT_0->SetBinContent(12,2.42857812737);
  S12_PT_0->SetBinContent(13,2.15973211327);
  S12_PT_0->SetBinContent(14,2.2403861175);
  S12_PT_0->SetBinContent(15,2.16869311374);
  S12_PT_0->SetBinContent(16,2.19557811515);
  S12_PT_0->SetBinContent(17,2.17765511421);
  S12_PT_0->SetBinContent(18,2.04323210716);
  S12_PT_0->SetBinContent(19,1.78334709353);
  S12_PT_0->SetBinContent(20,2.07011610857);
  S12_PT_0->SetBinContent(21,1.87296209823);
  S12_PT_0->SetBinContent(22,1.8819240987);
  S12_PT_0->SetBinContent(23,1.89984709964);
  S12_PT_0->SetBinContent(24,1.86400109776);
  S12_PT_0->SetBinContent(25,1.57723108272);
  S12_PT_0->SetBinContent(26,1.57723108272);
  S12_PT_0->SetBinContent(27,1.41592407426);
  S12_PT_0->SetBinContent(28,1.36215407144);
  S12_PT_0->SetBinContent(29,1.46969307708);
  S12_PT_0->SetBinContent(30,1.45177007614);
  S12_PT_0->SetBinContent(31,1.55930808178);
  S12_PT_0->SetBinContent(32,1.40696207379);
  S12_PT_0->SetBinContent(33,1.14707706016);
  S12_PT_0->SetBinContent(34,1.26357706627);
  S12_PT_0->SetBinContent(35,1.30838506862);
  S12_PT_0->SetBinContent(36,1.20084706298);
  S12_PT_0->SetBinContent(37,0.96784665076);
  S12_PT_0->SetBinContent(38,1.21877006392);
  S12_PT_0->SetBinContent(39,0.94992354982);
  S12_PT_0->SetBinContent(40,0.88719274653);
  S12_PT_0->SetBinContent(41,21.0775511054); // overflow
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
