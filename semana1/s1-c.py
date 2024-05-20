li = map(int, input().split(' '))

max_seen = li[0]

for i in li[1:]:
    if max_seen < i:
        max_seen = i

print(max_seen)
