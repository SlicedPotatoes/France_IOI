nbPierreMax = int(input())
hauteur = 0
nbPierre = 0
while (hauteur+1)**2+nbPierre <= nbPierreMax:
    hauteur += 1
    nbPierre += hauteur * hauteur
print(hauteur)
print(nbPierre)