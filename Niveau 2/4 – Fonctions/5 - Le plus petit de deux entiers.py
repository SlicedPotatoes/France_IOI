def min2(a, b):
    if a > b:
        return b
    else: 
        return a
min = int(input())
for i in range(9):
    min = min2(min, int(input()))
print(min)