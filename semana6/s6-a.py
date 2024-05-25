esportes = int(input())
artes = int(input())
ciencias = int(input())
soma = (esportes * 2) + (artes * 3) + (ciencias * 5)

if soma >= 200:
    print('O')
elif soma >= 150:
    print('S')
elif soma >= 100:
    print('B')
else:
    print('N')
