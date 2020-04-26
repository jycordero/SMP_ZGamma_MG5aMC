void selection_20()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo41","canvas_plotflow_tempo41",0,0,700,500);
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
  TH1F* S21_DELTAR_0 = new TH1F("S21_DELTAR_0","S21_DELTAR_0",40,0.0,8.0);
  // Content
  S21_DELTAR_0->SetBinContent(0,0.0); // underflow
  S21_DELTAR_0->SetBinContent(1,0.0);
  S21_DELTAR_0->SetBinContent(2,0.0);
  S21_DELTAR_0->SetBinContent(3,0.0);
  S21_DELTAR_0->SetBinContent(4,0.0);
  S21_DELTAR_0->SetBinContent(5,0.0);
  S21_DELTAR_0->SetBinContent(6,0.0);
  S21_DELTAR_0->SetBinContent(7,0.0);
  S21_DELTAR_0->SetBinContent(8,0.0179230900608);
  S21_DELTAR_0->SetBinContent(9,0.0179230900608);
  S21_DELTAR_0->SetBinContent(10,0.0179230900608);
  S21_DELTAR_0->SetBinContent(11,0.044807710152);
  S21_DELTAR_0->SetBinContent(12,0.0985769703344);
  S21_DELTAR_0->SetBinContent(13,0.250923200851);
  S21_DELTAR_0->SetBinContent(14,0.600423302037);
  S21_DELTAR_0->SetBinContent(15,2.96627101006);
  S21_DELTAR_0->SetBinContent(16,28.013780095);
  S21_DELTAR_0->SetBinContent(17,19.168740065);
  S21_DELTAR_0->SetBinContent(18,11.4170100387);
  S21_DELTAR_0->SetBinContent(19,8.02058102721);
  S21_DELTAR_0->SetBinContent(20,5.17977201757);
  S21_DELTAR_0->SetBinContent(21,4.14919401408);
  S21_DELTAR_0->SetBinContent(22,2.90354000985);
  S21_DELTAR_0->SetBinContent(23,1.95361600663);
  S21_DELTAR_0->SetBinContent(24,1.48761600505);
  S21_DELTAR_0->SetBinContent(25,1.03953900353);
  S21_DELTAR_0->SetBinContent(26,0.68107720231);
  S21_DELTAR_0->SetBinContent(27,0.466000201581);
  S21_DELTAR_0->SetBinContent(28,0.394307901338);
  S21_DELTAR_0->SetBinContent(29,0.286769400973);
  S21_DELTAR_0->SetBinContent(30,0.107538500365);
  S21_DELTAR_0->SetBinContent(31,0.134423100456);
  S21_DELTAR_0->SetBinContent(32,0.0806538802736);
  S21_DELTAR_0->SetBinContent(33,0.044807710152);
  S21_DELTAR_0->SetBinContent(34,0.0089615430304);
  S21_DELTAR_0->SetBinContent(35,0.0179230900608);
  S21_DELTAR_0->SetBinContent(36,0.0179230900608);
  S21_DELTAR_0->SetBinContent(37,0.0);
  S21_DELTAR_0->SetBinContent(38,0.0);
  S21_DELTAR_0->SetBinContent(39,0.0089615430304);
  S21_DELTAR_0->SetBinContent(40,0.0179230900608);
  S21_DELTAR_0->SetBinContent(41,0.0); // overflow
  S21_DELTAR_0->SetEntries(10000);
  // Style
  S21_DELTAR_0->SetLineColor(9);
  S21_DELTAR_0->SetLineStyle(1);
  S21_DELTAR_0->SetLineWidth(1);
  S21_DELTAR_0->SetFillColor(9);
  S21_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_42","mystack");
  stack->Add(S21_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ a_{1}, l-_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_20.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_20.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_20.eps");

}
