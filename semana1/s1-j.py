def move(mov: int, from_pos):
    x = from_pos[0]
    y = from_pos[1]
    if mov == 1:
        return [x + 1, y + 2]
    elif mov == 2:
        return [x + 2, y + 1]
    elif mov == 3:
        return [x + 2, y - 1]
    elif mov == 4:
        return [x + 1, y - 2]
    elif mov == 5:
        return [x - 1, y - 2]
    elif mov == 6:
        return [x - 2, y - 1]
    elif mov == 7:
        return [x - 2, y + 1]
    elif mov == 8:
        return [x - 1, y + 2]

int(input())
movimentos = list(map(int, input().split(' ')))
buraco_fim = 0
buracos = [ [1, 3], [2, 3], [2, 5], [5, 4] ]
cur_pos = [4, 3]

for i in movimentos:
    buraco_fim += 1
    cur_pos = move(i, cur_pos)
    if cur_pos in buracos:
        break

print(buraco_fim)
