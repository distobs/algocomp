n = int(input())
seq = list(map(int, input().split(' ')))
seq = seq[:n]

l1, l2 = 0, 0

for i in seq:
    if i == 1:
        l1 = not l1
    elif i == 2:
        l1, l2 = not l1, not l2

l1, l2 = int(l1), int(l2)
print(f'{l1}\n{l2}')
