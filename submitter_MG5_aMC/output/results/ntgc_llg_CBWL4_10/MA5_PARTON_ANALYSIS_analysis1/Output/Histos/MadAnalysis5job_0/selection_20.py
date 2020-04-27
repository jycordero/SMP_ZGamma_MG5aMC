def selection_20():

    # Library import
    import numpy
    import matplotlib
    import matplotlib.pyplot   as plt
    import matplotlib.gridspec as gridspec

    # Library version
    matplotlib_version = matplotlib.__version__
    numpy_version      = numpy.__version__

    # Histo binning
    xBinning = numpy.linspace(0.0,8.0,41,endpoint=True)

    # Creating data sequence: middle of each bin
    xData = numpy.array([0.1,0.3,0.5,0.7,0.9,1.1,1.3,1.5,1.7,1.9,2.1,2.3,2.5,2.7,2.9,3.1,3.3,3.5,3.7,3.9,4.1,4.3,4.5,4.7,4.9,5.1,5.3,5.5,5.7,5.9,6.1,6.3,6.5,6.7,6.9,7.1,7.3,7.5,7.7,7.9])

    # Creating weights for histo: y21_DELTAR_0
    y21_DELTAR_0_weights = numpy.array([0.0,0.0,0.0,0.0096492308904,0.0096492308904,0.0096492308904,0.0096492308904,0.0192984597808,0.0096492308904,0.0289476896712,0.0675446192328,0.048246159452,0.192984597808,0.47281229463,3.20354496361,31.3021096445,20.1958397706,11.887849865,8.23079390651,5.63515093599,4.39039995013,3.06845496515,2.19037497512,1.86230197885,1.26404898564,0.800886190903,0.578953893424,0.376319995726,0.270178496931,0.0771938491232,0.135089198466,0.0578953893424,0.0192984597808,0.0192984597808,0.0,0.0,0.0096492308904,0.0192984597808,0.0192984597808,0.0])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8,6),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y21_DELTAR_0_weights,\
             label="$unweighted\_events$", histtype="stepfilled", rwidth=1.0,\
             color="#5954d8", edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, normed=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$\Delta R$ $[ a_{1}, l-_{1} ]$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathcal{L}_{\mathrm{int}} = 10\ \mathrm{fb}^{-1})$ ",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(y21_DELTAR_0_weights).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (y21_DELTAR_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonposx="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonposy="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_20.png')
    plt.savefig('../../PDF/MadAnalysis5job_0/selection_20.png')
    plt.savefig('../../DVI/MadAnalysis5job_0/selection_20.eps')

# Running!
if __name__ == '__main__':
    selection_20()
