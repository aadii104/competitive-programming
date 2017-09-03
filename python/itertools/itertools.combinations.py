from itertools import combinations
s, n = input().split()
print ("\n".join([(''.join(p)) for i in range(1, int(n) + 1) for p in combinations(sorted(s), i)]))
