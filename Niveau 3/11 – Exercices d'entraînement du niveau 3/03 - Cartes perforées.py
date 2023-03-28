def main():
    s = ""
    for i in range(int(input())):
        line = input()
        index = line.index('O', 0)
        while index != -1:
            s += chr(ord('A') + index)
            try:
                index = line.index('O', index + 1)
            except:
                index = -1
    print(s)
main()