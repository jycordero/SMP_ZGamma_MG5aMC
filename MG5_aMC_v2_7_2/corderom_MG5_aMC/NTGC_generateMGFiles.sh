COUPLING=$1
VALUE=$2
OUTMG=$3
OUTCONF=$4

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
