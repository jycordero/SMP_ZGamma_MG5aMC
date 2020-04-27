COUPLING=$1
VALUE=$2
OUTMG=$3
OUTCONF=$4


OUTNAME="${COUPLING}_${VALUE}"
###########################################

echo Formating html output... Start
ADDHREF_MA="        <td>  <a  id='run_01_tag_1_parton_LHE' href='./Events/run_01/unweighted_events.lhe.gz' onClick=\"check_link('./Events/run_01/unweighted_events.lhe.gz','./Events/run_01/unweighted_events.lhe','run_01_tag_1_parton_LHE')\">LHE</a> <a href=\"./MA5_PARTON_ANALYSIS_analysis1/Output/HTML/MadAnalysis5job_0/index.html\">MA5_report_analysis1</a> </td>"

sed '63d' $OUTMG/ntgc_llg_${OUTNAME}/crossx.html > replacement.txt
sed "63i$ADDHREF_MA" replacement.txt > $OUTMG/ntgc_llg_${OUTNAME}/crossx.html

echo Formating html output... Done
rm replacement.txt
