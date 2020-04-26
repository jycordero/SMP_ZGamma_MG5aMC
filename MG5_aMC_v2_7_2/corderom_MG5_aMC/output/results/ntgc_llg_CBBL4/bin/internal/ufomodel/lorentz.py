# This file was automatically created by FeynRules 2.4.55
# Mathematica version: 10.1.0  for Mac OS X x86 (64-bit) (March 24, 2015)
# Date: Tue 31 Jan 2017 12:52:07


from object_library import all_lorentz, Lorentz

from function_library import complexconjugate, re, im, csc, sec, acsc, asec, cot
try:
   import form_factors as ForFac 
except ImportError:
   pass


UUV1 = Lorentz(name = 'UUV1',
               spins = [ -1, -1, 3 ],
               structure = 'P(3,2) + P(3,3)')

SSS1 = Lorentz(name = 'SSS1',
               spins = [ 1, 1, 1 ],
               structure = '1')

FFS1 = Lorentz(name = 'FFS1',
               spins = [ 2, 2, 1 ],
               structure = 'ProjM(2,1) + ProjP(2,1)')

FFV1 = Lorentz(name = 'FFV1',
               spins = [ 2, 2, 3 ],
               structure = 'Gamma(3,2,1)')

FFV2 = Lorentz(name = 'FFV2',
               spins = [ 2, 2, 3 ],
               structure = 'Gamma(3,2,-1)*ProjM(-1,1)')

FFV3 = Lorentz(name = 'FFV3',
               spins = [ 2, 2, 3 ],
               structure = 'Gamma(3,2,-1)*ProjP(-1,1)')

VVS1 = Lorentz(name = 'VVS1',
               spins = [ 3, 3, 1 ],
               structure = '-(Epsilon(1,2,-2,-3)*P(-3,2)*P(-2,3)*P(-1,1)*P(-1,3)) - Epsilon(2,-1,-2,-3)*P(-3,2)*P(-2,3)*P(-1,1)*P(1,3)')

VVS2 = Lorentz(name = 'VVS2',
               spins = [ 3, 3, 1 ],
               structure = 'Epsilon(1,2,-2,-3)*P(-3,2)*P(-2,3)*P(-1,1)*P(-1,3) - Epsilon(2,-1,-2,-3)*P(-3,2)*P(-2,1)*P(-1,3)*P(1,3)')

VVS3 = Lorentz(name = 'VVS3',
               spins = [ 3, 3, 1 ],
               structure = 'Epsilon(1,2,-2,-3)*P(-3,2)*P(-2,3)*P(-1,1)*P(-1,3) - Epsilon(1,2,-2,-3)*P(-3,1)*P(-2,3)*P(-1,2)*P(-1,3) - Epsilon(2,-1,-2,-3)*P(-3,2)*P(-2,1)*P(-1,3)*P(1,3) + Epsilon(1,-1,-2,-3)*P(-3,2)*P(-2,1)*P(-1,3)*P(2,3)')

VVS4 = Lorentz(name = 'VVS4',
               spins = [ 3, 3, 1 ],
               structure = 'Epsilon(1,2,-2,-3)*P(-3,3)*P(-2,1)*P(-1,2)*P(-1,3) - Epsilon(1,-1,-2,-3)*P(-3,2)*P(-2,3)*P(-1,1)*P(2,3)')

VVS5 = Lorentz(name = 'VVS5',
               spins = [ 3, 3, 1 ],
               structure = '-(Epsilon(1,2,-2,-3)*P(-3,3)*P(-2,2)*P(-1,1)*P(-1,3)) + Epsilon(1,2,-2,-3)*P(-3,3)*P(-2,1)*P(-1,2)*P(-1,3) - Epsilon(2,-1,-2,-3)*P(-3,3)*P(-2,2)*P(-1,1)*P(1,3) + Epsilon(1,-1,-2,-3)*P(-3,3)*P(-2,2)*P(-1,1)*P(2,3)')

VVS6 = Lorentz(name = 'VVS6',
               spins = [ 3, 3, 1 ],
               structure = 'Metric(1,2)')

VVS7 = Lorentz(name = 'VVS7',
               spins = [ 3, 3, 1 ],
               structure = '-(P(-1,2)*P(-1,3)*P(1,3)*P(2,1)) - P(-1,1)*P(-1,3)*P(1,2)*P(2,3) + P(-1,1)*P(-1,2)*P(1,3)*P(2,3) + P(-2,2)*P(-2,3)*P(-1,1)*P(-1,3)*Metric(1,2)')

VVV1 = Lorentz(name = 'VVV1',
               spins = [ 3, 3, 3 ],
               structure = 'Epsilon(1,3,-1,-2)*P(-2,2)*P(-1,1)*P(2,3) + Epsilon(1,2,-1,-2)*P(-2,3)*P(-1,1)*P(3,2)')

VVV2 = Lorentz(name = 'VVV2',
               spins = [ 3, 3, 3 ],
               structure = 'Epsilon(2,3,-1,-2)*P(-2,3)*P(-1,1)*P(1,2) + Epsilon(1,3,-1,-2)*P(-2,3)*P(-1,2)*P(2,1)')

VVV3 = Lorentz(name = 'VVV3',
               spins = [ 3, 3, 3 ],
               structure = 'Epsilon(2,3,-1,-2)*P(-2,3)*P(-1,1)*P(1,2) - Epsilon(2,3,-1,-2)*P(-2,2)*P(-1,1)*P(1,3) + Epsilon(1,3,-1,-2)*P(-2,3)*P(-1,2)*P(2,1) + Epsilon(1,3,-1,-2)*P(-2,2)*P(-1,1)*P(2,3) - Epsilon(1,2,-1,-2)*P(-2,3)*P(-1,2)*P(3,1) + Epsilon(1,2,-1,-2)*P(-2,3)*P(-1,1)*P(3,2)')

VVV4 = Lorentz(name = 'VVV4',
               spins = [ 3, 3, 3 ],
               structure = 'P(1,2)*P(2,3)*P(3,1) + P(1,3)*P(2,1)*P(3,2) - P(-1,1)*P(-1,3)*P(3,2)*Metric(1,2) - P(-1,1)*P(-1,2)*P(2,3)*Metric(1,3)')

VVV5 = Lorentz(name = 'VVV5',
               spins = [ 3, 3, 3 ],
               structure = '-(Epsilon(1,2,3,-2)*P(-2,3)*P(-1,1)*P(-1,2)) + Epsilon(1,2,3,-2)*P(-2,2)*P(-1,1)*P(-1,3) + Epsilon(2,3,-1,-2)*P(-2,3)*P(-1,1)*P(1,2) - Epsilon(2,3,-1,-2)*P(-2,2)*P(-1,1)*P(1,3) + Epsilon(1,3,-1,-2)*P(-2,3)*P(-1,2)*P(2,1) - Epsilon(1,2,-1,-2)*P(-2,3)*P(-1,2)*P(3,1) + Epsilon(3,-1,-2,-3)*P(-3,3)*P(-2,2)*P(-1,1)*Metric(1,2) - Epsilon(2,-1,-2,-3)*P(-3,3)*P(-2,2)*P(-1,1)*Metric(1,3)')

VVV6 = Lorentz(name = 'VVV6',
               spins = [ 3, 3, 3 ],
               structure = '-(Epsilon(1,2,3,-2)*P(-2,3)*P(-1,1)*P(-1,2)) + Epsilon(1,2,3,-2)*P(-2,2)*P(-1,1)*P(-1,3) + Epsilon(2,3,-1,-2)*P(-2,3)*P(-1,1)*P(1,2) - Epsilon(2,3,-1,-2)*P(-2,2)*P(-1,1)*P(1,3) + Epsilon(1,3,-1,-2)*P(-2,3)*P(-1,2)*P(2,1) - 2*Epsilon(1,3,-1,-2)*P(-2,2)*P(-1,1)*P(2,3) - Epsilon(1,2,-1,-2)*P(-2,3)*P(-1,2)*P(3,1) - 2*Epsilon(1,2,-1,-2)*P(-2,3)*P(-1,1)*P(3,2) + Epsilon(3,-1,-2,-3)*P(-3,3)*P(-2,2)*P(-1,1)*Metric(1,2) - Epsilon(2,-1,-2,-3)*P(-3,3)*P(-2,2)*P(-1,1)*Metric(1,3)')

VVV7 = Lorentz(name = 'VVV7',
               spins = [ 3, 3, 3 ],
               structure = 'P(3,1)*Metric(1,2) - P(3,2)*Metric(1,2) - P(2,1)*Metric(1,3) + P(2,3)*Metric(1,3) + P(1,2)*Metric(2,3) - P(1,3)*Metric(2,3)')

VVV8 = Lorentz(name = 'VVV8',
               spins = [ 3, 3, 3 ],
               structure = 'P(1,2)*P(2,3)*P(3,1) + P(1,3)*P(2,1)*P(3,2) - P(-1,2)*P(-1,3)*P(2,1)*Metric(1,3) - P(-1,1)*P(-1,3)*P(1,2)*Metric(2,3)')

VVV9 = Lorentz(name = 'VVV9',
               spins = [ 3, 3, 3 ],
               structure = 'P(1,2)*P(2,3)*P(3,1) + P(1,3)*P(2,1)*P(3,2) - (P(-1,2)*P(-1,3)*P(3,1)*Metric(1,2))/3. - (P(-1,1)*P(-1,3)*P(3,2)*Metric(1,2))/3. - (P(-1,2)*P(-1,3)*P(2,1)*Metric(1,3))/3. - (P(-1,1)*P(-1,2)*P(2,3)*Metric(1,3))/3. - (P(-1,1)*P(-1,3)*P(1,2)*Metric(2,3))/3. - (P(-1,1)*P(-1,2)*P(1,3)*Metric(2,3))/3.')

VVV10 = Lorentz(name = 'VVV10',
                spins = [ 3, 3, 3 ],
                structure = 'P(1,2)*P(2,3)*P(3,1) + P(1,3)*P(2,1)*P(3,2) - P(-1,2)*P(-1,3)*P(3,1)*Metric(1,2) - P(-1,1)*P(-1,3)*P(3,2)*Metric(1,2) + P(-1,2)*P(-1,3)*P(2,1)*Metric(1,3) - P(-1,1)*P(-1,2)*P(2,3)*Metric(1,3) + P(-1,1)*P(-1,3)*P(1,2)*Metric(2,3) - P(-1,1)*P(-1,2)*P(1,3)*Metric(2,3)')

VVV11 = Lorentz(name = 'VVV11',
                spins = [ 3, 3, 3 ],
                structure = '-(Epsilon(1,2,3,-2)*P(-2,2)*P(-1,1)*P(-1,3)) + Epsilon(1,2,3,-2)*P(-2,1)*P(-1,2)*P(-1,3) + Epsilon(2,3,-1,-2)*P(-2,2)*P(-1,1)*P(1,3) - Epsilon(1,3,-1,-2)*P(-2,2)*P(-1,1)*P(2,3) + Epsilon(1,2,-1,-2)*P(-2,3)*P(-1,2)*P(3,1) - Epsilon(1,2,-1,-2)*P(-2,3)*P(-1,1)*P(3,2) + Epsilon(2,-1,-2,-3)*P(-3,3)*P(-2,2)*P(-1,1)*Metric(1,3) - Epsilon(1,-1,-2,-3)*P(-3,3)*P(-2,2)*P(-1,1)*Metric(2,3)')

SSSS1 = Lorentz(name = 'SSSS1',
                spins = [ 1, 1, 1, 1 ],
                structure = '1')

VVSS1 = Lorentz(name = 'VVSS1',
                spins = [ 3, 3, 1, 1 ],
                structure = 'Metric(1,2)')

VVVV1 = Lorentz(name = 'VVVV1',
                spins = [ 3, 3, 3, 3 ],
                structure = 'Metric(1,4)*Metric(2,3) - Metric(1,3)*Metric(2,4)')

VVVV2 = Lorentz(name = 'VVVV2',
                spins = [ 3, 3, 3, 3 ],
                structure = 'Metric(1,4)*Metric(2,3) + Metric(1,3)*Metric(2,4) - 2*Metric(1,2)*Metric(3,4)')

VVVV3 = Lorentz(name = 'VVVV3',
                spins = [ 3, 3, 3, 3 ],
                structure = 'Metric(1,4)*Metric(2,3) - Metric(1,2)*Metric(3,4)')

VVVV4 = Lorentz(name = 'VVVV4',
                spins = [ 3, 3, 3, 3 ],
                structure = 'Metric(1,3)*Metric(2,4) - Metric(1,2)*Metric(3,4)')

VVVV5 = Lorentz(name = 'VVVV5',
                spins = [ 3, 3, 3, 3 ],
                structure = 'Metric(1,4)*Metric(2,3) - (Metric(1,3)*Metric(2,4))/2. - (Metric(1,2)*Metric(3,4))/2.')

