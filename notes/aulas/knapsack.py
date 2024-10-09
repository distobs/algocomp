print('capacidade da mochila: ', end='')
cap = int(input())

print('n pesos: ', end='')
pesos = list(map(int, input().split(' ')))

print('n valores: ', end='')
valores = list(map(int, input().split(' ')))

max, opt = 0, 0

n = len(pesos)
pn = 2 ** n

def valmoc(cap, pesos, valores, n, i):
    valor, peso = 0, 0

    for j in range(0, n):
        if i % 2 == 1:
            valor += valores[j]
            peso += pesos[j]
        if peso > cap:
            return -1
        i >>= 1; # i /= 2
    return valor

for i in range(0, pn):
    valor = valmoc(cap, pesos, valores, n, i)
    if valor > max:
        max = valor
        opt = i

print(f'maximo de peso q da no bagui: {max}')
print(f'teu i ai: {opt}')
