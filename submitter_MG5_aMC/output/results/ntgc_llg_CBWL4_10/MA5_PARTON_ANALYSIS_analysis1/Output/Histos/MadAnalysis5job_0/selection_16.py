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
    y17_M_0_weights = numpy.array([0.0,0.0289476894597,0.0096492308199,0.0578953889194,0.0192984596398,0.0385969192796,0.0771938485592,0.0868430783791,0.0868430783791,0.135089197479,0.135089197479,0.221932295858,0.357021593336,0.308775394237,0.318424594057,0.482461590995,0.357021593336,0.299126194417,0.453513891535,0.463163091355,0.607901588654,0.482461590995,0.617550788474,0.685095387213,0.665796887573,0.617550788474,0.559655389554,0.704393886853,0.675446187393,0.685095387213,0.636849288113,0.800886185052,0.800886185052,0.781587685412,0.829833884511,0.800886185052,0.858781583971,0.92632618271,0.714043086673,1.04211698055])

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
