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
  S17_M_0->SetBinContent(2,0.0289476894597);
  S17_M_0->SetBinContent(3,0.0096492308199);
  S17_M_0->SetBinContent(4,0.0578953889194);
  S17_M_0->SetBinContent(5,0.0192984596398);
  S17_M_0->SetBinContent(6,0.0385969192796);
  S17_M_0->SetBinContent(7,0.0771938485592);
  S17_M_0->SetBinContent(8,0.0868430783791);
  S17_M_0->SetBinContent(9,0.0868430783791);
  S17_M_0->SetBinContent(10,0.135089197479);
  S17_M_0->SetBinContent(11,0.135089197479);
  S17_M_0->SetBinContent(12,0.221932295858);
  S17_M_0->SetBinContent(13,0.357021593336);
  S17_M_0->SetBinContent(14,0.308775394237);
  S17_M_0->SetBinContent(15,0.318424594057);
  S17_M_0->SetBinContent(16,0.482461590995);
  S17_M_0->SetBinContent(17,0.357021593336);
  S17_M_0->SetBinContent(18,0.299126194417);
  S17_M_0->SetBinContent(19,0.453513891535);
  S17_M_0->SetBinContent(20,0.463163091355);
  S17_M_0->SetBinContent(21,0.607901588654);
  S17_M_0->SetBinContent(22,0.482461590995);
  S17_M_0->SetBinContent(23,0.617550788474);
  S17_M_0->SetBinContent(24,0.685095387213);
  S17_M_0->SetBinContent(25,0.665796887573);
  S17_M_0->SetBinContent(26,0.617550788474);
  S17_M_0->SetBinContent(27,0.559655389554);
  S17_M_0->SetBinContent(28,0.704393886853);
  S17_M_0->SetBinContent(29,0.675446187393);
  S17_M_0->SetBinContent(30,0.685095387213);
  S17_M_0->SetBinContent(31,0.636849288113);
  S17_M_0->SetBinContent(32,0.800886185052);
  S17_M_0->SetBinContent(33,0.800886185052);
  S17_M_0->SetBinContent(34,0.781587685412);
  S17_M_0->SetBinContent(35,0.829833884511);
  S17_M_0->SetBinContent(36,0.800886185052);
  S17_M_0->SetBinContent(37,0.858781583971);
  S17_M_0->SetBinContent(38,0.92632618271);
  S17_M_0->SetBinContent(39,0.714043086673);
  S17_M_0->SetBinContent(40,1.04211698055);
  S17_M_0->SetBinContent(41,78.062278543); // overflow
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
