#include <iostream>

using namespace std;

bool esNumeroNatural(int numero) {
	return numero > 0;
}

bool esPrimo(int numero) {
	if (numero <= 1) return false;
	for (int i = 2; i * i <= numero; ++i) {
		if (numero % i == 0) return false;
	}
	return true;
}

int main() {
	int numero;
	cout << "Ingrese un número: ";
	cin >> numero;

	if (!esNumeroNatural(numero)) {
		cout << "El número ingresado no es un número natural.\n";
	} else {
		if (esPrimo(numero)) {
			cout << "El número " << numero << " es primo.\n";
		} else {
			cout << "El número " << numero << " no es primo.\n";
		}
	}

	return 0;
}
