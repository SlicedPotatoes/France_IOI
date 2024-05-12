def main():
    nbColonnes = int(input())
    sum = 0
    maxSum = 0
    for i in range(nbColonnes):
        hauteur = int(input())
        if hauteur == 0:
            if sum > maxSum:
                maxSum = sum
            sum = 0
        sum += hauteur
    print(maxSum)
main()