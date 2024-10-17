/* https://noic.com.br/materiais-informatica/curso/techniques-02

   Primeiro Problema: 

   Dados N fornecedores de gasolina e uma demanda D do mercado, tendo cada
   fornecedor um preço P e um estoque E, calcule o gasto mínimo para atender à
   demanda. Caso não seja possível, retorne "impossível".
 */

#include <iostream>
#include <vector>
#include <algorithm>

using std::cout, std::cin, std::pair, std::vector, std::sort;

// a ideia é ordenar os fornecedores pelo menor preço, e comprar gasolina do
// fornecedor mais barato primeiro, até atender à demanda.
int
main(void)
{
	int nf, dem;

	cin >> nf >> dem;

	vector<pair<double, double>> forn(nf);

	for (int i = 0; i < nf; ++i) {
		cin >> forn[i].first >> forn[i].second;
	}

	sort(forn.rbegin(), forn.rend());

	int custo = 0;
	for (int i = 0; i < nf; ++i) {
		if (forn[i].second < dem) {
			custo += forn[i].first;
			dem -= forn[i].second;
		} else {
			custo += dem * forn[i].first;
			dem = 0;
			break;
		}
	}

	if (dem > 0) {
		cout << "impossivel\n";
	} else {
		cout << custo << '\n';
	}

	return 0;
}
