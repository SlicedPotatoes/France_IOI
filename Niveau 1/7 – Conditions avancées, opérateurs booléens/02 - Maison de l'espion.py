minX = int(input())
maxX = int(input())
minY = int(input())
maxY = int(input())
maisonSuspecte = 0
for i in range(int(input())):
    X = int(input())
    Y = int(input())
    if minX <= X <= maxX and minY <= Y <= maxY:
        maisonSuspecte += 1
print(maisonSuspecte)