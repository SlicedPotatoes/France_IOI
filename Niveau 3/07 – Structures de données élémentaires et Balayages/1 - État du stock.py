def main():
  nbTypeProduit = int(input())
  stockProduits = list(map(int, input().split(' ')))
  nbOperation = int(input())
  for i in range(nbOperation):
    index, operation = map(int, input().split(' '))
    stockProduits[index-1] += operation
  print(" ".join(map(str, stockProduits)))
main()