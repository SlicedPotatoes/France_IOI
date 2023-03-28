import sys
def main():
    a = ord('A')
    nom = sys.stdin.readline()
    age = int(sys.stdin.readline())
    sys.stdout.write("{}{}".format((ord(nom[0]) - a)+1, chr(a+age-1)))

main()