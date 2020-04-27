def selection_18():

    # Library import
    import numpy
    import matplotlib
    import matplotlib.pyplot   as plt
    import matplotlib.gridspec as gridspec

    # Library version
    matplotlib_version = matplotlib.__version__
    numpy_version      = numpy.__version__

    # Histo binning
    xBinning = numpy.linspace(20.0,200.0,41,endpoint=True)

    # Creating data sequence: middle of each bin
    xData = numpy.array([22.25,26.75,31.25,35.75,40.25,44.75,49.25,53.75,58.25,62.75,67.25,71.75,76.25,80.75,85.25,89.75,94.25,98.75,103.25,107.75,112.25,116.75,121.25,125.75,130.25,134.75,139.25,143.75,148.25,152.75,157.25,161.75,166.25,170.75,175.25,179.75,184.25,188.75,193.25,197.75])

    # Creating weights for histo: y19_M_0
    y19_M_0_weights = numpy.array([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.067544619706,0.164036899286,0.19298459916,0.279827698782,0.443864598068,0.858781596262,1.85265199194,5.85708297451,56.4383497543,24.132729895,3.29038798568,1.18685499483,0.569304597522,0.453513898026,0.366670798404,0.173686199244,0.164036899286,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8,6),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y19_M_0_weights,\
             label="$unweighted\_events$", histtype="stepfilled", rwidth=1.0,\
             color="#5954d8", edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, normed=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$M$ $[ l+_{1} l-_{1} ]$ $(GeV/c^{2})$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathcal{L}_{\mathrm{int}} = 10\ \mathrm{fb}^{-1})$ ",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(y19_M_0_weights).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (y19_M_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonposx="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonposy="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_18.png')
    plt.savefig('../../PDF/MadAnalysis5job_0/selection_18.png')
    plt.savefig('../../DVI/MadAnalysis5job_0/selection_18.eps')

# Running!
if __name__ == '__main__':
    selection_18()
