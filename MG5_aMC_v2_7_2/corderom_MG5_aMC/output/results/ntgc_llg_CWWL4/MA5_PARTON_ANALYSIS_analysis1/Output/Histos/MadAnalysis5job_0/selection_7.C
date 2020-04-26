void selection_7()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo15","canvas_plotflow_tempo15",0,0,700,500);
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
  TH1F* S8_M_0 = new TH1F("S8_M_0","S8_M_0",40,0.0,800.0);
  // Content
  S8_M_0->SetBinContent(0,0.0); // underflow
  S8_M_0->SetBinContent(1,0.0);
  S8_M_0->SetBinContent(2,0.0);
  S8_M_0->SetBinContent(3,0.0);
  S8_M_0->SetBinContent(4,0.0);
  S8_M_0->SetBinContent(5,0.0);
  S8_M_0->SetBinContent(6,0.0);
  S8_M_0->SetBinContent(7,0.00039584608853);
  S8_M_0->SetBinContent(8,0.00039584608853);
  S8_M_0->SetBinContent(9,0.00039584608853);
  S8_M_0->SetBinContent(10,0.00079169217706);
  S8_M_0->SetBinContent(11,0.00158338395412);
  S8_M_0->SetBinContent(12,0.00079169217706);
  S8_M_0->SetBinContent(13,0.00158338395412);
  S8_M_0->SetBinContent(14,0.00237507693118);
  S8_M_0->SetBinContent(15,0.00277092291971);
  S8_M_0->SetBinContent(16,0.00237507693118);
  S8_M_0->SetBinContent(17,0.00197922994265);
  S8_M_0->SetBinContent(18,0.0039584608853);
  S8_M_0->SetBinContent(19,0.00316676890824);
  S8_M_0->SetBinContent(20,0.00593769082795);
  S8_M_0->SetBinContent(21,0.00514599885089);
  S8_M_0->SetBinContent(22,0.00752107578207);
  S8_M_0->SetBinContent(23,0.00554184483942);
  S8_M_0->SetBinContent(24,0.00752107578207);
  S8_M_0->SetBinContent(25,0.00950030572472);
  S8_M_0->SetBinContent(26,0.012667069633);
  S8_M_0->SetBinContent(27,0.00831276775913);
  S8_M_0->SetBinContent(28,0.0079169217706);
  S8_M_0->SetBinContent(29,0.00870861374766);
  S8_M_0->SetBinContent(30,0.00989615171325);
  S8_M_0->SetBinContent(31,0.00870861374766);
  S8_M_0->SetBinContent(32,0.012667069633);
  S8_M_0->SetBinContent(33,0.00989615171325);
  S8_M_0->SetBinContent(34,0.01345876961);
  S8_M_0->SetBinContent(35,0.0174172294953);
  S8_M_0->SetBinContent(36,0.00989615171325);
  S8_M_0->SetBinContent(37,0.0102919997018);
  S8_M_0->SetBinContent(38,0.0154379995527);
  S8_M_0->SetBinContent(39,0.0122712296444);
  S8_M_0->SetBinContent(40,0.0150421495641);
  S8_M_0->SetBinContent(41,3.72214089215); // overflow
  S8_M_0->SetEntries(10000);
  // Style
  S8_M_0->SetLineColor(9);
  S8_M_0->SetLineStyle(1);
  S8_M_0->SetLineWidth(1);
  S8_M_0->SetFillColor(9);
  S8_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_16","mystack");
  stack->Add(S8_M_0);
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
  stack->GetXaxis()->SetTitle("M [ a_{1} z_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_7.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_7.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_7.eps");

}
