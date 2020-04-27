def selection_9():

    # Library import
    import numpy
    import matplotlib
    import matplotlib.pyplot   as plt
    import matplotlib.gridspec as gridspec

    # Library version
    matplotlib_version = matplotlib.__version__
    numpy_version      = numpy.__version__

    # Histo binning
    xBinning = numpy.linspace(0.0,800.0,41,endpoint=True)

    # Creating data sequence: middle of each bin
    xData = numpy.array([10.0,30.0,50.0,70.0,90.0,110.0,130.0,150.0,170.0,190.0,210.0,230.0,250.0,270.0,290.0,310.0,330.0,350.0,370.0,390.0,410.0,430.0,450.0,470.0,490.0,510.0,530.0,550.0,570.0,590.0,610.0,630.0,650.0,670.0,690.0,710.0,730.0,750.0,770.0,790.0])

    # Creating weights for histo: y10_PT_0
    y10_PT_0_weights = numpy.array([0.0,1.7922656096,2.6883979144,4.7046966002,8.0651937432,10.9776237338,12.9939244196,13.2179544958,19.4908866294,21.9552474676,19.2668465532,23.2994479248,25.763808763,24.8676784582,30.4685103632,31.1406105918,33.8290015062,37.8616028778,34.9491718872,30.244470287,35.1732019634,39.6538634874,32.0367408966,34.0530415824,36.5174024206,35.1732019634,37.4135327254,34.0530415824,31.8127108204,45.0306653162,37.1895026492,34.0530415824,36.7414324968,33.3809413538,38.7577331826,36.5174024206,34.9491718872,32.9328712014,35.845302192,30.244470287])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8,6),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y10_PT_0_weights,\
             label="$unweighted\_events$", histtype="stepfilled", rwidth=1.0,\
             color="#5954d8", edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, normed=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$p_{T}$ $[ a_{1} ]$ $(GeV/c)$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathcal{L}_{\mathrm{int}} = 10\ \mathrm{fb}^{-1})$ ",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(y10_PT_0_weights).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (y10_PT_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonposx="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonposy="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_9.png')
    plt.savefig('../../PDF/MadAnalysis5job_0/selection_9.png')
    plt.savefig('../../DVI/MadAnalysis5job_0/selection_9.eps')

# Running!
if __name__ == '__main__':
    selection_9()
