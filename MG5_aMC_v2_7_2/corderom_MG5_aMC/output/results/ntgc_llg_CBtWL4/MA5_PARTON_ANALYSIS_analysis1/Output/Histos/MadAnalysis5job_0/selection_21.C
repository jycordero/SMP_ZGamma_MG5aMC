void selection_21()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo43","canvas_plotflow_tempo43",0,0,700,500);
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
  TH1F* S22_DELTAR_0 = new TH1F("S22_DELTAR_0","S22_DELTAR_0",40,0.0,5.0);
  // Content
  S22_DELTAR_0->SetBinContent(0,0.0); // underflow
  S22_DELTAR_0->SetBinContent(1,6.08480418898);
  S22_DELTAR_0->SetBinContent(2,20.2752606297);
  S22_DELTAR_0->SetBinContent(3,12.1417703771);
  S22_DELTAR_0->SetBinContent(4,6.39656019866);
  S22_DELTAR_0->SetBinContent(5,3.49055110841);
  S22_DELTAR_0->SetBinContent(6,2.24352806968);
  S22_DELTAR_0->SetBinContent(7,1.34166304167);
  S22_DELTAR_0->SetBinContent(8,0.985370830603);
  S22_DELTAR_0->SetBinContent(9,0.606810318846);
  S22_DELTAR_0->SetBinContent(10,0.489901915215);
  S22_DELTAR_0->SetBinContent(11,0.328456910201);
  S22_DELTAR_0->SetBinContent(12,0.228249707089);
  S22_DELTAR_0->SetBinContent(13,0.178146105533);
  S22_DELTAR_0->SetBinContent(14,0.167012005187);
  S22_DELTAR_0->SetBinContent(15,0.0946401429393);
  S22_DELTAR_0->SetBinContent(16,0.105774303285);
  S22_DELTAR_0->SetBinContent(17,0.0835060025935);
  S22_DELTAR_0->SetBinContent(18,0.0835060025935);
  S22_DELTAR_0->SetBinContent(19,0.055670671729);
  S22_DELTAR_0->SetBinContent(20,0.0612377419019);
  S22_DELTAR_0->SetBinContent(21,0.0501036015561);
  S22_DELTAR_0->SetBinContent(22,0.0111341303458);
  S22_DELTAR_0->SetBinContent(23,0.0389694712103);
  S22_DELTAR_0->SetBinContent(24,0.0278353308645);
  S22_DELTAR_0->SetBinContent(25,0.0278353308645);
  S22_DELTAR_0->SetBinContent(26,0.0111341303458);
  S22_DELTAR_0->SetBinContent(27,0.0111341303458);
  S22_DELTAR_0->SetBinContent(28,0.0167012005187);
  S22_DELTAR_0->SetBinContent(29,0.0);
  S22_DELTAR_0->SetBinContent(30,0.0);
  S22_DELTAR_0->SetBinContent(31,0.0055670671729);
  S22_DELTAR_0->SetBinContent(32,0.0055670671729);
  S22_DELTAR_0->SetBinContent(33,0.0);
  S22_DELTAR_0->SetBinContent(34,0.0167012005187);
  S22_DELTAR_0->SetBinContent(35,0.0);
  S22_DELTAR_0->SetBinContent(36,0.0);
  S22_DELTAR_0->SetBinContent(37,0.0);
  S22_DELTAR_0->SetBinContent(38,0.0);
  S22_DELTAR_0->SetBinContent(39,0.0);
  S22_DELTAR_0->SetBinContent(40,0.0);
  S22_DELTAR_0->SetBinContent(41,0.0055670671729); // overflow
  S22_DELTAR_0->SetEntries(10000);
  // Style
  S22_DELTAR_0->SetLineColor(9);
  S22_DELTAR_0->SetLineStyle(1);
  S22_DELTAR_0->SetLineWidth(1);
  S22_DELTAR_0->SetFillColor(9);
  S22_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_44","mystack");
  stack->Add(S22_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ l-_{1}, l+_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_21.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_21.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_21.eps");

}
