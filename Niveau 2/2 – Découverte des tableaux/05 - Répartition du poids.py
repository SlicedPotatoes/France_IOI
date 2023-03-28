nbCharettes = int(input())
totalPoids = 0
charettes = [0] * nbCharettes
for i in range(nbCharettes):
    poids = float(input())
    charettes[i] = poids
    totalPoids += poids
moyenne = totalPoids / nbCharettes
for charette in charettes:
    print(moyenne - charette)