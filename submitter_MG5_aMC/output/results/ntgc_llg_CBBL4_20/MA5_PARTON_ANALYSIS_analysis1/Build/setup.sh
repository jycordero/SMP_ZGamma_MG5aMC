#!/bin/sh

# Defining colours for shell
GREEN="\\033[1;32m"
RED="\\033[1;31m"
PINK="\\033[1;35m"
BLUE="\\033[1;34m"
YELLOW="\\033[1;33m"
CYAN="\\033[1;36m"
NORMAL="\\033[0;39m"

# Configuring MA5 environment variable
export MA5_BASE=/uscms_data/d3/corderom/Theory/CMSSW_10_2_13/src/SMP_MG5aMC/MG5_aMC_v2_7_2/HEPTools/madanalysis5/madanalysis5

# Configuring PATH environment variable
if [ $PATH ]; then
export PATH=$MA5_BASE/tools/SampleAnalyzer/ExternalSymLink/Bin:/cvmfs/cms.cern.ch/slc6_amd64_gcc700/lcg/root/6.12.07-gnimlf5/bin:$MA5_BASE/tools/fastjet/bin:$PATH
else
export PATH=$MA5_BASE/tools/SampleAnalyzer/ExternalSymLink/Bin:/cvmfs/cms.cern.ch/slc6_amd64_gcc700/lcg/root/6.12.07-gnimlf5/bin:$MA5_BASE/tools/fastjet/bin
fi

# Configuring LD_LIBRARY_PATH environment variable
if [ $LD_LIBRARY_PATH ]; then
export LD_LIBRARY_PATH=$MA5_BASE/tools/SampleAnalyzer/Lib:$MA5_BASE/tools/SampleAnalyzer/ExternalSymLink/Lib:/cvmfs/cms.cern.ch/slc6_amd64_gcc700/lcg/root/6.12.07-gnimlf5/lib:$MA5_BASE/tools/fastjet/lib:$LD_LIBRARY_PATH
else
export LD_LIBRARY_PATH=$MA5_BASE/tools/SampleAnalyzer/Lib:$MA5_BASE/tools/SampleAnalyzer/ExternalSymLink/Lib:/cvmfs/cms.cern.ch/slc6_amd64_gcc700/lcg/root/6.12.07-gnimlf5/lib:$MA5_BASE/tools/fastjet/lib
fi

# Checking that all environment variables are defined
if [[ $MA5_BASE && $PATH && $LD_LIBRARY_PATH ]]; then
echo -e $YELLOW"--------------------------------------------------------"
echo -e "    Your environment is properly configured for MA5     "
echo -e "--------------------------------------------------------"$NORMAL
fi
