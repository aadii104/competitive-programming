import sys

n,m = map(int, input().strip().split(' '))
a = list(map(int, input().split()))
b = list(map(int, input().split()))

ausgabe = 0
for q in range(max(a), min(b) +1):
    if all(q % arr == 0 for arr in a) and all(brr % q == 0 for brr in b):
        ausgabe += 1
    
print(ausgabe)