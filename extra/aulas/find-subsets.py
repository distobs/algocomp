myset = list(map(int, input().split(' ')));
n = len(myset)
pn = (2 ** n)

def psub(C: list, i: int, n):
    for j in range(0, n):
        if i % 2 == 1:
            print(f'{C[j]}', end = " ")
        i >>= 1; # i /= 2
    print("")

for i in range(0, pn):
    psub(myset, i, n)

print('(the empty set)')
