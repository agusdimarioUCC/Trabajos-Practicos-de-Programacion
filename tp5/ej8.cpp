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
	int numero;

	cout << "Ingrese un número entero: ";
	cin >> numero;

	if (esPrimo(numero)) {
		cout << numero << " es un número primo." << endl;
	} else {
		cout << numero << " no es un número primo." << endl;
	}

	return 0;
}
