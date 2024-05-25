perRech = int(input())
b = False
for i in range(int(input())):
    if int(input()) == perRech:
        b = True
if b:
    print("Sorti de la ville")
else:
    print("Encore dans la ville")