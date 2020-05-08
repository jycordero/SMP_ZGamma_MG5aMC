COUPLING=$1
VALUE=$2
MGDIR=$3
OUTMG=$4
OUTCONF=$5

COUPSET=(CBtWL4 CBWL4 CWWL4 CBBL4)
if [ -z $COUPLING ] ; then 
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
	echo "import $OUTMG/ntgc_llg_${OUTNAME}/bin/internal/ufomodel" >> $OUTFILE
	echo "import $OUTMG/ntgc_llg_${OUTNAME}/Events/run_01/unweighted_events.lhe.gz as unweighted_events" >> $OUTFILE
	echo "set main.graphic_render = root"                        >> $OUTFILE
	echo "plot THT                 50 0 500 [logY]"              >> $OUTFILE
	echo "plot MET                 50 0 500 [logY]"              >> $OUTFILE
	echo "plot SQRTS               50 0 500 [logY]"              >> $OUTFILE
	echo "plot PT(z[1])            100 0 1000 [logY interstate]" >> $OUTFILE
	echo "plot ETA(z[1])           40 -7 7 [logY interstate]"    >> $OUTFILE
	echo "plot PT(a[1])            100 0 1000 [logY]"            >> $OUTFILE
	echo "plot ETA(a[1])           40 -7 7 [logY]"               >> $OUTFILE
	echo "plot M(z[1] a[1])        80 0 800 [logY allstate]"     >> $OUTFILE
	echo "plot DELTAR(z[1],a[1])   40 0 8 [logY allstate]"       >> $OUTFILE
	echo "plot PT(a[1])            80 0 800 [logY]"              >> $OUTFILE
	echo "plot ETA(a[1])           40 -7 7 [logY]"               >> $OUTFILE
	echo "plot PT(l-[1])           650 0 650 [logY]"             >> $OUTFILE
	echo "plot ETA(l-[1])          40 -7 7 [logY]"               >> $OUTFILE
	echo "plot PT(l+[1])           40 0 650 [logY]"              >> $OUTFILE
	echo "plot ETA(l+[1])          40 -7 7 [logY]"               >> $OUTFILE
	echo "plot M(a[1] l+[1])       80 0 800 [logY ]"             >> $OUTFILE
	echo "plot M(a[1] l-[1])       80 0 800 [logY ]"             >> $OUTFILE
	echo "plot M(a[1] l-[1] l+[1]) 900 0 900 [logY ]"            >> $OUTFILE
	echo "plot M(l-[1] l+[1])      20 20 200 [logY ]"            >> $OUTFILE
	echo "plot DELTAR(a[1],l+[1])  40 0 8 [logY ]"               >> $OUTFILE
	echo "plot DELTAR(a[1],l-[1])  40 0 8 [logY ]"               >> $OUTFILE
	echo "plot DELTAR(l-[1],l+[1]) 40 0 5 [logY ]"               >> $OUTFILE
	echo "submit $MAOUT"                                         >> $OUTFILE
	echo "exit"                                                  >> $OUTFILE
	echo "exit"                                                  >> $OUTFILE
	echo "exit"                                                  >> $OUTFILE
fi
