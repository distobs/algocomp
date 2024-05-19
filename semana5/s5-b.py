n = int(input())
seq = list(map(int, input().split(' ')))
seq = seq[:n]

l1, l2 = 0, 0

for i in seq:
    if i == 1:
        l1 = not l1
    elif i == 2:
        l1, l2 = not l1, not l2

print(int(l1))
print(int(l2))
