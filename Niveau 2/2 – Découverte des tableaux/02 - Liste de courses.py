prixKg = [9, 5, 12, 15, 7, 42, 13, 10, 1, 20]
somme = 0
for i in range(10):
    somme += prixKg[i] * int(input())
print(somme)