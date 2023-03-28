import sys
def sortMovEO(elem):
    return elem[1]
def sortMovNS(elem):
    return elem[0]
def indexOf(str, value, index):
    try: return str.index(value, index)
    except: return -1
def main():
    L, C = map(int, input().split())
    grid = [[] for _ in range(L)]
    listBalls = []
    listTrou = []
    for i in range(L):
        line = list(sys.stdin.readline().strip())
        grid[i] = line
        index = indexOf(line, 'x', 0)
        while index != -1:
            listBalls.append((i, index))
            index = indexOf(line, 'x', index+1)
        index = indexOf(line, 'O', 0)
        while index != -1:
            listTrou.append((i, index))
            index = indexOf(line, 'O', index+1)
    nbMov = int(input())
    mov = list(input())
    for _ in range(nbMov):
        m = mov[_]
        _i = 0
        _j = 0
        if m == 'S':
            _i = 1
            listBalls.sort(key=sortMovNS, reverse=True)
        elif m == 'N': 
            _i = -1
            listBalls.sort(key=sortMovNS)
        elif m == 'O':
            _j = -1
            listBalls.sort(key=sortMovEO)
        else: 
            _j = 1
            listBalls.sort(key=sortMovEO, reverse=True)
        needToPop = []
        for b in range(len(listBalls)):
            i, j = listBalls[b]
            grid[i][j] = '.'
            actualCase = grid[i][j]
            while actualCase == '.':
                i += _i
                j += _j
                actualCase = grid[i][j]
            if actualCase != 'O':
                grid[i-_i][j-_j] = 'x'
                listBalls[b] = (i-_i, j-_j)
            else:
                needToPop.append(listBalls[b])
        for b in range(len(needToPop)):
            index = listBalls.index(needToPop[b])
            listBalls.pop(index)
    print(len(listBalls))
main()
