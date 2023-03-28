nombre = int(input())
prime = []
for i in range(2, nombre+1, 1):
    isPrime = True
    for n in prime:
        if i % n == 0:
            isPrime = False
    if isPrime:
        prime.append(i)

if prime[len(prime) - 1] == nombre:
    print("Premier")
else:
    print("Composé")