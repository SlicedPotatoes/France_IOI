primeNumber = []
for i in range(2, 1000, 1):
   isPrime = True
   for n in primeNumber:
      if i % n == 0:
         isPrime = False
   if isPrime:
      primeNumber.append(i)
      print(i)