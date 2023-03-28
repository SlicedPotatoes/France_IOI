import copy

def erosion(img):
  row, col = [len(img), len(img[0])]
  dir = [[-1, 0], [0, 1], [1, 0], [0, -1]]
  _img = copy.deepcopy(img)
  for i in range(row):
    for j in range(col):
      if img[i][j] == '#':
        countB = 0
        for k in dir:
          _i = i + k[0]
          _j = j + k[1]
          if 0 <= _i < row and 0 <= _j < col and img[_i][_j] == "#": countB += 1
        if countB < 4: _img[i][j] = '.'
  return _img

def main():
  N = int(input())
  row, col = map(int, input().split(' '))
  image = [0] * row
  for i in range(row):
    image[i] = list(input())
  for i in range(N):
    image = erosion(image)
  for r in image:
    print("".join(r))
main()