COUPSEL=$1

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


