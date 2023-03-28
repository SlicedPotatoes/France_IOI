import sys

def main():
    ligne, col, distance = map(int, input().split())
    grid = [list(map(int, sys.stdin.readline().split())) for _ in range(ligne)]
    checkHelper = [(-1, 0), (0, -1), (0, 1), (1, 0)]
    i = 0
    j = 0
    c = 0
    while(i != ligne-1 or j != col-1):
        if c % (distance+1) == distance:
            sys.stdout.write("{} {}\n".format(i, j))
        for check in checkHelper:
            _i = i + check[0]
            _j = j + check[1]
            if 0 <= _i < ligne and 0 <= _j < col and grid[_i][_j] == 0:
                grid[i][j] = "A"
                i = _i
                j = _j
                break
        c += 1
    if c % (distance+1) == distance:
            sys.stdout.write("{} {}\n".format(i, j))
        
            
main()