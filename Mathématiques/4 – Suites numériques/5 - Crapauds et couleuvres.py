nbCrapauds = int(input())
nbCouleuvres = int(input())
nbAnnees = int(input())
for i in range(nbAnnees):
    print(nbCrapauds, nbCouleuvres, sep=" ")
    tempCrapaud = 3*nbCrapauds-2*nbCouleuvres
    nbCouleuvres = nbCrapauds - nbCouleuvres
    nbCrapauds = tempCrapaud