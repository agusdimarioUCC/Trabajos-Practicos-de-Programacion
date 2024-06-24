#include <iostream>

using namespace std;

int calcularCuadrado(int numero) {
	return numero * numero;
}

int main() {
	int numero;

	cout << "Ingrese un número entero: ";
	cin >> numero;

	int cuadrado = calcularCuadrado(numero);

	cout << "El cuadrado de " << numero << " es: " << cuadrado << endl;

	return 0;
}
