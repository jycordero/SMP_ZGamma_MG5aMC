COUPSEL=$1
VALUE=$2
#COUPSEL=$2
#OUTNAME=$1

source /cvmfs/cms.cern.ch/cmsset_default.sh
MADGRAPH=MG5_aMC_v2_7_2

COUPSET=(CBtWL4 CBWL4 CWWL4 CBBL4)
if [ $COUPSEL = 1 ] ; then
	COUPLING=CBtWL4
elif [ $COUPSEL = 2 ] ; then
	COUPLING=CBWL4
elif [ $COUPSEL = 3 ] ; then
	COUPLING=CWWL4
elif [ $COUPSEL = 4 ] ; then
	COUPLING=CBBL4
else
	COUPLING=SMP
	VALUE=0
fi

if [ -z $VALUE ] ; then 
	echo "Value for coupling is requieres as second arg"
fi

TOPDIR=$PWD

OUTNAME=${COUPLING}_${VALUE}
OUTEXA=output/examples
OUTDIR=output/scripts
OUTLOG=output/log
OUTMAD=output/results

MGPATH=$TOPDIR/../$MADGRAPH
MAPATH=$MGPATH/HEPTools/madanalysis5/madanalysis5
################################################################
echo /n============================
echo Running the MadGraph code
./NTGC_generateMGFiles.sh $COUPLING $VALUE $MGPATH $TOPDIR/$OUTMAD $TOPDIR/$OUTDIR

echo MadGraph Files... Done
echo MadGraph... Start
eval `$MGPATH/bin/mg5_aMC $OUTDIR/mg5_${OUTNAME}.txt > $OUTLOG/mg_${OUTNAME}.log`

echo MadGraph... Done

################################################################
#echo /n============================
#echo Formating run_Card output... Start
#sleep 1
#./NTGC_generateRunCard.sh $COUPLING $VALUE $TOPDIR/$OUTMAD $TOPDIR/$OUTEXA 
#
#echo Formating run_Card output... Done


#################################################################
echo /n============================
echo Running the MadAnalysis code
./NTGC_generateMAFiles.sh $COUPLING $VALUE $MGPATH $TOPDIR/$OUTMAD $TOPDIR/$OUTDIR

echo MadAnalysis Files... Done
echo MadAnalysis... Start
eval `$MAPATH/bin/ma5 $OUTDIR/ma5_${OUTNAME}.txt > $OUTLOG/ma_${OUTNAME}.log`
echo MadAnalysis... Done

###############################################################
echo /n============================
echo Formating html output... Start
sleep 1
./NTGC_modifyHTML.sh $COUPLING $VALUE $TOPDIR/$OUTMAD $TOPDIR/$OUTDIR

echo Formating html output... Done

