def main():
  nbBacs, placeCamion = map(int, input().split(' '))
  stock = list(map(int, input().split(' ')))
  stock.sort(reverse=True)
  for i in range(placeCamion):
    print(stock[i], end=" ")
main()