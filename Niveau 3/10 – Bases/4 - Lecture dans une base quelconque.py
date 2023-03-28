def main():
    base, length = map(int, input().split())
    nombres = list(map(int, input().split()))
    nombres = nombres[::-1]
    base10 = 0
    for i in range(length):
        base10 += int(nombres[i]) * (base**i)
    print(base10)


main()
