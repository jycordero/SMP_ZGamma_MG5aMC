MGPATH=/home/jcordero/CMS/Theory/MG5_aMC_v2_7_2/bin
MAPATH=/home/jcordero/CMS/Theory/MG5_aMC_v2_7_2/HEPTools/madanalysis5/madanalysis5


#MGINPATH=
#MAINPATH=
for i in {1..4} do 
	./NTGC_generateFiles.sh {i}
	.$MGPATH/mg5_amc 
done

