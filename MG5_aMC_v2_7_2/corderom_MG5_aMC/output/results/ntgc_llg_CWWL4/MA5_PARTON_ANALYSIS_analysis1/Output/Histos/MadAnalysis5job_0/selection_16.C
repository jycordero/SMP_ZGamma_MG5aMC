void selection_16()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo33","canvas_plotflow_tempo33",0,0,700,500);
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
  TH1F* S17_M_0 = new TH1F("S17_M_0","S17_M_0",40,0.0,800.0);
  // Content
  S17_M_0->SetBinContent(0,0.0); // underflow
  S17_M_0->SetBinContent(1,0.0);
  S17_M_0->SetBinContent(2,0.0);
  S17_M_0->SetBinContent(3,0.00039584611259);
  S17_M_0->SetBinContent(4,0.00197923006295);
  S17_M_0->SetBinContent(5,0.00277092308813);
  S17_M_0->SetBinContent(6,0.00316676910072);
  S17_M_0->SetBinContent(7,0.00158338405036);
  S17_M_0->SetBinContent(8,0.0079169222518);
  S17_M_0->SetBinContent(9,0.00435430713849);
  S17_M_0->SetBinContent(10,0.00672938321403);
  S17_M_0->SetBinContent(11,0.0118753803777);
  S17_M_0->SetBinContent(12,0.0118753803777);
  S17_M_0->SetBinContent(13,0.0110836903525);
  S17_M_0->SetBinContent(14,0.0114795403651);
  S17_M_0->SetBinContent(15,0.0106878403399);
  S17_M_0->SetBinContent(16,0.0134587704281);
  S17_M_0->SetBinContent(17,0.0166255405288);
  S17_M_0->SetBinContent(18,0.0205840006547);
  S17_M_0->SetBinContent(19,0.0225632307176);
  S17_M_0->SetBinContent(20,0.0190006106043);
  S17_M_0->SetBinContent(21,0.0229590707302);
  S17_M_0->SetBinContent(22,0.0193964606169);
  S17_M_0->SetBinContent(23,0.0213756906799);
  S17_M_0->SetBinContent(24,0.0237507707554);
  S17_M_0->SetBinContent(25,0.0245424607806);
  S17_M_0->SetBinContent(26,0.0273133808687);
  S17_M_0->SetBinContent(27,0.0285009209065);
  S17_M_0->SetBinContent(28,0.0249383007932);
  S17_M_0->SetBinContent(29,0.0364178411583);
  S17_M_0->SetBinContent(30,0.0269175308561);
  S17_M_0->SetBinContent(31,0.0296884609443);
  S17_M_0->SetBinContent(32,0.0273133808687);
  S17_M_0->SetBinContent(33,0.0344386110953);
  S17_M_0->SetBinContent(34,0.0391887612464);
  S17_M_0->SetBinContent(35,0.0368136911709);
  S17_M_0->SetBinContent(36,0.0399804512716);
  S17_M_0->SetBinContent(37,0.0380012212086);
  S17_M_0->SetBinContent(38,0.0459181514604);
  S17_M_0->SetBinContent(39,0.039584611259);
  S17_M_0->SetBinContent(40,0.0324593810324);
  S17_M_0->SetBinContent(41,3.16083110053); // overflow
  S17_M_0->SetEntries(10000);
  // Style
  S17_M_0->SetLineColor(9);
  S17_M_0->SetLineStyle(1);
  S17_M_0->SetLineWidth(1);
  S17_M_0->SetFillColor(9);
  S17_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_34","mystack");
  stack->Add(S17_M_0);
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
  stack->GetXaxis()->SetTitle("M [ a_{1} l-_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_16.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_16.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_16.eps");

}
