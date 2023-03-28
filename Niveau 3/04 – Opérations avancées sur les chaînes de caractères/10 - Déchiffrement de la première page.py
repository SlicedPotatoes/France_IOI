import sys
def main():
    a = ord('a')
    grilleDecrypt = input()
    crypted = input()
    for c in crypted:
        index = ord(c.lower()) - a
        if 0 <= index < 26:
            _c = grilleDecrypt[index]
            if c.islower():
                print(_c, end="")
            else:
                print(_c.upper(), end="")
        else:
            print(c, end="")
main()