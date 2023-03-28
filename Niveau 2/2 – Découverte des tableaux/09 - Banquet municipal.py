nbPositionsTable = int(input())
nbChangementPosition = int(input())
pos = [0] * nbPositionsTable 
for i in range(nbPositionsTable):
    pos[i] = int(input())
for i in range(nbChangementPosition):
    p1 = int(input())
    p2 = int(input())
    temp = pos[p1]
    pos[p1] = pos[p2]
    pos[p2] = temp
for element in pos:
    print(element)