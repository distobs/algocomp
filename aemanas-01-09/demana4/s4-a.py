line = list(map(int, input().split(' ')))
n = line[0]
s = line[1]
menor = s

for i in range(n):
    mov = int(input())
    s += mov
    if menor > s:
        menor = s

print(menor)
