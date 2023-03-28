def main():
    n = int(input())
    _n = 2
    while n % _n != n:
        _n *= 2

    print(_n // 2)


main()
