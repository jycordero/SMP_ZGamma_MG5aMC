void selection_13()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo27","canvas_plotflow_tempo27",0,0,700,500);
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
  TH1F* S14_PT_0 = new TH1F("S14_PT_0","S14_PT_0",40,0.0,650.0);
  // Content
  S14_PT_0->SetBinContent(0,0.0); // underflow
  S14_PT_0->SetBinContent(1,0.019396460343);
  S14_PT_0->SetBinContent(2,0.047897380847);
  S14_PT_0->SetBinContent(3,0.064127071134);
  S14_PT_0->SetBinContent(4,0.076002451344);
  S14_PT_0->SetBinContent(5,0.082335991456);
  S14_PT_0->SetBinContent(6,0.092627981638);
  S14_PT_0->SetBinContent(7,0.110441101953);
  S14_PT_0->SetBinContent(8,0.107274301897);
  S14_PT_0->SetBinContent(9,0.113607802009);
  S14_PT_0->SetBinContent(10,0.113212002002);
  S14_PT_0->SetBinContent(11,0.101732401799);
  S14_PT_0->SetBinContent(12,0.117566302079);
  S14_PT_0->SetBinContent(13,0.105295101862);
  S14_PT_0->SetBinContent(14,0.099357371757);
  S14_PT_0->SetBinContent(15,0.099753211764);
  S14_PT_0->SetBinContent(16,0.100544901778);
  S14_PT_0->SetBinContent(17,0.093023831645);
  S14_PT_0->SetBinContent(18,0.09896152175);
  S14_PT_0->SetBinContent(19,0.087481991547);
  S14_PT_0->SetBinContent(20,0.09500306168);
  S14_PT_0->SetBinContent(21,0.084315221491);
  S14_PT_0->SetBinContent(22,0.078773371393);
  S14_PT_0->SetBinContent(23,0.072043991274);
  S14_PT_0->SetBinContent(24,0.085502751512);
  S14_PT_0->SetBinContent(25,0.069668911232);
  S14_PT_0->SetBinContent(26,0.074419061316);
  S14_PT_0->SetBinContent(27,0.067689681197);
  S14_PT_0->SetBinContent(28,0.077981681379);
  S14_PT_0->SetBinContent(29,0.065710451162);
  S14_PT_0->SetBinContent(30,0.064522911141);
  S14_PT_0->SetBinContent(31,0.045918150812);
  S14_PT_0->SetBinContent(32,0.058585221036);
  S14_PT_0->SetBinContent(33,0.057001841008);
  S14_PT_0->SetBinContent(34,0.058585221036);
  S14_PT_0->SetBinContent(35,0.049480760875);
  S14_PT_0->SetBinContent(36,0.051064150903);
  S14_PT_0->SetBinContent(37,0.052251680924);
  S14_PT_0->SetBinContent(38,0.042751380756);
  S14_PT_0->SetBinContent(39,0.041959690742);
  S14_PT_0->SetBinContent(40,0.049876610882);
  S14_PT_0->SetBinContent(41,0.884716015645); // overflow
  S14_PT_0->SetEntries(10000);
  // Style
  S14_PT_0->SetLineColor(9);
  S14_PT_0->SetLineStyle(1);
  S14_PT_0->SetLineWidth(1);
  S14_PT_0->SetFillColor(9);
  S14_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_28","mystack");
  stack->Add(S14_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ l+_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_13.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_13.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_13.eps");

}
