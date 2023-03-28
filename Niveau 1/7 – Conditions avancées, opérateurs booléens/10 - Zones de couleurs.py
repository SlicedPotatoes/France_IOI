for i in range(int(input())):
    X = int(input())
    Y = int(input())
    if (Y >= 60 and Y <= 70) and ((X >= 15 and X <= 45) or (X >= 60 and X <= 85)):
        print("Dans une zone rouge")
    elif ((0 <= Y <= 10 or 55 <= Y <= 70) and 0 <= X <= 90) or ((0 <= X <= 10 or 85 <= X <= 90) and 0 <= Y <= 70) or (25 <= X <= 50 and 20 <= Y <= 45):
        print("Dans une zone jaune")
    elif ((Y >= 10 and Y <= 55) and (X >= 10 and X <= 85)):
        print("Dans une zone bleue")
    else:
        print("En dehors de la feuille")