#include <iostream>

using namespace std;

unsigned long long int calcularFactorial(int n) {
	return (n == 0) ? 1 : n * calcularFactorial(n - 1);
}

int main() {
	int numero;
	cout << "Ingrese un número entero positivo: ";
	cin >> numero;

	if (numero >= 0) {
		cout << "El factorial de " << numero << " es: " << calcularFactorial(numero) << endl;
	} else {
		cout << "Error: El número debe ser positivo." << endl;
	}

	return 0;
}
