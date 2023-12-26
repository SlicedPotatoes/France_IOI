MAX_DAY = 100000

def main():
  nbJours, nGroupes = map(int, input().split())

  days = list(map(int , input().split()))

  dejaVu = [ 0 for _ in range(nGroupes + 1) ]
  groupeVue = 0

  m = MAX_DAY
  start = 0

  for end in range(nbJours):
    groupe = days[end]

    if dejaVu[groupe] == 0:
      groupeVue+=1
    dejaVu[groupe] += 1

    while groupeVue == nGroupes:
      m = min(m, end - start)
      dejaVu[ days[start] ] -=1
      if(dejaVu[days[start]] == 0):
        groupeVue -= 1
      
      start+=1
  
  print(m + 1)

main()