def main():
    n = int(input())
    grid = [0] * n
    b = True
    nbMagic = 0
    for i in range(n): #Remplis la grille, en profite pour calculé le "nombre magique" et vérifié chaque row
        grid[i] = list(map(int, input().split(" ")))
        if nbMagic == 0: nbMagic = sum(grid[i])
        elif nbMagic != sum(grid[i]): b = False
    for col in range(n): #Vérifie chaque colone
        s = 0
        for row in range(n): s += grid[row][col]
        if s != nbMagic: b = False
    sDiag1 = 0
    sDiag2 = 0
    for i in range(n): #Vérifie les diagonales
        sDiag1 += grid[i][i]
        sDiag2 += grid[i][n-i-1]
    if not(sDiag1 == sDiag2 == nbMagic):
        b = False
    for nb in range(n ** 2): #Vérifie si tout les nombres de 1 a n ** 2 se trouve dans la grille
      nbInGrid = False
      for i in grid:
        if nb+1 in i: nbInGrid = True
      if not(nbInGrid): b = False
    if b: print('yes')
    else: print('no')
main()