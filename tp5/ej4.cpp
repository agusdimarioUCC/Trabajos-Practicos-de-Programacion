#include <iostream>

using namespace std;

char determinarSigno(int numero) {
	if (numero > 0) {
		return 'P';
	} else if (numero < 0) {
		return 'N';
	} else {
		return 'C';
	}
}

int main() {
	int numero;

	cout << "Ingrese un número entero: ";
	cin >> numero;

	char signo = determinarSigno(numero);

	cout << "El número es: " << signo << endl;

	return 0;
}
