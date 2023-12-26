def main():
  nbCibles = int(input())
  cibles = list(map(int, input().split()))

  nbLots = int(input())
  lots = list(map(int, input().split()))

  currentLot = 0

  for element in cibles:
    while (currentLot < nbLots) and lots[currentLot] <= element:
      currentLot+=1
    print(lots[currentLot-1], end=" ")

main()