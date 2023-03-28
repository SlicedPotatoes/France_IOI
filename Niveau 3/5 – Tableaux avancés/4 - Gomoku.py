def foundAllStart(grid):
  start = []
  for i in range(len(grid)):
    for j in range(len(grid)):
      if grid[i][j] != 0:
        start.append({'i': i, 'j': j, 'player': grid[i][j]})
  return start

def countInAllDir(grid, s):
  allDirection = [[-1, -1], [-1, 0], [-1, 1], [0, 1], [1, 1], [1, 0], [1, -1], [0, -1]]
  max = 0
  for dir in allDirection:
    score = startInADir(grid, s, dir)
    if score > max: max = score
  return max

def startInADir(grid, s, dir):
  lenGrid = len(grid)
  end = False
  score = 1
  while not(end):
    _i = s['i'] + (dir[0] * score)
    _j = s['j'] + (dir[1] * score)
    if 0 <= _i < lenGrid and 0 <= _j < lenGrid and grid[_i][_j] == s['player']: score += 1
    else: end = True
  return score

def main():
  n = int(input())
  grid = [list(map(int, input().split(' '))) for i in range(n)]
  start = foundAllStart(grid)
  playerWin = 0
  for s in start:
    if countInAllDir(grid, s) == 5: playerWin = s['player']
  print(playerWin)
main()