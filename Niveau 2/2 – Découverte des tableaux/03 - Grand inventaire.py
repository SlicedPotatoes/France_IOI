nbOperations = int(input())
stocks = [0] * 10
for i in range(nbOperations):
    stocks[int(input())-1] += int(input())
for element in stocks:
    print(element)