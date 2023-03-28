def main():
    n = int(input())
    _n = 1
    str = ""
    while n >= _n:
        _n *= 2
    if _n != 1:
        str += "1"
        _n = _n // 2
        n -= _n
        while _n != 1:
            _n = _n // 2
            if _n == 1 and n == 1:
                str += "1"
            elif _n == 1:
                str += "0"
            elif n % _n == n:
                str += "0"
            else:
                str += "1"
                n -= _n
    else:
        str = "0"
    print(str)


main()
