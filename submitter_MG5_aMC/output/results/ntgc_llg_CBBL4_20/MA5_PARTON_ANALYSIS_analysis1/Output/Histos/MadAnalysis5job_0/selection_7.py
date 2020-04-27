def selection_7():

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

    # Creating weights for histo: y8_M_0
    y8_M_0_weights = numpy.array([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.22403310554,0.22403310554,0.0,0.44806611108,0.44806611108,0.67209921662,1.56823203878,2.2403310554,1.1201650277,2.68839706648,1.56823203878,1.56823203878,3.58452908864,4.4806611108,2.2403310554,3.80856209418,3.13646307756,6.04889314958,5.15276112742,4.03259509972,5.15276112742,5.82486014404,4.03259509972,6.49695916066,6.27292615512,5.6008271385,8.9613232216,8.9613232216,7.8411581939,6.49695916066,9.18535622714,8.28922420498,6.7209921662])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8,6),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y8_M_0_weights,\
             label="$unweighted\_events$", histtype="stepfilled", rwidth=1.0,\
             color="#5954d8", edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, normed=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$M$ $[ a_{1} z_{1} ]$ $(GeV/c^{2})$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathcal{L}_{\mathrm{int}} = 10\ \mathrm{fb}^{-1})$ ",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(y8_M_0_weights).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (y8_M_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonposx="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonposy="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_7.png')
    plt.savefig('../../PDF/MadAnalysis5job_0/selection_7.png')
    plt.savefig('../../DVI/MadAnalysis5job_0/selection_7.eps')

# Running!
if __name__ == '__main__':
    selection_7()
