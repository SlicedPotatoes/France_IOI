nbPaire = int(input())
for i in range(nbPaire):
    minX1 = int(input())
    maxX1 = int(input())
    minY1 = int(input())
    maxY1 = int(input())
    
    minX2 = int(input())
    maxX2 = int(input())
    minY2 = int(input())
    maxY2 = int(input())
    if ((maxX1 < minX2) or maxX1 == minX2) or ((maxX2 < minX1) or maxX2 == minX1):
       print("NON")
    elif ((maxY1 < minY2) or maxY1 == minY2) or ((maxY2 < minY1) or maxY2 == minY1):
       print("NON")
    else:
       print("OUI")