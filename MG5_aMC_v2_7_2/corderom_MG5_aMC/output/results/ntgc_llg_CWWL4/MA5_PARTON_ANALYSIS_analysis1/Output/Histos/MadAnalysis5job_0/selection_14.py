def selection_14():

    # Library import
    import numpy
    import matplotlib
    import matplotlib.pyplot   as plt
    import matplotlib.gridspec as gridspec

    # Library version
    matplotlib_version = matplotlib.__version__
    numpy_version      = numpy.__version__

    # Histo binning
    xBinning = numpy.linspace(-7.0,7.0,41,endpoint=True)

    # Creating data sequence: middle of each bin
    xData = numpy.array([-6.825,-6.475,-6.125,-5.775,-5.425,-5.075,-4.725,-4.375,-4.025,-3.675,-3.325,-2.975,-2.625,-2.275,-1.925,-1.575,-1.225,-0.875,-0.525,-0.175,0.175,0.525,0.875,1.225,1.575,1.925,2.275,2.625,2.975,3.325,3.675,4.025,4.375,4.725,5.075,5.425,5.775,6.125,6.475,6.825])

    # Creating weights for histo: y15_ETA_0
    y15_ETA_0_weights = numpy.array([0.0,0.0,0.0,0.0,0.0007916922563,0.0,0.00039584612815,0.00039584612815,0.0039584612815,0.00514599936595,0.0130629209289,0.0257300018298,0.0506683036032,0.0831276859115,0.124691508867,0.192381213681,0.267196119001,0.356657325363,0.398617028347,0.445722731697,0.464723333048,0.426326230318,0.35942822556,0.269967019198,0.180901712865,0.123899808811,0.0771899954893,0.0407721528995,0.0221673815764,0.0138546109852,0.0047501533378,0.00277092319705,0.0015833841126,0.00118753808445,0.0,0.0,0.0,0.00039584612815,0.0,0.0])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8,6),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y15_ETA_0_weights,\
             label="$unweighted\_events$", histtype="stepfilled", rwidth=1.0,\
             color="#5954d8", edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, normed=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$\eta$ $[ l+_{1} ]$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathcal{L}_{\mathrm{int}} = 10\ \mathrm{fb}^{-1})$ ",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(y15_ETA_0_weights).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (y15_ETA_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonposx="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonposy="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_14.png')
    plt.savefig('../../PDF/MadAnalysis5job_0/selection_14.png')
    plt.savefig('../../DVI/MadAnalysis5job_0/selection_14.eps')

# Running!
if __name__ == '__main__':
    selection_14()
