def selection_12():

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

    # Creating weights for histo: y13_ETA_0
    y13_ETA_0_weights = numpy.array([9.30819992,9.30819992,23.2704998,51.19509956,41.88689964,158.23939864,153.58529868,363.01979688,549.18379528,740.00189364,1037.86399108,1298.49398884,1466.0409874,1829.06098428,2052.45798236,2448.05697896,2620.25797748,2541.13897816,2783.15197608,2922.77497488,2843.65497556,2792.459976,2601.64197764,2420.1319792,2313.08798012,2085.03698208,1894.21898372,1745.286985,1428.80898772,991.32329148,823.77569292,581.762495,428.17719632,190.81809836,121.00659896,88.42789924,32.57869972,23.2704998,9.30819992,9.30819992])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8,6),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y13_ETA_0_weights,\
             label="$unweighted\_events$", histtype="stepfilled", rwidth=1.0,\
             color="#5954d8", edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, normed=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$\eta$ $[ l-_{1} ]$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathcal{L}_{\mathrm{int}} = 10\ \mathrm{fb}^{-1})$ ",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(y13_ETA_0_weights).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (y13_ETA_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonposx="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonposy="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_12.png')
    plt.savefig('../../PDF/MadAnalysis5job_0/selection_12.png')
    plt.savefig('../../DVI/MadAnalysis5job_0/selection_12.eps')

# Running!
if __name__ == '__main__':
    selection_12()
