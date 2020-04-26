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
    y21_DELTAR_0_weights = numpy.array([0.0,0.0,0.0,0.001543875139,0.001543875139,0.001543875139,0.001543875139,0.003087750278,0.001543875139,0.004631625417,0.010807120973,0.007719375695,0.03087750278,0.075649876811,0.512566546148,5.00833045092,3.23133029093,1.90205417125,1.31692511857,0.901623081176,0.702463163245,0.490952244202,0.350459631553,0.297967926827,0.202247618209,0.128141611537,0.09263250834,0.060211125421,0.043228503892,0.012351001112,0.021614251946,0.009263250834,0.003087750278,0.003087750278,0.0,0.0,0.001543875139,0.003087750278,0.003087750278,0.0])

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
