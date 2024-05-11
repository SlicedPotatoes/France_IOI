def main():
    nbCase = int(input())
    foret = list(map(int, input().split()))
    nbEclair = int(input())
    eclair = list(map(int, input().split()))
    foretFeu = [0] * nbCase
    for i in range(nbEclair):
        pos = eclair[i]
        foretFeu[pos] = 1
        altitude = foret[pos]
        index = 1
        while pos+index < nbCase and foret[pos + index] >= altitude and foretFeu[pos+index] == 0:
            foretFeu[pos+index] = 1
            altitude = foret[pos+index]
            index += 1
        index = 1
        altitude = foret[pos]
        while pos-index >= 0 and foret[pos-index] >= altitude and foretFeu[pos-index] == 0:
            foretFeu[pos-index] = 1
            altitude = foret[pos-index]
            index += 1
    print(sum(foretFeu))


main()
