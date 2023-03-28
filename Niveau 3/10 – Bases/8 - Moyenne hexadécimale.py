def convertToB10(n):
    base10 = 0
    n = list(n)[::-1]
    for i in range(len(n)):
        el = n[i]
        if el.isalpha():
            el = ord(el) - ord('A') + 10
        base10 += int(el) * (16 ** i)
    return base10
def convertToAnyBase(n, base):
    arr = []
    while n > 0:
        mod = n % base
        if mod >= 10:
            mod = chr(ord('A') + mod - 10)
        arr.append(str(mod))
        n = n // base
    if len(arr) == "0":
        arr.append("0")
    return "".join(arr[::-1])

def main():
    length = convertToB10(input())
    _sum = 0
    for i in range(length):
        _sum += convertToB10(input())
    moyenne = _sum // length
    print(convertToAnyBase(moyenne, 16))
main()