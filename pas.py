def checkStrength(input_str):
    l, low, up, num, sp = False, False, False, False, False
    for x in input_str:
        if len(input_str) >= 8:
            l = True
        if x.islower():
            low = True
        if x.isupper():
            up = True
        if x.isdigit():
            num = True
        if not x.isalnum():
            sp = True
    return l and low and up and num and sp

password = str(input("Enter a password: "))
result = checkStrength(password)
if(result):
    print("Strong Password\n")
else:
    print("lule password\n")
