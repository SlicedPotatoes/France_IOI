from math import *
def aire(rayon):
    return (rayon ** 2) * pi
def perim(rayon):
    return (rayon * 2) * pi

rayon_ext = 9

sum_perim = 0
sum_aire = 0

for i in range(5):
    rayon_int = rayon_ext - 3
    
    aire_disque = aire(rayon_ext) - aire(rayon_int)
    sum_aire += aire_disque
    
    perim_disque = perim(rayon_ext) + perim(rayon_int)
    sum_perim += perim_disque
    
    rayon_ext += 6

print(round(sum_aire))
print(round(sum_perim))