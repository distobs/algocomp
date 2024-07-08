letra = input()
frase = input()

npal = 1
apar = 0
lnov = True

for c in frase:
    if c == ' ':
        npal += 1
        lnov = True
    elif c == letra and lnov:
        apar += 1
        lnov = False

if apar == 0:
    print('0.0')
else:
    print(f'{(100 * apar) / npal:.1f}')
