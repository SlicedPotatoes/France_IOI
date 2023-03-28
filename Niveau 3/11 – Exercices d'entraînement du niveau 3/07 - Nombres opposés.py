import sys         

def main():
    nb = int(input())
    arr = list(map(int, input().split()))
    _u = set(arr)
    arr.sort()
    _arr = []
    for i in range(nb):
        el = arr[i]
        if el >= 0:
            break
        if abs(el) in _u and not(abs(el) in _arr):
            _arr.append(abs(el))
    print(len(_arr))
main()