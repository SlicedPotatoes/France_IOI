import sys

def main():
    nbLignes, nbCol = map(int, input().split(' '))
    grid = []
    for _ in range(nbLignes):
        line = list(map(int, sys.stdin.readline().split(' ')))
        grid.append(line)
    maxSquare = 1 if grid[0][0] == 0 else 0
    dp = [[0] * nbCol for _ in range(nbLignes)]
    for i in range(nbLignes):
        for j in range(nbCol):
            if i == 0 or j == 0:
                dp[i][j] = 1 if grid[i][j] == 0 else 0
            elif grid[i][j] == 1:
                dp[i][j] = 0
            else:
                caseValue = min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]) + 1
                dp[i][j] = caseValue
                if caseValue > maxSquare:
                    maxSquare = caseValue

    for i in range(nbLignes):
        for j in range(nbCol):
            print(dp[i][j], end="")
        print()
    print(maxSquare)

main()
