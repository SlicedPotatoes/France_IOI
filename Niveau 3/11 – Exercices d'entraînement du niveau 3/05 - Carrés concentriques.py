def main():
    n = int(input())
    word = list(input())
    grid = [["0" for _ in range(n * 2 - 1)] for _ in range(n * 2 - 1)]

    c = n
    while c != 0:
        c-=1
        diffC = ((n-c) * 2) - 1
        for i in range(diffC):
            grid[c][c+(i*1)] = word[n-c-1]
        for i in range(diffC):
            grid[n+n-c-2][c+(i*1)] = word[n-c-1]
        for i in range(diffC):
            grid[c+(i*1)][c] = word[n-c-1]
        for i in range(diffC):
            grid[c+(i*1)][n+n-c-2] = word[n-c-1]
        
    for i in range(n*2-1):
        print("".join(grid[i]))
        
            
main()