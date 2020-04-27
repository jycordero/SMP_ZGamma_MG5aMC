COUPLING=$1
VALUE=$2
MGDIR=$3
OUTMG=$4
OUTCONF=$5

COUPSET=(CBtWL4 CBWL4 CWWL4 CBBL4)
if [ -z $COUPLING ] ; then
	echo "NTGC_generateMGFiles.sh: first input missing"
elif [ -z $VALUE ] ; then
	echo "NTGC_generateMGFiles.sh: second input missing"
else
	OUTNAME=${COUPLING}_${VALUE}
	OUTFILE=${OUTCONF}/mg5_${OUTNAME}.txt

	PROCESS="p p > z a, z > l- l+"

	################################################################
	echo "# Operationg for MadGraph NTGC" > $OUTFILE
	echo "set lhapdf /cvmfs/cms.cern.ch/slc6_amd64_gcc700/cms/cmssw/CMSSW_10_2_13/external/slc6_amd64_gcc700/bin/lhapdf-config" >> $OUTFILE
	echo "set fastjet $MGDIR/HEPTools/madanalysis5/madanalysis5/tools/fastjet/bin/fastjet-config" >> $OUTFILE
	#echo "set madanalysis-path $MGDIR/HEPTools/madanalysis5/madanalysis5/bin/ma" >> $OUTFILE
	echo "import model NTGC"             >> $OUTFILE
	echo "generate $PROCESS"             >> $OUTFILE
	echo "output ${OUTMG}/ntgc_llg_${OUTNAME}"     >> $OUTFILE
	echo "launch"                        >> $OUTFILE
	echo "	3"                           >> $OUTFILE
	for coupling in ${COUPSET[*]}
	do 
		echo "	set $coupling 0"     >> $OUTFILE
	done	
	echo "	set $COUPLING $VALUE"        >> $OUTFILE
fi
