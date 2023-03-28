secret = int(input())
tour = 1
proposition = int(input())
while proposition != secret:
    if proposition > secret:
        print("c'est moins")
    else:
        print("c'est plus")
    proposition = int(input())
    tour += 1
print("Nombre d'essais nécessaires :")
print(tour)