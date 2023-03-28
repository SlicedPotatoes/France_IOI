import sys
def main():
    charAccent = ['Ç', 'Ä', 'Å', 'É', 'Ö', 'Ü', 'Ñ', 'À', 'È', 'å', 'ì', 'ò', 'ÿ', 'á', 'í', 'ó', 'ú', 'ñ', 'é', 'à', 'è']
    nbNoms = int(input())
    for i in range(nbNoms):
        nom = input()
        valid = True
        if nom[0].isdigit():
            valid = False
        for c in nom:
            if not(c.isdigit() or c.isalpha() or c == '_') or c in charAccent:
                valid = False
        if valid:
            print("YES")
        else:
            print("NO")

main()