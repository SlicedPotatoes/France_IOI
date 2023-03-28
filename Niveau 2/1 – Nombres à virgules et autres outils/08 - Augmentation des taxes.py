from math import *
valeurTaxe = float(input())
newTaxe = float(input())
prixActuel = float(input())
print(round((prixActuel/(1+(valeurTaxe/100)))*(1+(newTaxe/100)), 2))