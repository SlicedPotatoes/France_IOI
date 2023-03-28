def show(char, length):
    for i in range(length):
        print(char, end="")
    print()

r = int(input())
c = int(input())
char = input()
for i in range(r):
    show(char, c)