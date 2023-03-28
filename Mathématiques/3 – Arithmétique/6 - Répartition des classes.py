from math import *
nbEleve = int(input())
nbClass = int(input())
nbEleveMoy = nbEleve / nbClass

for i in range(nbClass):
    if nbEleveMoy % 2 != 0:
        print(ceil(nbEleveMoy))
        nbEleve -= ceil(nbEleveMoy)
    else:
        print(floor(nbEleveMoy))
        nbEleve -= nbEleveMoy
    nbClass -= 1
    if nbClass != 0:
        nbEleveMoy = nbEleve / nbClass
