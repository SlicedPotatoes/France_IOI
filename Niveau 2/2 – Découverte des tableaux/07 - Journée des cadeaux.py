nbHabitant = int(input())
fortunes = [0] * nbHabitant
for i in range(nbHabitant):
    fortunes[i] = int(input())
fortunes.sort()
if(nbHabitant % 2 != 0):
    print(fortunes[nbHabitant // 2])
else:
    i = nbHabitant//2
    print((fortunes[i-1] + fortunes[i])/2) 