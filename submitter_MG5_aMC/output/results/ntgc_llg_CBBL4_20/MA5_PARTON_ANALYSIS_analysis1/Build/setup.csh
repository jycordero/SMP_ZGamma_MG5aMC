#!/bin/csh -f

# Defining colours for shell
set GREEN  = "\033[1;32m"
set RED    = "\033[1;31m"
set PINK   = "\033[1;35m"
set BLUE   = "\033[1;34m"
set YELLOW = "\033[1;33m"
set CYAN   = "\033[1;36m"
set NORMAL = "\033[0;39m"

# Configuring MA5 environment variable
setenv MA5_BASE /uscms_data/d3/corderom/Theory/CMSSW_10_2_13/src/SMP_MG5aMC/MG5_aMC_v2_7_2/HEPTools/madanalysis5/madanalysis5

# Configuring PATH environment variable
if ( $?PATH ) then
setenv PATH $MA5_BASE/tools/SampleAnalyzer/ExternalSymLink/Bin:/cvmfs/cms.cern.ch/slc6_amd64_gcc700/lcg/root/6.12.07-gnimlf5/bin:$MA5_BASE/tools/fastjet/bin:"$PATH"
else
setenv PATH $MA5_BASE/tools/SampleAnalyzer/ExternalSymLink/Bin:/cvmfs/cms.cern.ch/slc6_amd64_gcc700/lcg/root/6.12.07-gnimlf5/bin:$MA5_BASE/tools/fastjet/bin
endif

# Configuring LD_LIBRARY_PATH environment variable
if ( $?LD_LIBRARY_PATH ) then
setenv LD_LIBRARY_PATH $MA5_BASE/tools/SampleAnalyzer/Lib:$MA5_BASE/tools/SampleAnalyzer/ExternalSymLink/Lib:/cvmfs/cms.cern.ch/slc6_amd64_gcc700/lcg/root/6.12.07-gnimlf5/lib:$MA5_BASE/tools/fastjet/lib:"$LD_LIBRARY_PATH"
else
setenv LD_LIBRARY_PATH $MA5_BASE/tools/SampleAnalyzer/Lib:$MA5_BASE/tools/SampleAnalyzer/ExternalSymLink/Lib:/cvmfs/cms.cern.ch/slc6_amd64_gcc700/lcg/root/6.12.07-gnimlf5/lib:$MA5_BASE/tools/fastjet/lib
endif

# Checking that all environment variables are defined
if ( $?MA5_BASE && $?PATH && $?LD_LIBRARY_PATH ) then
echo $YELLOW"--------------------------------------------------------"
echo "    Your environment is properly configured for MA5     "
echo "--------------------------------------------------------"$NORMAL
endif
