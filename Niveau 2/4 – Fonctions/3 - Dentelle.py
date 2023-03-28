def show(char, length):
    for i in range(length):
        print(char, end="")
    print()

l = int(input())
show("X", l)
show("#", l)
show("i", l)