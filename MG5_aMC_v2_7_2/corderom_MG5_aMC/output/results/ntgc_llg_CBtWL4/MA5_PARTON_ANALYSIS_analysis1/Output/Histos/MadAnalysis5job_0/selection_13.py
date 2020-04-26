def selection_13():

    # Library import
    import numpy
    import matplotlib
    import matplotlib.pyplot   as plt
    import matplotlib.gridspec as gridspec

    # Library version
    matplotlib_version = matplotlib.__version__
    numpy_version      = numpy.__version__

    # Histo binning
    xBinning = numpy.linspace(0.0,650.0,41,endpoint=True)

    # Creating data sequence: middle of each bin
    xData = numpy.array([8.125,24.375,40.625,56.875,73.125,89.375,105.625,121.875,138.125,154.375,170.625,186.875,203.125,219.375,235.625,251.875,268.125,284.375,300.625,316.875,333.125,349.375,365.625,381.875,398.125,414.375,430.625,446.875,463.125,479.375,495.625,511.875,528.125,544.375,560.625,576.875,593.125,609.375,625.625,641.875])

    # Creating weights for histo: y14_PT_0
    y14_PT_0_weights = numpy.array([0.2393839215,0.5511396495,0.8962978805,1.091145098,1.414035127,1.514242136,1.33609612,1.503108135,1.313828118,1.5754801415,1.55877914,1.5309431375,1.4864071335,1.6422851475,1.4307361285,1.44743713,1.5086751355,1.2191881095,1.347230121,1.1969191075,1.1746511055,1.0967120985,1.0633100955,1.035474093,1.046609094,1.0299070925,0.9853708885,0.901864881,0.8962978805,0.924133183,0.8072247725,0.7960906715,0.857328377,0.823925974,0.5734079515,0.6290786565,0.590109153,0.5734079515,0.5511396495,0.6290786565])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8,6),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y14_PT_0_weights,\
             label="$unweighted\_events$", histtype="stepfilled", rwidth=1.0,\
             color="#5954d8", edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, normed=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$p_{T}$ $[ l+_{1} ]$ $(GeV/c)$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathcal{L}_{\mathrm{int}} = 10\ \mathrm{fb}^{-1})$ ",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(y14_PT_0_weights).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (y14_PT_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonposx="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonposy="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_13.png')
    plt.savefig('../../PDF/MadAnalysis5job_0/selection_13.png')
    plt.savefig('../../DVI/MadAnalysis5job_0/selection_13.eps')

# Running!
if __name__ == '__main__':
    selection_13()
