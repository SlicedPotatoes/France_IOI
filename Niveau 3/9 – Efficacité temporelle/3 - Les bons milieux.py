import sys

def main():
    nbPoint = int(sys.stdin.readline())
    grid = [[0] * 101 for i in range(101)]
    listIndex = set()
    listMilieux = set()
    for i in range(nbPoint):
        x, y = map(int, sys.stdin.readline().split())
        listIndex.add((x, y))

    for p1 in listIndex:
        for p2 in listIndex:
            if p1 < p2:
                x1, y1 = p1
                x2, y2 = p2
                x, y = x1 + x2, y1 + y2
                if x % 2 == 0 and y % 2 == 0:
                    x, y = x // 2, y // 2
                    if (x, y) in listIndex:
                        listMilieux.add((y, x))
    sys.stdout.write(str(len(listMilieux)))

main()
