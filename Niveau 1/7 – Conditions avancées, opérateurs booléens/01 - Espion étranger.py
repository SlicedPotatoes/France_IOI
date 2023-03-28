dDebut = int(input())
dFin = int(input())
nbEntree = int(input())
possibleEspion = 0
for i in range(nbEntree):
    d = int(input())
    if dDebut <= d <= dFin:
        possibleEspion += 1
print(possibleEspion)