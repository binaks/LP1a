#include <iostream>

/*!
* \brief Calcula base^exp
* \param base Base da potencia
* \param exp  Expoente da potencia
* \return base^exp
*/

unsigned long long toPow( int base, int exp );

int main () {
// Pegar um numero n entre 0 e 64
	std::cout << "Digite um numero entre 0 e 64" << std::endl;
	int n = 0;
	std::cin >> n;
// Verificar se ele esta no range correto
	if (n < 0 || n > 64) {
		std::cout << "numero invalido";
		return -1;
	}
// Calcular e mostrar 2 elevado a [0;n]
	for (auto i (0); i <= n; ++i)
		std::cout << "2 elevado a " << i << " eh igual a " <<  toPow(2,i) << std::endl;

	return 0;
}

unsigned long long toPow( int base, int exp ) {
// Base da exponenciacao
	if (exp == 0) return 1;
// Recursao
	return base * (toPow (base, (exp - 1)));
}
