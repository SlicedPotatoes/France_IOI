def find(n, arr):
  start = 0
  end = len(arr) - 1
  m = 0
  while start <= end:
    m = (start + end) // 2
    if(arr[m] == n):
      return True
    else:
      if(n > arr[m]):
        start = m + 1
      else:
        end = m - 1
  
  return False

def main():
  nbQuantites, quantiteRecherchee = map(int, input().split())

  quantites = list(map(int, input().split()))

  f = False

  for quantite in quantites:
    if(quantite * 2 == quantiteRecherchee):
      f = True
      break
    toFind = quantiteRecherchee - quantite
    if(find(toFind, quantites)):
      f = True
      break
    if(quantite + quantites[0] > quantiteRecherchee):
      break
  
  print("OUI" if f else "NON")

main()