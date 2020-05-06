COUPLING=$1
VALUE=$2
OUTMG=$3
INPUT=$4

OUTNAME=ntgc_llg_${COUPLING}_${VALUE}

INCARD=${INPUT}/run_card.dat
RUNCARD=${OUTMG}/${OUTNAME}/Cards/run_card.dat

#eval `${INCARD} > ${RUNCARD}`
cat ${INCARD} > ${RUNCARD}


