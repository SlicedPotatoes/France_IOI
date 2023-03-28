titre = input()
nom = input()
for i in range(len(titre)):
    if not(titre[i] == "A" or titre[i] == "E" or titre[i] == "I" or titre[i] == "O" or titre[i] == "U" or titre[i] == "Y" or titre[i] == " "):
        print(titre[i], end="")
print()
for i in range(len(nom)):
    if not(nom[i] == "A" or nom[i] == "E" or nom[i] == "I" or nom[i] == "O" or nom[i] == "U" or nom[i] == "Y" or nom[i] == " "):
        print(nom[i], end="")