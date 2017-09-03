from itertools import combinations_with_replacement as cwr

s,k = input().split()
print(*[''.join(p) for p in cwr(sorted(s),int(k))], sep='\n')