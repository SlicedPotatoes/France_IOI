import sys
def main():
    taille = int(input())
    longueurLigne = list(map(int, input().split()))
    longueurCol = [0] * taille
    value = 0
    count = 0
    index = 0
    for iLig in range(taille):
        v = taille - longueurLigne[iLig]
        if v != value:
            for i in range(v - value):
                longueurCol[index] = count
                index += 1
            value = v
        count += 1
    longueurCol.reverse()
    for i in range(taille):
        sys.stdout.write(str(longueurCol[i]))
        sys.stdout.write(" ")
main()