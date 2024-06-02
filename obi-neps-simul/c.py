n, objetivo = list(map(int, input().split(' ')))
disparos = list(map(int, input().split(' ')))
somatmp = 0

j = 0
for d in disparos:
    somatmp += d
    if (somatmp > objetivo):
        somatmp -= disparos[j]
        j += 1
    if (somatmp == objetivo):
        print("S")
        exit()

if (somatmp != objetivo):
    print("N")
