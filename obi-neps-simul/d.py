# bruh
from math import factorial as fac

d = {}
t = tuple(map(int, input().split(' ')))
fa = fac(t[0])

for i in range(t[1]):
    t_tup = tuple(map(int, input().split(' ')))
    if t_tup[0] not in list(d.keys()):
        tmpset = set()
        tmpset.add(t_tup[1])
        tmpset.add(t_tup[0])
        d.update({t_tup[0] : tmpset})
    else:
        d[t_tup[0]].add(t_tup[1])

for i in list(d.values()):
    tmp = 1
    for j in i:
        tmp = tmp * j
    if tmp == fa:
        print('S')
        exit()

print('N')
