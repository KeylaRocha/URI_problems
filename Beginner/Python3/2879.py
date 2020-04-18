ponto = 0
n = int(input())
for x in range(n):
  porta = int(input())
  if(porta == 2 or porta == 3):
    ponto = ponto+1
  
print(ponto)