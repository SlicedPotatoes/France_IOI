end = False
somme = 0
while not(end):
    a = int(input())
    if a == -1:
        end = True
    else:
        somme += a
print(somme)