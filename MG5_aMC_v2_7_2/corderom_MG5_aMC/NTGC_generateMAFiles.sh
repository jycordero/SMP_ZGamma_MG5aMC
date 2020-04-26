COUPLING=$1
VALUE=$2
OUTMG=$3
OUTCONF=$4

COUPSET=(CBtWL4 CBWL4 CWWL4 CBBL4)
if [ -z $COUPSEL ] ; then 
	echo "NTGC_generateMAFiles.sh: first input missing"
elif [ -z $VALUE ] ; then
	echo "NTGC_generateMAFiles.sh: second input missing"
else
	OUTNAME=${COUPLING}_${VALUE}
	OUTFILE=$OUTCONF/ma5_${OUTNAME}.txt
	#################################################################

	MAOUT=$OUTMG/ntgc_llg_${OUTNAME}/MA5_PARTON_ANALYSIS_analysis1

	if [ -d $MAOUT ]; then
		rm -r $MAOUT
	fi

	echo "# Operation for MadAnalysis NTGC" > $OUTFILE
	echo "import /home/jcordero/CMS/Theory/MG5_aMC_v2_7_2//bin/internal/ufomodel" >> $OUTFILE
	echo "import $OUTMG/ntgc_llg_${OUTNAME}/Events/run_01/unweighted_events.lhe.gz as unweighted_events" >> $OUTFILE

	#echo "define vl = 12 14 16" >> $OUTDIR/$OUTFILE
	#echo "define vl~ = -16 -14 -12" >> $OUTDIR/$OUTFILE
	#echo "define invisible = ve ve~ vm vm~ vt vt~ vl vl~" >> $OUTDIR/$OUTFILE
	echo "set main.graphic_render = root"                       >> $OUTFILE
	echo "plot THT                 40 0 500 [logY]"             >> $OUTFILE
	echo "plot MET                 40 0 500 [logY]"             >> $OUTFILE
	echo "plot SQRTS               40 0 500 [logY]"             >> $OUTFILE
	echo "plot PT(z[1])            40 0 1000 [logY interstate]" >> $OUTFILE
	echo "plot ETA(z[1])           40 -7 7 [logY interstate]"   >> $OUTFILE
	echo "plot PT(a[1])            40 0 1000 [logY]"            >> $OUTFILE
	echo "plot ETA(a[1])           40 -7 7 [logY]"              >> $OUTFILE
	echo "plot M(z[1] a[1])        40 0 800 [logY allstate]"    >> $OUTFILE
	echo "plot DELTAR(z[1],a[1])   40 0 8 [logY allstate]"      >> $OUTFILE
	echo "plot PT(a[1])            40 0 800 [logY]"             >> $OUTFILE
	echo "plot ETA(a[1])           40 -7 7 [logY]"              >> $OUTFILE
	echo "plot PT(l-[1])           40 0 650 [logY]"             >> $OUTFILE
	echo "plot ETA(l-[1])          40 -7 7 [logY]"              >> $OUTFILE
	echo "plot PT(l+[1])           40 0 650 [logY]"             >> $OUTFILE
	echo "plot ETA(l+[1])          40 -7 7 [logY]"              >> $OUTFILE
	echo "plot M(a[1] l+[1])       40 0 800 [logY ]"            >> $OUTFILE
	echo "plot M(a[1] l-[1])       40 0 800 [logY ]"            >> $OUTFILE
	echo "plot M(a[1] l-[1] l+[1]) 40 0 900 [logY ]"            >> $OUTFILE
	echo "plot M(l-[1] l+[1])      40 20 200 [logY ]"           >> $OUTFILE
	echo "plot DELTAR(a[1],l+[1])  40 0 8 [logY ]"              >> $OUTFILE
	echo "plot DELTAR(a[1],l-[1])  40 0 8 [logY ]"              >> $OUTFILE
	echo "plot DELTAR(l-[1],l+[1]) 40 0 5 [logY ]"              >> $OUTFILE
	echo "submit $MAOUT"                                        >> $OUTFILE
	echo "exit"                                                 >> $OUTFILE
	echo "exit"                                                 >> $OUTFILE
	echo "exit"                                                 >> $OUTFILE
fi
