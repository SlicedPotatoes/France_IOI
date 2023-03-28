def main():
    binary = input()
    base10 = 0
    for i in range(len(binary)):
        if binary[i] == '1':
            base10 += 2 ** (len(binary) - i-1)
    print(base10)


main()
