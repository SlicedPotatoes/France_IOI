def foundCavaliers(g):
  pos = []
  for i in range(8):
    for j in range(8):
      if g[i][j] == 'C':
        pos.append({'i': i, 'j': j})
  return pos
def cavalierCanEat(grid, c):
  cavMov = [
    {'i': c['i'] - 2, 'j': c['j'] - 1},
    {'i': c['i'] - 2, 'j': c['j'] + 1},
    {'i': c['i'] - 1, 'j': c['j'] - 2},
    {'i': c['i'] - 1, 'j': c['j'] + 2},
    {'i': c['i'] + 1, 'j': c['j'] - 2},
    {'i': c['i'] + 1, 'j': c['j'] + 2},
    {'i': c['i'] + 2, 'j': c['j'] - 1},
    {'i': c['i'] + 2, 'j': c['j'] + 1}
  ]
  for mov in cavMov:
    if 0 <= mov['i'] < 8 and 0 <= mov['j'] < 8:
      if grid[mov['i']][mov['j']].islower():
        return True
  return False

def main():
    grid = [0] * 8
    for i in range(8):
      grid[i] = list(input())
    cav = foundCavaliers(grid)
    for c in cav:
      if cavalierCanEat(grid, c): 
        print('yes')
        break
    else: print('no')
main()