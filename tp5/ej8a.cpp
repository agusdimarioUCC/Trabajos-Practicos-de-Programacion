#include <iostream>
#include <cmath>

using namespace std;

bool esPrimo(int numero) {
	if (numero <= 1) {
		return false;
	}

	for (int i = 2; i <= sqrt(numero); i++) {
		if (numero % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int contadorPrimos = 0;
	int numero = 2; // Empezamos a buscar primos desde el 2

	cout << "Los 10 primeros números primos son:" << endl;

	while (contadorPrimos < 10) {
		if (esPrimo(numero)) {
			cout << numero << " ";
			contadorPrimos++;
		}
		numero++;
	}

	cout << endl;
	return 0;
}
