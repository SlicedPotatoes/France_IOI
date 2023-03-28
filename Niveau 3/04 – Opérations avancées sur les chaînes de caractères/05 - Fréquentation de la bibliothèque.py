import sys
def main():
    somme = 0
    b = False
    while not(b):
        try:
            nombre = map(int, input().split(' '))
            for n in nombre:
                somme += n
        except:
            b = True
    print(somme)
main()