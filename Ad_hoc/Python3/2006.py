t = input()
a = input().split(" ")

cha = 0

for i in a:
  if i == t:
    cha = cha + 1

print(cha)