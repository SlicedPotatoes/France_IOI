def fractale(grid, n):
    if len(grid) == n:
        return grid
    if n == 1:
        return ['#']
    _grid = [[0 for _ in range(len(grid) * 2)] for _ in range(len(grid) * 2)]
    for i in range(len(grid)):
        for j in range(len(grid)):
            if grid[i][j] == '#':
                _grid[i*2][j*2] = '#'
                _grid[i*2][j*2+1] = '#'
                _grid[i*2+1][j*2] = '#'
            else:
                _grid[i*2][j*2] = ' '
                _grid[i*2][j*2+1] = ' '
                _grid[i*2+1][j*2] = ' '
            _grid[i*2+1][j*2+1] = ' '
    return fractale(_grid, n)
def main():
    n = int(input())
    grid = [
        ['#', '#'],
        ['#', ' ']
    ]
    f = fractale(grid, n)
    for i in range(len(f)):
        print("".join(f[i]))
main()