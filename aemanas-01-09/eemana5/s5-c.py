comprimento1 = int(input())
largura1 = int(input())
comprimento2 = int(input())
largura2 = int(input())
dim1 = comprimento1 * largura1
dim2 = comprimento2 * largura2

print(dim1 if dim1 > dim2 else dim2)
