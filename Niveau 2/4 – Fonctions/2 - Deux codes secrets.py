def pwIsSecret(secret, notFirst):
    print("Entrez le code :")
    password = input()
    if password == secret:
        if not(notFirst):
            print("Premier code bon.")
            return True
        else: 
            print("Bravo.")
            return True
    return False

secret = "4242"
secret2 = "2121"
b = False
c = False
while not(b) or not(c):
    if b:
        c = pwIsSecret(secret2, b)
    else:
        b = pwIsSecret(secret, b)