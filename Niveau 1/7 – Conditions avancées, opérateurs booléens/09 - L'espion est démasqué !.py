nbPersonne = int(input())
for i in range(nbPersonne):
    taille = int(input())
    age = int(input())
    poids = int(input())
    aCheval = int(input())
    isBruns = int(input())
    prob = 0
    if 178 <= taille <= 182:
        prob += 1
    if age >= 34:
        prob += 1
    if poids < 70:
        prob += 1
    if aCheval == 0:
        prob += 1
    if isBruns == 1:
        prob += 1
    if prob == 5:
        print("Très probable")
    elif 3 <= prob <= 4:
        print("Probable")
    elif prob == 0:
        print("Impossible")
    else:
        print("Peu probable")