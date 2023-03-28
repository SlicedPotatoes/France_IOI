mois = int(input())
if 1 <= mois <=3 or 7 <= mois <= 9:
    print(30)
elif 4 <= mois <= 6 or mois == 10:
    print(31)
else:
    print(29)