def main():
  nbEmissions, dureeMax = map(int, input().split())

  t = list(map(int, input().split()))

  maxConsecutive = 0
  currentConsecutive = 0

  currentSum = 0

  for i in range(nbEmissions):
    current = currentSum + t[i]

    if(current > t[i]):
      currentSum = current
      currentConsecutive+=1
    else:
      currentSum = t[i]
      currentConsecutive = 1

    if currentSum > dureeMax:
      currentConsecutive -= 1
      currentSum -= t[i - currentConsecutive]
      

    maxConsecutive = max(maxConsecutive, currentConsecutive)

  print(maxConsecutive)


main()