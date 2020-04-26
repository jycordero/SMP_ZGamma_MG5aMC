def selection_21():

    # Library import
    import numpy
    import matplotlib
    import matplotlib.pyplot   as plt
    import matplotlib.gridspec as gridspec

    # Library version
    matplotlib_version = matplotlib.__version__
    numpy_version      = numpy.__version__

    # Histo binning
    xBinning = numpy.linspace(0.0,5.0,41,endpoint=True)

    # Creating data sequence: middle of each bin
    xData = numpy.array([0.0625,0.1875,0.3125,0.4375,0.5625,0.6875,0.8125,0.9375,1.0625,1.1875,1.3125,1.4375,1.5625,1.6875,1.8125,1.9375,2.0625,2.1875,2.3125,2.4375,2.5625,2.6875,2.8125,2.9375,3.0625,3.1875,3.3125,3.4375,3.5625,3.6875,3.8125,3.9375,4.0625,4.1875,4.3125,4.4375,4.5625,4.6875,4.8125,4.9375])

    # Creating weights for histo: y22_DELTAR_0
    y22_DELTAR_0_weights = numpy.array([0.0,0.0,0.0,4.65410008,23.2705004,9.30820016,18.61640032,27.92460048,23.2705004,74.46560128,74.46560128,65.15740112,116.352502,121.00660208,186.1640032,209.4345036,283.90010488,437.48540752,553.83790952,874.97081504,1270.56902184,2019.87903472,3555.73206112,6422.6581104,7125.42712248,5310.32809128,3667.43106304,2899.50404984,2080.38303576,1666.16802864,1293.84002224,1075.09701848,865.66261488,758.61831304,628.3035108,521.25920896,423.52310728,302.5165052,321.13290552,255.9755044])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8,6),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y22_DELTAR_0_weights,\
             label="$unweighted\_events$", histtype="stepfilled", rwidth=1.0,\
             color="#5954d8", edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, normed=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$\Delta R$ $[ l-_{1}, l+_{1} ]$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathcal{L}_{\mathrm{int}} = 10\ \mathrm{fb}^{-1})$ ",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(y22_DELTAR_0_weights).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (y22_DELTAR_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonposx="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonposy="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_21.png')
    plt.savefig('../../PDF/MadAnalysis5job_0/selection_21.png')
    plt.savefig('../../DVI/MadAnalysis5job_0/selection_21.eps')

# Running!
if __name__ == '__main__':
    selection_21()
