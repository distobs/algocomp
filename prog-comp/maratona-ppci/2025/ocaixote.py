n = int(input())

print('*'*n)

countdown = 0

for i in range(0, n - 2):
    sign = +1
    if i > (n - 2) / 2:
        countdown -= 1
        factor = (i + 2 * countdown)
    elif i == (n - 2) / 2:
        factor = (i - 1)
    else:
        factor = (i - 1) + sign

    print('*', end='')
    print(' ' * factor, end='')
    print('*', end='')
    print(' ' * (n - 2*factor - 4), end='')
    print('*', end='')
    print(' ' * factor, end='*\n')

print('*'*n)
