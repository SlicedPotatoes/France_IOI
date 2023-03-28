import sys
def main():
    nbMots = int(input())
    arr = []
    for i in range(nbMots):
        mots = input().split(' ')
        mots.reverse()
        arr.append(" ".join(mots))
    arr.sort()
    for mot in arr:
        print(mot)
main()