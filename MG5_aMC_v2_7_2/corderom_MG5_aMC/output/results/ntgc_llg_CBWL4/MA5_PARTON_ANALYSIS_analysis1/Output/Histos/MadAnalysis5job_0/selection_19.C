void selection_19()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo39","canvas_plotflow_tempo39",0,0,700,500);
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
  TH1F* S20_DELTAR_0 = new TH1F("S20_DELTAR_0","S20_DELTAR_0",40,0.0,8.0);
  // Content
  S20_DELTAR_0->SetBinContent(0,0.0); // underflow
  S20_DELTAR_0->SetBinContent(1,0.0);
  S20_DELTAR_0->SetBinContent(2,0.0);
  S20_DELTAR_0->SetBinContent(3,0.0);
  S20_DELTAR_0->SetBinContent(4,0.0);
  S20_DELTAR_0->SetBinContent(5,0.0015438750195);
  S20_DELTAR_0->SetBinContent(6,0.0);
  S20_DELTAR_0->SetBinContent(7,0.0);
  S20_DELTAR_0->SetBinContent(8,0.0015438750195);
  S20_DELTAR_0->SetBinContent(9,0.0015438750195);
  S20_DELTAR_0->SetBinContent(10,0.003087750039);
  S20_DELTAR_0->SetBinContent(11,0.006175500078);
  S20_DELTAR_0->SetBinContent(12,0.0231581202925);
  S20_DELTAR_0->SetBinContent(13,0.033965250429);
  S20_DELTAR_0->SetBinContent(14,0.098808001248);
  S20_DELTAR_0->SetBinContent(15,0.467794105908);
  S20_DELTAR_0->SetBinContent(16,5.0036990632);
  S20_DELTAR_0->SetBinContent(17,3.2622080412);
  S20_DELTAR_0->SetBinContent(18,1.86191302352);
  S20_DELTAR_0->SetBinContent(19,1.28450401622);
  S20_DELTAR_0->SetBinContent(20,0.963378012168);
  S20_DELTAR_0->SetBinContent(21,0.694743708775);
  S20_DELTAR_0->SetBinContent(22,0.498671606298);
  S20_DELTAR_0->SetBinContent(23,0.364354504602);
  S20_DELTAR_0->SetBinContent(24,0.280985203549);
  S20_DELTAR_0->SetBinContent(25,0.202247602554);
  S20_DELTAR_0->SetBinContent(26,0.117334501482);
  S20_DELTAR_0->SetBinContent(27,0.104983501326);
  S20_DELTAR_0->SetBinContent(28,0.0540356206825);
  S20_DELTAR_0->SetBinContent(29,0.024702000312);
  S20_DELTAR_0->SetBinContent(30,0.0355091204485);
  S20_DELTAR_0->SetBinContent(31,0.0169826202145);
  S20_DELTAR_0->SetBinContent(32,0.009263250117);
  S20_DELTAR_0->SetBinContent(33,0.003087750039);
  S20_DELTAR_0->SetBinContent(34,0.006175500078);
  S20_DELTAR_0->SetBinContent(35,0.006175500078);
  S20_DELTAR_0->SetBinContent(36,0.0015438750195);
  S20_DELTAR_0->SetBinContent(37,0.0);
  S20_DELTAR_0->SetBinContent(38,0.0);
  S20_DELTAR_0->SetBinContent(39,0.0015438750195);
  S20_DELTAR_0->SetBinContent(40,0.0015438750195);
  S20_DELTAR_0->SetBinContent(41,0.0015438750195); // overflow
  S20_DELTAR_0->SetEntries(10000);
  // Style
  S20_DELTAR_0->SetLineColor(9);
  S20_DELTAR_0->SetLineStyle(1);
  S20_DELTAR_0->SetLineWidth(1);
  S20_DELTAR_0->SetFillColor(9);
  S20_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_40","mystack");
  stack->Add(S20_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ a_{1}, l+_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_19.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_19.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_19.eps");

}
