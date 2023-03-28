nbLignes, nbMots = map(int, input().split(" "))
listMot = [""] * (nbLignes*nbMots)
maxLength = 0
for i in range(nbLignes):
    mots = input().split(" ")
    for m in range(len(mots)):
        if len(mots[m]) > maxLength:
            maxLength = len(mots[m])
        listMot[m + i*nbMots] = mots[m]
data = [0] * maxLength
for m in listMot:
    l = len(m)
    data[l-1] += 1
for i in range(len(data)):
    if data[i] != 0:
        print("{} : {}".format(i+1, data[i]))