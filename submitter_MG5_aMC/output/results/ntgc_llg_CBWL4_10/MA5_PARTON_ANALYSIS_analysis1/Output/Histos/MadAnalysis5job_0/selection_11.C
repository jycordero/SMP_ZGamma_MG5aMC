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
  S12_PT_0->SetBinContent(1,0.49211079643);
  S12_PT_0->SetBinContent(2,1.13860899174);
  S12_PT_0->SetBinContent(3,1.51492898901);
  S12_PT_0->SetBinContent(4,1.80440598691);
  S12_PT_0->SetBinContent(5,2.16142798432);
  S12_PT_0->SetBinContent(6,2.27721898348);
  S12_PT_0->SetBinContent(7,2.34476298299);
  S12_PT_0->SetBinContent(8,2.44125498229);
  S12_PT_0->SetBinContent(9,2.57634498131);
  S12_PT_0->SetBinContent(10,2.48950198194);
  S12_PT_0->SetBinContent(11,2.48950198194);
  S12_PT_0->SetBinContent(12,2.77897897984);
  S12_PT_0->SetBinContent(13,2.57634498131);
  S12_PT_0->SetBinContent(14,2.73073198019);
  S12_PT_0->SetBinContent(15,2.40265898257);
  S12_PT_0->SetBinContent(16,2.24827098369);
  S12_PT_0->SetBinContent(17,2.47985198201);
  S12_PT_0->SetBinContent(18,2.24827098369);
  S12_PT_0->SetBinContent(19,2.15177898439);
  S12_PT_0->SetBinContent(20,2.23862198376);
  S12_PT_0->SetBinContent(21,2.14212898446);
  S12_PT_0->SetBinContent(22,1.95879398579);
  S12_PT_0->SetBinContent(23,1.94914498586);
  S12_PT_0->SetBinContent(24,2.05528598509);
  S12_PT_0->SetBinContent(25,1.86230198649);
  S12_PT_0->SetBinContent(26,1.72721198747);
  S12_PT_0->SetBinContent(27,1.8333539867);
  S12_PT_0->SetBinContent(28,1.52457898894);
  S12_PT_0->SetBinContent(29,1.74651098733);
  S12_PT_0->SetBinContent(30,1.48598198922);
  S12_PT_0->SetBinContent(31,1.62107098824);
  S12_PT_0->SetBinContent(32,1.33159399034);
  S12_PT_0->SetBinContent(33,1.32194499041);
  S12_PT_0->SetBinContent(34,1.22545199111);
  S12_PT_0->SetBinContent(35,1.26404899083);
  S12_PT_0->SetBinContent(36,1.13860899174);
  S12_PT_0->SetBinContent(37,1.04211699244);
  S12_PT_0->SetBinContent(38,1.1579079916);
  S12_PT_0->SetBinContent(39,1.27369899076);
  S12_PT_0->SetBinContent(40,0.95527389307);
  S12_PT_0->SetBinContent(41,22.2897198383); // overflow
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
