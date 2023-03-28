def main():
    nbLignes, nbColonnes = map(int, input().split(' '))
    nbRectangles = int(input())
    grid = [ ['.' for _ in range(nbColonnes)] for _ in range(nbLignes) ]
    for a in range(nbRectangles):
        iLig1, iCol1, iLig2, iCol2, couleur = input().split(' ')
        iLig1, iCol1, iLig2, iCol2 = map(int, [iLig1, iCol1, iLig2, iCol2])
        difILig = iLig2 - iLig1 + 1
        difICol = iCol2 - iCol1 + 1
        for i in range(difILig):
            for j in range(difICol):
                grid[iLig1 + i][iCol1 + j] = couleur
    for row in grid:
        print("".join(row))
main()