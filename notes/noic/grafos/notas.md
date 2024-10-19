# Definição de um grafo

Um grafo é um conjunto de vértices e um conjunto de arestas.

```
	D ------------ E
	|
	|
	A------------- B
	 \
	  \
	   \
	    C
```

Neste exemplo, o conjunto de vértices é ${A, B, C, D, E}$ e o conjunto de
arestas é ${(A, B), (A, C), (D, A), (D, E)}$ (eu acho).

# Outros termos

- Uma aresta é um self-loop se ela é da forma $(v, v)$.

- Um grafo é um multi-grafo se possui duas arestas iguais.

- Um grafo é simples se não é multi-grafo nem possui self-loop.

- $(v, u) = (u, v)$, a não ser que o grafo seja direcionado.

- O grau de um vértice é o número de arestas incidentes nele.

- v é vizinho de u $\iff$ existir uma aresta $(u, v)$.

- Existe um caminho entre u e v se existir uma sequência de vértices entre v0 e
vk tal que v0 = u e vk =0 e se existirem sempre arestas entre vi e v(i+1).

- Um ciclo num grafo é um caminho de u para si mesmo.

- Um grafo tem peso se suas arestas possuem pesos.

- Existem casos em que nos limitamos a seguir um único sentido. Ou seja, existem
casos em que só podemos ir do vértice u ao v, e não do v ao u. Grafos com essa
limitação são chamados direcionados.

- Um grafo bidirecional é conexo se existe caminho entre quaisquer dois
vértices.

- Um componente conexo é um conjunto máximo de vértices tal que exista caminho
entre todos os seus vértices. Um componente fortemente conexo se aplica a
grafos direcionados (os vértices precisam ter caminho de ida e de volta).

- Uma árvore é um grafo bidirecional conexo e sem ciclos.

- Um grafo é completo se possui arestas entre todo par possível.

# Representação

Podemos manter uma matriz de adjacência, onde a posição Vi,Vj indica se há
aresta entre esses dois vértices:

| x  | V1 | V2 | V3 |
|----|----|----|----|
| V1 | 0  | 1  | 0  |
| V2 | 1  | 0  | 1  |
| V3 | 0  | 1  | 0  |

Ou uma lista de adjacência. onde para cada vértice se guarda um array de seus
vizinhos:

| Vértice | Vizinhos |
|---------|----------|
| 1       | {2, 3}   |
| 2       | {1}      |
| 3       | {1}      |
