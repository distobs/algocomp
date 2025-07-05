n = int(input())
count = 1

for x in range(n, 0, -1):
    print(' '*(x-1), end="")
    for x in range(0, count - 1):
        print("*", end=" ")
    print("*")
    count += 1
