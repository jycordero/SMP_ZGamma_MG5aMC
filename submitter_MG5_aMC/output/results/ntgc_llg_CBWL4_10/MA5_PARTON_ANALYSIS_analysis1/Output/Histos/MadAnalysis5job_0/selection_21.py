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
    y22_DELTAR_0_weights = numpy.array([11.4439907529,35.1232023107,20.2826813343,11.2413507395,6.10796340183,3.76320024757,2.20002514473,1.53422810093,1.13860907491,0.839483155228,0.530707734914,0.46316313047,0.308775420314,0.328073921583,0.24123081587,0.144738509522,0.192984612696,0.0868430857132,0.0868430857132,0.0578953938088,0.0771938550784,0.0385969225392,0.0385969225392,0.0289476919044,0.048246163174,0.0385969225392,0.048246163174,0.0,0.0192984612696,0.0192984612696,0.0,0.0096492316348,0.0,0.0096492316348,0.0,0.0,0.0,0.0,0.0,0.0])

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
