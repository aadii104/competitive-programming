from itertools import combinations

N = int(input()); a = input().split(); K = int(input())
c = list(combinations(a,K))
result = [1 for i in range(len(c)) if 'a' in c[i]]
print(sum(result)/len(c))