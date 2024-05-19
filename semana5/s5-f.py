entrada = list(map(int, input().split(' ')))[:4]
ila, ilb = entrada[0], entrada[1]
fla, flb = entrada[2], entrada[3]

'''
colei do github alheio:
    alternativamente, de forma mais simples:
        se ila != fla, só precisamos de 1 aperto do c1 caso ilb == flb, ou de 1
        aperto do c2 caso contrário.
        se ila == fla, temos os casos:
            (ib == fb):
                0
            (ib != fb):
                2
'''
if ila != fla:
    if ilb == flb:
        print('0')
    elif ilb != flb:
        print('2')
elif ilb == flb:
    if ila == fla:
        print('0')
    elif ila != fla:
        print('1')
elif ila != fla or ilb != flb:
    print('1')
