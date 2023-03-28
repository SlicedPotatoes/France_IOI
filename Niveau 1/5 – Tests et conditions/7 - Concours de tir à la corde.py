nbMembre = int(input())
poidsE1 = 0
poidsE2 = 0
for i in range(nbMembre*2):
   if i % 2 == 0:
      poidsE1 += int(input())
   else :
      poidsE2 += int(input())
if poidsE1 > poidsE2:
   print("L'équipe 1 a un avantage")
else :
   print("L'équipe 2 a un avantage")
print("Poids total pour l'équipe 1 :", poidsE1) 
print("Poids total pour l'équipe 2 :", poidsE2)   