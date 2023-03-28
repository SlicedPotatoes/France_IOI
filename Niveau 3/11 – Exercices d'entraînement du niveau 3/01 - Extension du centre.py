import sys
def main():
    Na = int(input())
    arr = list(map(int, input().split()))
    Nb = int(input())
    arrB = list(map(int, input().split()))
    for i in range(Nb):
        arr.append(arrB[i])
    arr.sort()
    print(" ".join(list(map(str, arr))))
main()