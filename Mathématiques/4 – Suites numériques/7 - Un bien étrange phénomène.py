n = int(input())
while n != 1:
    print(n)
    if n % 2 == 1:
        n = 3*n+1
    else:
        n = round(n / 2)
print(n)