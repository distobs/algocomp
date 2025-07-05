l = list(map(int, input().split(' ')))
b = l[0]
e = l[1]
m = l[2]

def mod_exp(base, exponent, mod):
    if mod == 1:
        return 0

    res = 1
    base = base % mod
    while exponent > 0:
        if exponent % 2 == 1:
            res = (res * base) % mod
        exponent >>= 1
        base = (base ** 2) % mod
    return res

print(mod_exp(b, e, m))
