musique = input()
m = [char for char in musique]
b = False
while not(b):
    b = True
    lastCheck = ""
    for i in range(len(m)):
        if m[i] != lastCheck:
            lastCheck = m[i]
        else:
            b = False
            m.pop(i)
            m.pop(i-1)
            break
print("".join(m))