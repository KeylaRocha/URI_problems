entrada = input()
a = entrada.split(" ")

if(int(a[0]) * int(a[2]) <= int(a[1])):
    print("S")
else:
    print("N")