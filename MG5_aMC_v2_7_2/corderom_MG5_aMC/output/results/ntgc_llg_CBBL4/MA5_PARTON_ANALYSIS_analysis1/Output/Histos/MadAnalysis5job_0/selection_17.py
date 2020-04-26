def selection_17():

    # Library import
    import numpy
    import matplotlib
    import matplotlib.pyplot   as plt
    import matplotlib.gridspec as gridspec

    # Library version
    matplotlib_version = matplotlib.__version__
    numpy_version      = numpy.__version__

    # Histo binning
    xBinning = numpy.linspace(0.0,900.0,41,endpoint=True)

    # Creating data sequence: middle of each bin
    xData = numpy.array([11.25,33.75,56.25,78.75,101.25,123.75,146.25,168.75,191.25,213.75,236.25,258.75,281.25,303.75,326.25,348.75,371.25,393.75,416.25,438.75,461.25,483.75,506.25,528.75,551.25,573.75,596.25,618.75,641.25,663.75,686.25,708.75,731.25,753.75,776.25,798.75,821.25,843.75,866.25,888.75])

    # Creating weights for histo: y18_M_0
    y18_M_0_weights = numpy.array([0.0,0.0,0.0,0.0,0.0,0.0,0.0089615436494,0.0089615436494,0.0,0.0179230912988,0.0179230912988,0.044807713247,0.107538507793,0.044807713247,0.116500108442,0.0806538858446,0.0716923451952,0.170269312339,0.188192413637,0.134423109741,0.134423109741,0.188192413637,0.286769420781,0.188192413637,0.241961617534,0.241961617534,0.179230912988,0.286769420781,0.277807820131,0.367423226625,0.421192530522,0.349500225327,0.358461725976,0.331577124028,0.412231029872,0.349500225327,0.474961834418,0.421192530522,0.528731038315,0.403269429223])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8,6),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y18_M_0_weights,\
             label="$unweighted\_events$", histtype="stepfilled", rwidth=1.0,\
             color="#5954d8", edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, normed=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$M$ $[ a_{1} l+_{1} l-_{1} ]$ $(GeV/c^{2})$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathcal{L}_{\mathrm{int}} = 10\ \mathrm{fb}^{-1})$ ",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(y18_M_0_weights).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (y18_M_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonposx="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonposy="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_17.png')
    plt.savefig('../../PDF/MadAnalysis5job_0/selection_17.png')
    plt.savefig('../../DVI/MadAnalysis5job_0/selection_17.eps')

# Running!
if __name__ == '__main__':
    selection_17()
