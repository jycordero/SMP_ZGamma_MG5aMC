void selection_9()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo19","canvas_plotflow_tempo19",0,0,700,500);
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
  TH1F* S10_PT_0 = new TH1F("S10_PT_0","S10_PT_0",40,0.0,800.0);
  // Content
  S10_PT_0->SetBinContent(0,0.0); // underflow
  S10_PT_0->SetBinContent(1,0.0);
  S10_PT_0->SetBinContent(2,0.044536530136);
  S10_PT_0->SetBinContent(3,0.100207200306);
  S10_PT_0->SetBinContent(4,0.139176700425);
  S10_PT_0->SetBinContent(5,0.183713200561);
  S10_PT_0->SetBinContent(6,0.261652100799);
  S10_PT_0->SetBinContent(7,0.256085100782);
  S10_PT_0->SetBinContent(8,0.356292301088);
  S10_PT_0->SetBinContent(9,0.411962901258);
  S10_PT_0->SetBinContent(10,0.601243201836);
  S10_PT_0->SetBinContent(11,0.645779801972);
  S10_PT_0->SetBinContent(12,0.528871301615);
  S10_PT_0->SetBinContent(13,0.634645601938);
  S10_PT_0->SetBinContent(14,0.762688202329);
  S10_PT_0->SetBinContent(15,0.690316302108);
  S10_PT_0->SetBinContent(16,0.701450402142);
  S10_PT_0->SetBinContent(17,0.762688202329);
  S10_PT_0->SetBinContent(18,0.757121102312);
  S10_PT_0->SetBinContent(19,0.924133102822);
  S10_PT_0->SetBinContent(20,0.957535502924);
  S10_PT_0->SetBinContent(21,0.912999002788);
  S10_PT_0->SetBinContent(22,1.06887700326);
  S10_PT_0->SetBinContent(23,0.924133102822);
  S10_PT_0->SetBinContent(24,0.801657602448);
  S10_PT_0->SetBinContent(25,0.823925902516);
  S10_PT_0->SetBinContent(26,0.912999002788);
  S10_PT_0->SetBinContent(27,1.06887700326);
  S10_PT_0->SetBinContent(28,0.823925902516);
  S10_PT_0->SetBinContent(29,1.00207200306);
  S10_PT_0->SetBinContent(30,0.968669602958);
  S10_PT_0->SetBinContent(31,0.757121102312);
  S10_PT_0->SetBinContent(32,0.929700202839);
  S10_PT_0->SetBinContent(33,0.929700202839);
  S10_PT_0->SetBinContent(34,0.924133102822);
  S10_PT_0->SetBinContent(35,0.829493002533);
  S10_PT_0->SetBinContent(36,0.83506000255);
  S10_PT_0->SetBinContent(37,0.885163602703);
  S10_PT_0->SetBinContent(38,0.924133102822);
  S10_PT_0->SetBinContent(39,0.784956402397);
  S10_PT_0->SetBinContent(40,0.940834302873);
  S10_PT_0->SetBinContent(41,27.9021400852); // overflow
  S10_PT_0->SetEntries(10000);
  // Style
  S10_PT_0->SetLineColor(9);
  S10_PT_0->SetLineStyle(1);
  S10_PT_0->SetLineWidth(1);
  S10_PT_0->SetFillColor(9);
  S10_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_20","mystack");
  stack->Add(S10_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ a_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_9.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_9.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_9.eps");

}
