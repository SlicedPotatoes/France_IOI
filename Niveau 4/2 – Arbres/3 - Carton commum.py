import sys
def findPath(tree, index):
    path = [index]
    while tree[index-1] != 0:
        index = tree[index-1]
        path.append(index)
    return path

def main():
    N = int(input())
    reserve = list(map(int, input().split()))
    R = int(input())
    for i in range(R):
        obj1, obj2 = map(int, sys.stdin.readline().split())
        pathObj1 = findPath(reserve, obj1)
        pathObj2 = findPath(reserve, obj2)
        for j in range(len(pathObj1)):
            if pathObj1[j] in pathObj2:
                sys.stdout.write(str(pathObj1[j]) + "\n")
                break
        else:
            sys.stdout.write('0\n')
main()