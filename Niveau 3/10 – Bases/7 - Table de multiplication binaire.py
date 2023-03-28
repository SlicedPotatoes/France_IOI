def convertToAnyBase(n, base):
    arr = []
    while n > 0:
        arr.append(n % base)
        n = n // base
    if len(arr) == 0:
        arr.append(0)
    return list(map(str, arr[::-1]))

def main():
    n = int(input())
    for i in range(1, n+1):
        for j in range(1, n+1):
            print("".join(convertToAnyBase(i*j, 2)), end="\t")
        print()
main()