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
    y12_PT_0_weights = numpy.array([12.993921624,26.659943332,36.96546462,42.342255292,43.910485488,60.48893756,64.297498036,52.64777658,60.040867504,62.72926784,61.6090977,60.712967588,53.991976748,56.008277,54.216006776,54.88810686,54.440046804,51.079546384,44.582585572,51.751646468,46.822915852,47.04695588,47.495015936,46.598885824,39.429824928,39.429824928,35.397234424,34.053034256,36.741424592,36.293364536,38.981754872,35.173194396,28.676233584,31.588663948,32.708834088,30.020433752,24.195573024,30.468503808,23.747512968,22.179272772])

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
