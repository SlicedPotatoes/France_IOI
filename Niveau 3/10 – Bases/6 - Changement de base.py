def convertToB10(n, base):
    base10 = 0
    n = n[::-1]
    for i in range(len(n)):
        base10 += n[i] * (base ** i)
    return base10
def convertToAnyBase(n, base):
    arr = []
    while n > 0:
        arr.append(n % base)
        n = n // base
    if len(arr) == 0:
        arr.append(0)
    return arr[::-1]

def main():
    baseD, baseE, length = map(int, input().split())
    numbers = list(map(int, input().split()))
    b10 = convertToB10(numbers, baseD)
    n = convertToAnyBase(b10, baseE)
    for i in range(len(n)):
        print(n[i], end=" ")
main()