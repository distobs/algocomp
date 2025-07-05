n = int(input())

abbrev = ['' for x in range(0, n)]

for x in range(0, n):
    l = input().split(' ')

    for s in l:
        abbrev[x] += s[0]

for x in abbrev:
    print(x.upper())
