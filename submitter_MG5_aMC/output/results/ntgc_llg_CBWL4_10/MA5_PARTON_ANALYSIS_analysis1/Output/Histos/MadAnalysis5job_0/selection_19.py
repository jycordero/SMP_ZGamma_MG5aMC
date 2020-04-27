def selection_19():

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

    # Creating weights for histo: y20_DELTAR_0
    y20_DELTAR_0_weights = numpy.array([0.0,0.0,0.0,0.0,0.0096492305013,0.0,0.0,0.0096492305013,0.0096492305013,0.0192984590026,0.0385969180052,0.144738492519,0.212283089029,0.617550768083,2.92371684889,31.2731583837,20.3888289462,11.6369693986,8.02815958508,6.02111968881,4.34215377559,3.11670183892,2.27721888231,1.75615990924,1.26404893467,0.733341562099,0.656147666088,0.337723082546,0.154387692021,0.22193228853,0.106141494514,0.0578953870078,0.0192984590026,0.0385969180052,0.0385969180052,0.0096492305013,0.0,0.0,0.0096492305013,0.0096492305013])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8,6),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y20_DELTAR_0_weights,\
             label="$unweighted\_events$", histtype="stepfilled", rwidth=1.0,\
             color="#5954d8", edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, normed=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$\Delta R$ $[ a_{1}, l+_{1} ]$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathcal{L}_{\mathrm{int}} = 10\ \mathrm{fb}^{-1})$ ",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(y20_DELTAR_0_weights).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (y20_DELTAR_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonposx="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonposy="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_19.png')
    plt.savefig('../../PDF/MadAnalysis5job_0/selection_19.png')
    plt.savefig('../../DVI/MadAnalysis5job_0/selection_19.eps')

# Running!
if __name__ == '__main__':
    selection_19()
