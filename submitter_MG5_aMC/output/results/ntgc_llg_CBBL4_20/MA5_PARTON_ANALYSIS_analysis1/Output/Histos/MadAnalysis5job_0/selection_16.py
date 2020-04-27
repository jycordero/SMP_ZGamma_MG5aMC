def selection_16():

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

    # Creating weights for histo: y17_M_0
    y17_M_0_weights = numpy.array([0.0,0.0,0.0,0.896132475,0.67209933125,1.3441982625,1.79226535,2.688397525,2.46436448125,4.9287289625,6.49696026875,7.84115953125,7.1690594,7.1690594,8.5132586625,8.73729170625,7.1690594,10.9776221438,10.5295520562,8.065192575,12.0977923625,12.54585245,14.7861828875,16.8024832813,15.0102229313,11.4256922313,14.3381228,18.3707135875,18.1466835438,14.5621528438,19.4908838063,17.026513325,15.0102229313,18.3707135875,21.5071742,20.3870139813,16.3544131937,15.9063531063,17.6986134562,23.29944455])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8,6),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y17_M_0_weights,\
             label="$unweighted\_events$", histtype="stepfilled", rwidth=1.0,\
             color="#5954d8", edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, normed=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$M$ $[ a_{1} l-_{1} ]$ $(GeV/c^{2})$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathcal{L}_{\mathrm{int}} = 10\ \mathrm{fb}^{-1})$ ",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(y17_M_0_weights).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (y17_M_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonposx="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonposy="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_16.png')
    plt.savefig('../../PDF/MadAnalysis5job_0/selection_16.png')
    plt.savefig('../../DVI/MadAnalysis5job_0/selection_16.eps')

# Running!
if __name__ == '__main__':
    selection_16()
