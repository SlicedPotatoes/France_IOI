from math import *
i = 3
end = float(input())
j = 1
while end * j < 1:
    j *= 10
while j != 0.1:
    while log(i)/i >= end:
        i+=j
    i-=j
    j /= 10
print(int(i+1))