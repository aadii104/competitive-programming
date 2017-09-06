n = input()
l = []
for _ in range(int(n)):
    s = input().split()
    if s[0] != 'print':
        eval("l.{}(".format(s[0]) + ','.join(s[1:]) + ")")
    else:
        print(l)
