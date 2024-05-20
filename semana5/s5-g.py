n = int(input())
smatch = list()

for i in range(n):
    linhas = input()
    for c in linhas[i]:
        if c == '{':
            smatch.append(1)
        elif c == '}':
            if len(smatch) > 0:
                smatch.pop()
            else:
                print('N')
                exit()

print('S' if len(smatch) == 0 else 'N')
