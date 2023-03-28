nbMarchands = int(input())
minPrice = 1000000
index = -1
for i in range(nbMarchands):
    price = int(input())
    if price <= minPrice:
        minPrice = price
        index = i+1
print(index)