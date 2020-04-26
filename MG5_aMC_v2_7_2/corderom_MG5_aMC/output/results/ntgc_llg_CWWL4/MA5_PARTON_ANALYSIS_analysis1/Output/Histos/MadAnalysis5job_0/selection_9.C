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
  S10_PT_0->SetBinContent(1,0.00039584606719);
  S10_PT_0->SetBinContent(2,0.00316676873752);
  S10_PT_0->SetBinContent(3,0.00593769050785);
  S10_PT_0->SetBinContent(4,0.00989615117975);
  S10_PT_0->SetBinContent(5,0.0138546088517);
  S10_PT_0->SetBinContent(6,0.0178130685236);
  S10_PT_0->SetBinContent(7,0.0245424579658);
  S10_PT_0->SetBinContent(8,0.0269175277689);
  S10_PT_0->SetBinContent(9,0.0324593773096);
  S10_PT_0->SetBinContent(10,0.0273133777361);
  S10_PT_0->SetBinContent(11,0.0443347563253);
  S10_PT_0->SetBinContent(12,0.0467098361284);
  S10_PT_0->SetBinContent(13,0.0435430663909);
  S10_PT_0->SetBinContent(14,0.0522516756691);
  S10_PT_0->SetBinContent(15,0.0526475256363);
  S10_PT_0->SetBinContent(16,0.0570018352754);
  S10_PT_0->SetBinContent(17,0.0558142953738);
  S10_PT_0->SetBinContent(18,0.0498766058659);
  S10_PT_0->SetBinContent(19,0.0605644449801);
  S10_PT_0->SetBinContent(20,0.0704605941598);
  S10_PT_0->SetBinContent(21,0.0657104445535);
  S10_PT_0->SetBinContent(22,0.0819401332083);
  S10_PT_0->SetBinContent(23,0.0581893651769);
  S10_PT_0->SetBinContent(24,0.0676896743895);
  S10_PT_0->SetBinContent(25,0.0724398239958);
  S10_PT_0->SetBinContent(26,0.0637312147176);
  S10_PT_0->SetBinContent(27,0.072835673963);
  S10_PT_0->SetBinContent(28,0.0668979844551);
  S10_PT_0->SetBinContent(29,0.0736273638973);
  S10_PT_0->SetBinContent(30,0.0668979844551);
  S10_PT_0->SetBinContent(31,0.0605644449801);
  S10_PT_0->SetBinContent(32,0.0661062945207);
  S10_PT_0->SetBinContent(33,0.0712522940942);
  S10_PT_0->SetBinContent(34,0.0613561349145);
  S10_PT_0->SetBinContent(35,0.0570018352754);
  S10_PT_0->SetBinContent(36,0.0665021344879);
  S10_PT_0->SetBinContent(37,0.0653145945864);
  S10_PT_0->SetBinContent(38,0.0585852151441);
  S10_PT_0->SetBinContent(39,0.0573976752426);
  S10_PT_0->SetBinContent(40,0.0581893651769);
  S10_PT_0->SetBinContent(41,1.95072983831); // overflow
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
