little_cube = 0
actual_big_cube = 17
for i in range(9):
   little_cube = little_cube + actual_big_cube ** 3
   actual_big_cube = actual_big_cube - 2
print(little_cube)