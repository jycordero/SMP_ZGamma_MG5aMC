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
  S12_PT_0->SetBinContent(1,0.01820892069);
  S12_PT_0->SetBinContent(2,0.046313991755);
  S12_PT_0->SetBinContent(3,0.066897992535);
  S12_PT_0->SetBinContent(4,0.08154429309);
  S12_PT_0->SetBinContent(5,0.09341968354);
  S12_PT_0->SetBinContent(6,0.08787783333);
  S12_PT_0->SetBinContent(7,0.116774604425);
  S12_PT_0->SetBinContent(8,0.104107503945);
  S12_PT_0->SetBinContent(9,0.10608680402);
  S12_PT_0->SetBinContent(10,0.1029200039);
  S12_PT_0->SetBinContent(11,0.09816983372);
  S12_PT_0->SetBinContent(12,0.11796210447);
  S12_PT_0->SetBinContent(13,0.11637870441);
  S12_PT_0->SetBinContent(14,0.092232143495);
  S12_PT_0->SetBinContent(15,0.104899203975);
  S12_PT_0->SetBinContent(16,0.09816983372);
  S12_PT_0->SetBinContent(17,0.10846180411);
  S12_PT_0->SetBinContent(18,0.083523523165);
  S12_PT_0->SetBinContent(19,0.09025291342);
  S12_PT_0->SetBinContent(20,0.091440453465);
  S12_PT_0->SetBinContent(21,0.08391937318);
  S12_PT_0->SetBinContent(22,0.08312768315);
  S12_PT_0->SetBinContent(23,0.07521076285);
  S12_PT_0->SetBinContent(24,0.084315223195);
  S12_PT_0->SetBinContent(25,0.08629445327);
  S12_PT_0->SetBinContent(26,0.06571045249);
  S12_PT_0->SetBinContent(27,0.073231532775);
  S12_PT_0->SetBinContent(28,0.08233599312);
  S12_PT_0->SetBinContent(29,0.062939532385);
  S12_PT_0->SetBinContent(30,0.05145999195);
  S12_PT_0->SetBinContent(31,0.05700184216);
  S12_PT_0->SetBinContent(32,0.058981072235);
  S12_PT_0->SetBinContent(33,0.05383507204);
  S12_PT_0->SetBinContent(34,0.05621014213);
  S12_PT_0->SetBinContent(35,0.04829322183);
  S12_PT_0->SetBinContent(36,0.0475015318);
  S12_PT_0->SetBinContent(37,0.044730611695);
  S12_PT_0->SetBinContent(38,0.04275138162);
  S12_PT_0->SetBinContent(39,0.04829322183);
  S12_PT_0->SetBinContent(40,0.043147221635);
  S12_PT_0->SetBinContent(41,0.88352853348); // overflow
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
