n = list(map(int, input()))
n.sort()
msoma = sum(n)

if msoma % 3 == 0:
    for x in range(len(n) - 1, -1, -1):
        print(n[x], end='')
    print('')
    exit()

for x in n:
    if msoma % 3 == 0:
        break
    if x % 3 != 0:
        if msoma - x % 3 == 0:
            msoma -= x
            n.remove(x)

if msoma % 3 == 0:
    for x in range(len(n) - 1, -1, -1):
        print(n[x], end='')
    print('')
else:
    print('-1')
