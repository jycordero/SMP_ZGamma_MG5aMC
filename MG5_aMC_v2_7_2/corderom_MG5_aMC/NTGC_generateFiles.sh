COUPSEL=$1
#COUPSEL=$2
#OUTNAME=$1

COUPSET=(CBtWL4 CBWL4 CWWL4 CBBL4)
VAL=4
if [ $COUPSEL == 1 ] 
then
	COUPLING=CBtWL4
elif [ $COUPSEL == 2 ] 
then
	COUPLING=CBWL4
elif [ $COUPSEL == 3 ] 
then
	COUPLING=CWWL4
elif [ $COUPSEL == 4 ] 
then
	COUPLING=CBBL4
else
	COUPLING=CBtWL4
	VAL=0
fi


OUTNAME=$COUPLING
OUTDIR=output/scripts
OUTMAD=output/results

################################################################
OUTFILE=mg5_$OUTNAME.txt
echo "# Operationg for MadGraph NTGC" > $OUTDIR/$OUTFILE
PROCESS="p p > z a, z > l- l+"




MADGRAPHDIR=$PWD/$OUTMAD

echo "import model NTGC"             >> $OUTDIR/$OUTFILE
echo "generate $PROCESS"             >> $OUTDIR/$OUTFILE
echo "output $MADGRAPHDIR/ntgc_llg_$COUPLING"     >> $OUTDIR/$OUTFILE
echo "launch"                        >> $OUTDIR/$OUTFILE
echo "	3"                           >> $OUTDIR/$OUTFILE
for coupling in ${COUPSET[*]}
do 
	echo "	set $coupling 0" >> $OUTDIR/$OUTFILE
done	
echo "	set $COUPLING 4"         >> $OUTDIR/$OUTFILE


#################################################################
OUTFILE=ma5_$OUTNAME.txt
echo "# Operationg for MadAnalysis NTGC" > $OUTDIR/$OUTFILE


MADGRAPHDIR=$PWD/$OUTMAD

echo "import /home/jcordero/CMS/Theory/MG5_aMC_v2_7_2//bin/internal/ufomodel" >> $OUTDIR/$OUTFILE
echo "import $MADGRAPHDIR/ntgc_llg_$COUPLING/Events/run_01/unweighted_events.lhe.gz as unweighted_events" >> $OUTDIR/$OUTFILE

echo "define vl = 12 14 16" >> $OUTDIR/$OUTFILE
echo "Y" >> $OUTDIR/$OUTFILE
echo "define vl~ = -16 -14 -12" >> $OUTDIR/$OUTFILE
echo "Y" >> $OUTDIR/$OUTFILE
echo "define invisible = ve ve~ vm vm~ vt vt~ vl vl~" >> $OUTDIR/$OUTFILE
echo "Y" >> $OUTDIR/$OUTFILE
echo "set main.graphic_render = root" >> $OUTDIR/$OUTFILE
echo "plot THT                 40 0 500 [logY]" >> $OUTDIR/$OUTFILE
echo "plot MET                 40 0 500 [logY]" >> $OUTDIR/$OUTFILE
echo "plot SQRTS               40 0 500 [logY]" >> $OUTDIR/$OUTFILE
echo "plot PT(z[1])            40 0 1000 [logY interstate]" >> $OUTDIR/$OUTFILE
echo "plot ETA(z[1])           40 -7 7 [logY interstate]" >> $OUTDIR/$OUTFILE
echo "plot PT(a[1])            40 0 1000 [logY]" >> $OUTDIR/$OUTFILE
echo "plot ETA(a[1])           40 -7 7 [logY]" >> $OUTDIR/$OUTFILE
echo "plot M(z[1] a[1])        40 0 800 [logY allstate]" >> $OUTDIR/$OUTFILE
echo "plot DELTAR(z[1],a[1])   40 0 8 [logY allstate]" >> $OUTDIR/$OUTFILE
echo "plot PT(a[1])            40 0 800 [logY]" >> $OUTDIR/$OUTFILE
echo "plot ETA(a[1])           40 -7 7 [logY]" >> $OUTDIR/$OUTFILE
echo "plot PT(l-[1])           40 0 650 [logY]" >> $OUTDIR/$OUTFILE
echo "plot ETA(l-[1])          40 -7 7 [logY]" >> $OUTDIR/$OUTFILE
echo "plot PT(l+[1])           40 0 650 [logY]" >> $OUTDIR/$OUTFILE
echo "plot ETA(l+[1])          40 -7 7 [logY]" >> $OUTDIR/$OUTFILE
echo "plot M(a[1] l+[1])       40 0 800 [logY ]" >> $OUTDIR/$OUTFILE
echo "plot M(a[1] l-[1])       40 0 800 [logY ]" >> $OUTDIR/$OUTFILE
echo "plot M(a[1] l-[1] l+[1]) 40 0 900 [logY ]" >> $OUTDIR/$OUTFILE
echo "plot M(l-[1] l+[1])      40 20 200 [logY ]" >> $OUTDIR/$OUTFILE
echo "plot DELTAR(a[1],l+[1])  40 0 8 [logY ]" >> $OUTDIR/$OUTFILE
echo "plot DELTAR(a[1],l-[1])  40 0 8 [logY ]" >> $OUTDIR/$OUTFILE
echo "plot DELTAR(l-[1],l+[1]) 40 0 5 [logY ]" >> $OUTDIR/$OUTFILE
echo "submit $MADGRAPHDIR/ntgc_llg_$COUPLING/MA5_PARTON_ANALYSIS_analysis1" >> $OUTDIR/$OUTFILE


ADDHREF_MA="        <td>  <a  id='run_01_tag_1_parton_LHE' href='./Events/run_01/unweighted_events.lhe.gz' onClick=\"check_link('./Events/run_01/unweighted_events.lhe.gz','./Events/run_01/unweighted_events.lhe','run_01_tag_1_parton_LHE')\">LHE</a> <a href=\"./MA5_PARTON_ANALYSIS_analysis1/Output/HTML/MadAnalysis5job_0/index.html\">MA5_report_analysis1</a> </td>"

sed '63d' $OUTMAD/ntgc_llg_$COUPLING/crossx.html > replacement.txt
sed "63i$ADDHREF_MA" replacement.txt > $OUTMAD/ntgc_llg_$COUPLING/crossx.html
#sed "63i$ADDHREF_MA" replacement.txt > replacement.html

rm replacement.txt
