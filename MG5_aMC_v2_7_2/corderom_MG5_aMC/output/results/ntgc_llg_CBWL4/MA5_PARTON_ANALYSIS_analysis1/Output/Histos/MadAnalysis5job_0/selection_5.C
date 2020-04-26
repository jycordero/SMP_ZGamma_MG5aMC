void selection_5()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo11","canvas_plotflow_tempo11",0,0,700,500);
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
  TH1F* S6_PT_0 = new TH1F("S6_PT_0","S6_PT_0",40,0.0,1000.0);
  // Content
  S6_PT_0->SetBinContent(0,0.0); // underflow
  S6_PT_0->SetBinContent(1,0.006175500116);
  S6_PT_0->SetBinContent(2,0.013894870261);
  S6_PT_0->SetBinContent(3,0.033965250638);
  S6_PT_0->SetBinContent(4,0.057123371073);
  S6_PT_0->SetBinContent(5,0.091088621711);
  S6_PT_0->SetBinContent(6,0.115790602175);
  S6_PT_0->SetBinContent(7,0.166738503132);
  S6_PT_0->SetBinContent(8,0.145124202726);
  S6_PT_0->SetBinContent(9,0.197616003712);
  S6_PT_0->SetBinContent(10,0.211510903973);
  S6_PT_0->SetBinContent(11,0.226949604263);
  S6_PT_0->SetBinContent(12,0.219230204118);
  S6_PT_0->SetBinContent(13,0.256283204814);
  S6_PT_0->SetBinContent(14,0.260914904901);
  S6_PT_0->SetBinContent(15,0.285616905365);
  S6_PT_0->SetBinContent(16,0.307231105771);
  S6_PT_0->SetBinContent(17,0.296424005568);
  S6_PT_0->SetBinContent(18,0.301055605655);
  S6_PT_0->SetBinContent(19,0.336564706322);
  S6_PT_0->SetBinContent(20,0.321126006032);
  S6_PT_0->SetBinContent(21,0.348915706554);
  S6_PT_0->SetBinContent(22,0.344284106467);
  S6_PT_0->SetBinContent(23,0.330389206206);
  S6_PT_0->SetBinContent(24,0.358179006728);
  S6_PT_0->SetBinContent(25,0.305687205742);
  S6_PT_0->SetBinContent(26,0.285616905365);
  S6_PT_0->SetBinContent(27,0.304143405713);
  S6_PT_0->SetBinContent(28,0.310318905829);
  S6_PT_0->SetBinContent(29,0.302599505684);
  S6_PT_0->SetBinContent(30,0.32421370609);
  S6_PT_0->SetBinContent(31,0.314950505916);
  S6_PT_0->SetBinContent(32,0.253195504756);
  S6_PT_0->SetBinContent(33,0.267090405017);
  S6_PT_0->SetBinContent(34,0.301055605655);
  S6_PT_0->SetBinContent(35,0.271722005104);
  S6_PT_0->SetBinContent(36,0.307231105771);
  S6_PT_0->SetBinContent(37,0.253195504756);
  S6_PT_0->SetBinContent(38,0.248563904669);
  S6_PT_0->SetBinContent(39,0.24702000464);
  S6_PT_0->SetBinContent(40,0.226949604263);
  S6_PT_0->SetBinContent(41,5.68300410675); // overflow
  S6_PT_0->SetEntries(10000);
  // Style
  S6_PT_0->SetLineColor(9);
  S6_PT_0->SetLineStyle(1);
  S6_PT_0->SetLineWidth(1);
  S6_PT_0->SetFillColor(9);
  S6_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_12","mystack");
  stack->Add(S6_PT_0);
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
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_5.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_5.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_5.eps");

}
