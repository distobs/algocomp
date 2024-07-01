# bad bad bad bad
n = list(map(int, input()))
n.sort()
msoma = sum(n)

if msoma % 3 == 0:
    for x in range(len(n) - 1, -1, -1):
        print(n[x], end='')
    print('')
    exit()

popped = 0
for x in range(len(n)):
    if msoma % 3 == 0:
        break
    if n[x - popped] % 3 != 0:
        if msoma - n[x - popped] % 3 == 0:
            msoma -= n[x - popped]
            n.pop(x - popped)
            popped += 1

if msoma % 3 == 0:
    for x in range(len(n) - 1, -1, -1):
        print(n[x], end='')
    print('')
else:
    print('-1')
