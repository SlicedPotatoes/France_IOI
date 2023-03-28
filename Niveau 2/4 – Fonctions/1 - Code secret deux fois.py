def pwIsSecret(secret, notFirst):
    print("Entrez le code :")
    password = input()
    if password == secret:
        if not(notFirst):
            print("Encore une fois.")
            return True
        else: 
            print("Bravo.")
            return True
    return False

secret = "4242"
b = False
c = False
while not(b) or not(c):
    if b:
        c = pwIsSecret(secret, b)
    else:
        b = pwIsSecret(secret, b)