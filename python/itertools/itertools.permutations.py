from itertools import permutations
a,b = input().split()

print('\n'.join(''.join(i) for i in 
permutations(sorted(a), int(b))))