entrada = list(map(int, input().split(' ')))[:4]
ila, ilb = entrada[0], entrada[1]
fla, flb = entrada[2], entrada[3]

if ila == fla:
    if ilb == flb:
        print('0')
    elif ilb != flb:
        print('2')
elif ilb == flb:
    if ila == fla:
        print('0')
    elif ila != fla:
        print('1')
elif ila != fla or ilb != flb:#1 0 0 1
    print('1')
