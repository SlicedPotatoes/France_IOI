import sys

def main():
    a = ord('A')
    arr = [0] * 26
    text = sys.stdin.readline()
    for el in text:
        i = ord(el.upper()) - a
        if 0 <= i <= 25:
            arr[i] += 1

    sys.stdout.write(chr(arr.index(max(arr)) + a))

main()