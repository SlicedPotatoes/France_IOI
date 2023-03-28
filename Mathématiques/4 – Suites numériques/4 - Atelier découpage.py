nbEtape = int(input())
nbBlackTriangle = 1
nbWhiteTriangle = 0
for i in range(nbEtape+1):
    nbWhiteTriangle += round(nbBlackTriangle / 3)
    nbBlackTriangle *= 3
    print(nbWhiteTriangle)