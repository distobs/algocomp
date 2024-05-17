s = str(input())
li = s.split(' ')
li = [ int(li[i]) for i in range(len(li)) ]

max_seen = li[0]

for i in li[1:]:
    if max_seen < i:
        max_seen = i

print(max_seen)
