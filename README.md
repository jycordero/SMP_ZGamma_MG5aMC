# SMP_ZGamma_MG5aMC

This is code developed to run the MG5_aMC generatos for ZGamma production with the purpose of studying nTGC.

This folder(`cordero_MG5_aMC`) should be located on the main Madgraph directory, same level as bin

# Structure 
```
corderom_MG5_aMC/
|
|->NTGC_generateMGFiles.sh (dependancy)
| 
|->NTGC_generateMAFiles.sh (dependancy)
|
|->NTGC_modifyHTML.sh (dependancy)
|
|->NTGC_SingleRun.sh ("master" code)
|
|->NTGC_generateFiles.sh ( generates MA and MG, should be superceded by the first three )
|
|-> output/
      |
      |-> exmaples/ ( reference files for the proper format on the MA and MG operation files 
      |
      |-> scripts/ ( contains the input to ./bin/mg5_amc )
      |
      |-> log/ ( logs for MA files )
      |
      |-> results/ 
```

# Excecutables 

## NTGC_SingleRun.sh
-----
Wraps all modules and sets paths for input and output

```./NTGC_generateMGFiles.sh $1 $2```
  * __$1__ = number that indicates the coupling to use
     * {1,2,3,4} = {CBtWL4, CBWL4, CWWL4, CBBL4}
  * __$2__ = value to assign to the coupling constant indicated in __$1__

## NTGC_generateMGFiles.sh
-----
Generates the process definition and changes the coupling for the nTGC model

```./NTGC_generateMGFiles.sh $1 $2 $3 $4```
  * __$1__ = number that indicates the coupling to use
     * {1,2,3,4} = {CBtWL4, CBWL4, CWWL4, CBBL4}
  * __$2__ = value to assign to the coupling constant indicated in __$1__
  * __$3__ = output path for madgraph 
  * __$4__ = path to store the configuration files generated 
   
## NTGC_generateMAFiles.sh
-----
Generates the graphing parameters 

```./NTGC_generateMAFiles.sh $1 $2 $3 $4```
  * __$1__ = number that indicates the coupling to use
     * {1,2,3,4} = {CBtWL4, CBWL4, CWWL4, CBBL4} 
  * __$2__ = value to assign to the coupling constant indicated in __$1__
  * __$3__ = output path for madgraph 
  * __$4__ = path to store the configuration files generated 

## NTGC_modifyHTML.sh
-----
Modifies the output files to have the proper HTML format to access the display after running the code from the command line

```./NTGC_generateMAFiles.sh $1```
  * __$1__ = number that indicates the coupling to use
     * {1,2,3,4} = {CBtWL4, CBWL4, CWWL4, CBBL4} 
