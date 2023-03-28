def main():
    a = ord('a')
    nbPages = int(input())
    for i in range(nbPages-1):
        line = input()
        d = -3 if i % 2 == 0 else 5
        d *= (i+2)
        for c in line:
            if c.isalpha():
                _c = (ord(c.lower()) - a + d) % 26
                answer = chr(_c + a)
                if c.isupper():
                    answer = answer.upper()
                print(answer, end="")
            else:
                print(c, end="")
        print()
main()