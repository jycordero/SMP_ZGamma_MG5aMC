# This file was automatically created by FeynRules 2.4.55
# Mathematica version: 10.1.0  for Mac OS X x86 (64-bit) (March 24, 2015)
# Date: Tue 31 Jan 2017 12:52:07


from object_library import all_couplings, Coupling

from function_library import complexconjugate, re, im, csc, sec, acsc, asec, cot



GC_1 = Coupling(name = 'GC_1',
                value = '-(ee*complex(0,1))/3.',
                order = {'QED':1})

GC_2 = Coupling(name = 'GC_2',
                value = '(2*ee*complex(0,1))/3.',
                order = {'QED':1})

GC_3 = Coupling(name = 'GC_3',
                value = '-(ee*complex(0,1))',
                order = {'QED':1})

GC_4 = Coupling(name = 'GC_4',
                value = 'ee*complex(0,1)',
                order = {'QED':1})

GC_5 = Coupling(name = 'GC_5',
                value = 'ee**2*complex(0,1)',
                order = {'QED':2})

GC_6 = Coupling(name = 'GC_6',
                value = '-G',
                order = {'QCD':1})

GC_7 = Coupling(name = 'GC_7',
                value = 'complex(0,1)*G',
                order = {'QCD':1})

GC_8 = Coupling(name = 'GC_8',
                value = 'complex(0,1)*G**2',
                order = {'QCD':2})

GC_9 = Coupling(name = 'GC_9',
                value = '-6*complex(0,1)*lam',
                order = {'QED':2})

GC_10 = Coupling(name = 'GC_10',
                 value = '(ee**2*complex(0,1))/(2.*sw**2)',
                 order = {'QED':2})

GC_11 = Coupling(name = 'GC_11',
                 value = '-((ee**2*complex(0,1))/sw**2)',
                 order = {'QED':2})

GC_12 = Coupling(name = 'GC_12',
                 value = '(cw**2*ee**2*complex(0,1))/sw**2',
                 order = {'QED':2})

GC_13 = Coupling(name = 'GC_13',
                 value = '(ee*complex(0,1))/(sw*cmath.sqrt(2))',
                 order = {'QED':1})

GC_14 = Coupling(name = 'GC_14',
                 value = '(cw*ee*complex(0,1))/sw',
                 order = {'QED':1})

GC_15 = Coupling(name = 'GC_15',
                 value = '(-2*cw*ee**2*complex(0,1))/sw',
                 order = {'QED':2})

GC_16 = Coupling(name = 'GC_16',
                 value = '(ee*complex(0,1)*sw)/(3.*cw)',
                 order = {'QED':1})

GC_17 = Coupling(name = 'GC_17',
                 value = '(-2*ee*complex(0,1)*sw)/(3.*cw)',
                 order = {'QED':1})

GC_18 = Coupling(name = 'GC_18',
                 value = '(ee*complex(0,1)*sw)/cw',
                 order = {'QED':1})

GC_19 = Coupling(name = 'GC_19',
                 value = '-(cw*ee*complex(0,1))/(2.*sw) - (ee*complex(0,1)*sw)/(6.*cw)',
                 order = {'QED':1})

GC_20 = Coupling(name = 'GC_20',
                 value = '(cw*ee*complex(0,1))/(2.*sw) - (ee*complex(0,1)*sw)/(6.*cw)',
                 order = {'QED':1})

GC_21 = Coupling(name = 'GC_21',
                 value = '-(cw*ee*complex(0,1))/(2.*sw) + (ee*complex(0,1)*sw)/(2.*cw)',
                 order = {'QED':1})

GC_22 = Coupling(name = 'GC_22',
                 value = '(cw*ee*complex(0,1))/(2.*sw) + (ee*complex(0,1)*sw)/(2.*cw)',
                 order = {'QED':1})

GC_23 = Coupling(name = 'GC_23',
                 value = 'ee**2*complex(0,1) + (cw**2*ee**2*complex(0,1))/(2.*sw**2) + (ee**2*complex(0,1)*sw**2)/(2.*cw**2)',
                 order = {'QED':2})

GC_24 = Coupling(name = 'GC_24',
                 value = '(CBtWL4*cw*complex(0,1)*vev)/5.e11',
                 order = {'NP':1})

GC_25 = Coupling(name = 'GC_25',
                 value = '-(CBWL4*cw*complex(0,1)*vev)/1.e12',
                 order = {'NP':1})

GC_26 = Coupling(name = 'GC_26',
                 value = '(CBtWL4*cw**2*complex(0,1)*vev)/5.e11',
                 order = {'NP':1})

GC_27 = Coupling(name = 'GC_27',
                 value = '(CWWL4*complex(0,1)*vev)/1.e12',
                 order = {'NP':1})

GC_28 = Coupling(name = 'GC_28',
                 value = '-6*complex(0,1)*lam*vev',
                 order = {'QED':1})

GC_29 = Coupling(name = 'GC_29',
                 value = '(ee**2*complex(0,1)*vev)/(2.*sw**2)',
                 order = {'QED':1})

GC_30 = Coupling(name = 'GC_30',
                 value = '-(CBtWL4*complex(0,1)*sw*vev)/5.e11',
                 order = {'NP':1})

GC_31 = Coupling(name = 'GC_31',
                 value = '(CBWL4*complex(0,1)*sw*vev)/1.e12',
                 order = {'NP':1})

GC_32 = Coupling(name = 'GC_32',
                 value = '-(CBtWL4*cw*complex(0,1)*sw*vev)/5.e11',
                 order = {'NP':1})

GC_33 = Coupling(name = 'GC_33',
                 value = '(CBtWL4*cw*complex(0,1)*sw*vev)/5.e11',
                 order = {'NP':1})

GC_34 = Coupling(name = 'GC_34',
                 value = '(CBtWL4*complex(0,1)*sw**2*vev)/5.e11',
                 order = {'NP':1})

GC_35 = Coupling(name = 'GC_35',
                 value = '-(CBtWL4*ee*vev**2)/1.e12',
                 order = {'NP':1})

GC_36 = Coupling(name = 'GC_36',
                 value = '-(CBWL4*ee*vev**2)/2.e12',
                 order = {'NP':1})

GC_37 = Coupling(name = 'GC_37',
                 value = '(CBtWL4*cw*ee*vev**2)/(1.e12*sw)',
                 order = {'NP':1})

GC_38 = Coupling(name = 'GC_38',
                 value = '(CBWL4*cw*ee*vev**2)/(2.e12*sw)',
                 order = {'NP':1})

GC_39 = Coupling(name = 'GC_39',
                 value = '(CBtWL4*cw**3*ee*vev**2)/(1.e12*sw)',
                 order = {'NP':1})

GC_40 = Coupling(name = 'GC_40',
                 value = '-(CBtWL4*cw*ee*sw*vev**2)/2.e12',
                 order = {'NP':1})

GC_41 = Coupling(name = 'GC_41',
                 value = '-(CBtWL4*ee*sw**3*vev**2)/(2.e12*cw)',
                 order = {'NP':1})

GC_42 = Coupling(name = 'GC_42',
                 value = '(cw**2*CWWL4*complex(0,1)*vev)/1.e12 + (CBWL4*cw*complex(0,1)*sw*vev)/5.e11 + (CBBL4*complex(0,1)*sw**2*vev)/2.5e11',
                 order = {'NP':1})

GC_43 = Coupling(name = 'GC_43',
                 value = '-(CBWL4*cw**2*complex(0,1)*vev)/1.e12 - (CBBL4*cw*complex(0,1)*sw*vev)/2.5e11 + (cw*CWWL4*complex(0,1)*sw*vev)/1.e12 + (CBWL4*complex(0,1)*sw**2*vev)/1.e12',
                 order = {'NP':1})

GC_44 = Coupling(name = 'GC_44',
                 value = '(CBBL4*cw**2*complex(0,1)*vev)/2.5e11 - (CBWL4*cw*complex(0,1)*sw*vev)/5.e11 + (CWWL4*complex(0,1)*sw**2*vev)/1.e12',
                 order = {'NP':1})

GC_45 = Coupling(name = 'GC_45',
                 value = 'ee**2*complex(0,1)*vev + (cw**2*ee**2*complex(0,1)*vev)/(2.*sw**2) + (ee**2*complex(0,1)*sw**2*vev)/(2.*cw**2)',
                 order = {'QED':1})

GC_46 = Coupling(name = 'GC_46',
                 value = '-(cw*CWWL4*ee*vev**2)/(4.e12*sw) - (CWWL4*ee*sw*vev**2)/(4.e12*cw)',
                 order = {'NP':1})

GC_47 = Coupling(name = 'GC_47',
                 value = '-(CBtWL4*cw**2*ee*vev**2)/1.e12 - (CBtWL4*ee*sw**2*vev**2)/1.e12',
                 order = {'NP':1})

GC_48 = Coupling(name = 'GC_48',
                 value = '-(CBtWL4*cw**2*ee*vev**2)/2.e12 - (CBtWL4*ee*sw**2*vev**2)/2.e12',
                 order = {'NP':1})

GC_49 = Coupling(name = 'GC_49',
                 value = '(-3*CBWL4*cw**2*ee*vev**2)/2.e12 - (3*cw**3*CWWL4*ee*vev**2)/(4.e12*sw) - (3*CBBL4*cw*ee*sw*vev**2)/1.e12 - (3*cw*CWWL4*ee*sw*vev**2)/4.e12 - (3*CBWL4*ee*sw**2*vev**2)/2.e12 - (3*CBBL4*ee*sw**3*vev**2)/(1.e12*cw)',
                 order = {'NP':1})

GC_50 = Coupling(name = 'GC_50',
                 value = '(CBBL4*cw**2*ee*vev**2)/5.e11 - (cw**2*CWWL4*ee*vev**2)/2.e12 + (CBWL4*cw**3*ee*vev**2)/(2.e12*sw) + (CBBL4*ee*sw**2*vev**2)/5.e11 - (CWWL4*ee*sw**2*vev**2)/2.e12 - (CBWL4*ee*sw**3*vev**2)/(2.e12*cw)',
                 order = {'NP':1})

GC_51 = Coupling(name = 'GC_51',
                 value = '(CBWL4*cw**2*ee*vev**2)/2.e12 - (CBBL4*cw**3*ee*vev**2)/(1.e12*sw) - (CBBL4*cw*ee*sw*vev**2)/1.e12 - (cw*CWWL4*ee*sw*vev**2)/4.e12 + (CBWL4*ee*sw**2*vev**2)/2.e12 - (CWWL4*ee*sw**3*vev**2)/(4.e12*cw)',
                 order = {'NP':1})

GC_52 = Coupling(name = 'GC_52',
                 value = '-((complex(0,1)*yb)/cmath.sqrt(2))',
                 order = {'QED':1})

GC_53 = Coupling(name = 'GC_53',
                 value = '-((complex(0,1)*yt)/cmath.sqrt(2))',
                 order = {'QED':1})

GC_54 = Coupling(name = 'GC_54',
                 value = '-((complex(0,1)*ytau)/cmath.sqrt(2))',
                 order = {'QED':1})

