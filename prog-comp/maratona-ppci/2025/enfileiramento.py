n = int(input())

for x in range(0, n):
    count = 0
    s = int(input())
    l = list(map(int, input().split()))
    new = sorted(l, reverse=True)

    for x in range(0, s):
        if l[x] == new[x]:
            count += 1

    print(count)
