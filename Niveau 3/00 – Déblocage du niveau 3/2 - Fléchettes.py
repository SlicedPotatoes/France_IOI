nbLettre = int(input())
baseLettre = "a"
for i in range(nbLettre * 2 - 1):
    for j in range(nbLettre * 2 - 1):
        increment = 0
        _i = i
        if nbLettre <= i: _i = _i = (nbLettre * 2 - 1) - i - 1
        if j < nbLettre: increment = min(_i, j)
        else:
            diff = (nbLettre * 2 - 1) - j - _i + (1*(_i-1))
            increment = min(_i, diff)
        print(chr(ord(baseLettre) + increment), end="")
    print()