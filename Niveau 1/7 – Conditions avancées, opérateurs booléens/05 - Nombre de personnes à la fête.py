nbPersonnesTotal = int(input())
maxPersonnes = 0
actuelPersonnes = 0
for i in range(nbPersonnesTotal * 2):
    if int(input()) > 0:
        actuelPersonnes += 1
    else:
        actuelPersonnes -= 1
    if actuelPersonnes > maxPersonnes:
        maxPersonnes = actuelPersonnes
print(maxPersonnes)