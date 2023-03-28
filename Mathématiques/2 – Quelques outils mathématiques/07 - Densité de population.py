from math import *
def aire(rayon):
    return (rayon ** 2) * pi

fInt = int(input())
fExt = int(input())
pop = int(input())

aireI = aire(fInt)
aireE = aire(fExt)
aireQuartier = aireE - aireI
densite = pop / aireQuartier
print(round(densite, 2))