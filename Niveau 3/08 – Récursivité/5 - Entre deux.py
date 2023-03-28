def solve(n, m):
    if n == m:
        print(n, end=" ")
        return
    print(n, end=" ")
    solve(n+1, m)


def main():
    n, m = map(int, input().split())
    solve(n, m)


main()
