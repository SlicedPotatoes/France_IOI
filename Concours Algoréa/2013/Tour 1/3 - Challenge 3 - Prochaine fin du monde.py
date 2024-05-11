def main():
    nbPropheties = int(input())
    propheties = []
    maxIndice1 = 0
    minIndice2 = 10000
    for i in range(nbPropheties):
        indice1, indice2 = map(int, input().split())
        propheties.append((indice1, indice2))
        if indice1 > maxIndice1 and indice1 <= minIndice2:
            maxIndice1 = indice1
        if indice2 < minIndice2 and indice2 >= maxIndice1:
            minIndice2 = indice2
    for i in range(nbPropheties):
        p1, p2 = propheties[i]
        if p1 > minIndice2:
            print(0)
            break
        elif p2 < maxIndice1:
            print(0)
            break
    else:
        print(minIndice2 - maxIndice1 + 1)

main()
