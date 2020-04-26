def selection_11():

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

    # Creating weights for histo: y12_PT_0
    y12_PT_0_weights = numpy.array([0.25051801755,0.66248104641,0.8350600585,1.26372408853,1.00763907059,1.30269409126,1.56434610959,1.3917670975,1.58661411115,1.54764510842,1.51424210608,1.38063309672,1.70909011973,1.34166309399,1.53651010764,1.41960209945,1.2804250897,1.32496209282,1.31382809204,1.27485808931,1.113413078,0.99650506981,1.02990707215,1.01320607098,1.07444407527,1.03547407254,0.97980386864,1.17465108229,0.90186486318,0.80165765616,0.8907307624,0.72928585109,0.76825525382,0.74041995187,0.76268825343,0.81279185694,0.65134684563,0.76268825343,0.64021274485,0.55113963861])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8,6),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y12_PT_0_weights,\
             label="$unweighted\_events$", histtype="stepfilled", rwidth=1.0,\
             color="#5954d8", edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, normed=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$p_{T}$ $[ l-_{1} ]$ $(GeV/c)$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathcal{L}_{\mathrm{int}} = 10\ \mathrm{fb}^{-1})$ ",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(y12_PT_0_weights).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (y12_PT_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonposx="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonposy="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_11.png')
    plt.savefig('../../PDF/MadAnalysis5job_0/selection_11.png')
    plt.savefig('../../DVI/MadAnalysis5job_0/selection_11.eps')

# Running!
if __name__ == '__main__':
    selection_11()
