import sys
from collections import deque

def main():
    nbRequetes = int(sys.stdin.readline())
    arr = deque()
    for i in range(nbRequetes):
        line = sys.stdin.readline()
        if line[0] == 'Q':
            sys.stdout.write(str(len(arr)) + "\n")
        else:
            hauteur = int(line.split()[1])
            while arr and arr[0] <= hauteur:
                arr.popleft()
            arr.appendleft(hauteur)
main()