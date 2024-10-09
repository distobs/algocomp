n = int(input())
smatch = 0

for i in range(n):
    linhas = input()
    for c in linhas:
        if c == '{':
            smatch += 1
        elif c == '}':
            if smatch > 0:
                smatch -= 1
            else:
                print('N')
                exit()

print('S' if smatch == 0 else 'N')
