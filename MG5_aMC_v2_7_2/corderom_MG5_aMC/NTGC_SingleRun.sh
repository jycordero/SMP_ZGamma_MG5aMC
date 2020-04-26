COUPSEL=$1
VALUE=$2
#COUPSEL=$2
#OUTNAME=$1

COUPSET=(CBtWL4 CBWL4 CWWL4 CBBL4)
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
	VALUE=0
fi

if [ -z $VALUE ] ; then 
	echo "Value for coupling is requieres as second arg"
fi

TOPDIR=$PWD

OUTNAME=${COUPLING}_${VALUE}
OUTDIR=output/scripts
OUTLOG=output/log
OUTMAD=output/results

MGPATH=$TOPDIR/..
MAPATH=$MGPATH/HEPTools/madanalysis5/madanalysis5
################################################################
echo Running the MadGraph code
./NTGC_generateMGFiles.sh $COUPLING $VALUE $TOPDIR/$OUTMAD $TOPDIR/$OUTDIR

echo MadGraph Files... Done
echo MadGraph... Start
source `$MGPATH/bin/mg5_aMC $OUTDIR/mg5_${OUTNAME}.txt > $OUTLOG/mg_${OUTNAME}.log`

echo MadGraph... Done
#################################################################
echo Running the MadAnalysis code
./NTGC_generateMAFiles.sh $COUPLING $VALUE  $TOPDIR/$OUTMAD $TOPDIR/$OUTDIR

echo MadAnalysis Files... Done
echo MadAnalysis... Start
source `$MAPATH/bin/ma5 $OUTDIR/ma5_${OUTNAME}.txt > $OUTLOG/ma_${OUTNAME}.log`
echo MadAnalysis... Done
###############################################################

./NTGC_modifyHTML.sh $COUPSEL

echo Formating html output... Start
ADDHREF_MA="        <td>  <a  id='run_01_tag_1_parton_LHE' href='./Events/run_01/unweighted_events.lhe.gz' onClick=\"check_link('./Events/run_01/unweighted_events.lhe.gz','./Events/run_01/unweighted_events.lhe','run_01_tag_1_parton_LHE')\">LHE</a> <a href=\"./MA5_PARTON_ANALYSIS_analysis1/Output/HTML/MadAnalysis5job_0/index.html\">MA5_report_analysis1</a> </td>"

sed '63d' $OUTMAD/ntgc_llg_$COUPLING/crossx.html > replacement.txt
sed "63i$ADDHREF_MA" replacement.txt > $OUTMAD/ntgc_llg_$COUPLING/crossx.html

echo Formating html output... Done
rm replacement.txt
