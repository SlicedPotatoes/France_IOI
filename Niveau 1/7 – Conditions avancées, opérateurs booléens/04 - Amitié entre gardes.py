dDS1 = int(input())
dFS1 = int(input())
dDS2 = int(input())
dFS2 = int(input())
if (dDS1 <= dDS2 and dFS1 >= dDS2) or (dDS2 <= dDS1 and dFS2 >= dDS1):
    print("Amis")
else: 
    print('Pas amis')