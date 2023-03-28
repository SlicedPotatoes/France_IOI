def printLine(char, length):
    for i in range(length):
        print(char, end="")
    print()

def printLineSpace(char, length):
    if length == 1:
        print(char)
    else:
        print(char, end="")
        for i in range(length-2):
            print(" ", end="")
        print(char, end="")
        print()

def printRec(row, col):
    printLine("#", col)
    for i in range(row - 2):
        printLineSpace("#", col)
    printLine("#", col)

def printTri(length):
    for i in range(length-1):
        printLineSpace("@", i+1)
    printLine("@", length)

lengthLigne = int(input())
rowRec = int(input())
colRec = int(input())
lengthTri = int(input())
printLine("X", lengthLigne)
print()
printRec(rowRec, colRec)
print()
printTri(lengthTri)