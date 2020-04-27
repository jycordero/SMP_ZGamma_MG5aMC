def selection_4():

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

    # Creating weights for histo: y5_ETA_0
    y5_ETA_0_weights = numpy.array([0.0,0.0,0.0,0.0,0.67209926669,0.22403312223,0.44806614446,0.44806614446,2.91243028899,4.25662842237,5.82486057798,13.8900513783,23.7475123564,45.9267845571,68.1060567579,116.273211537,150.326214916,199.613519807,245.316224342,250.469024853,247.556524564,229.185822741,199.613519807,164.664316339,100.814910004,71.9146271358,43.4624243126,25.5397725342,16.3544116228,8.51325784474,2.46436424453,1.34419813338,0.22403312223,0.0,0.22403312223,0.0,0.0,0.0,0.0,0.0])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8,6),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y5_ETA_0_weights,\
             label="$unweighted\_events$", histtype="stepfilled", rwidth=1.0,\
             color="#5954d8", edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, normed=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$\eta$ $[ z_{1} ]$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathcal{L}_{\mathrm{int}} = 10\ \mathrm{fb}^{-1})$ ",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(y5_ETA_0_weights).max()*1.1
    #ymin=0 # linear scale
    ymin=min([x for x in (y5_ETA_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonposx="clip")

    # Log/Linear scale for Y-axis
    #plt.gca().set_yscale("linear")
    plt.gca().set_yscale("log",nonposy="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_4.png')
    plt.savefig('../../PDF/MadAnalysis5job_0/selection_4.png')
    plt.savefig('../../DVI/MadAnalysis5job_0/selection_4.eps')

# Running!
if __name__ == '__main__':
    selection_4()
