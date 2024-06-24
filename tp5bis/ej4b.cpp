#include <iostream>

using namespace std;

// Función para calcular el máximo común divisor (MCD)
int calcularMCD(int a, int b) {
	while (b != 0) {
		int siguiente = b;
		b = a % b;
		a = siguiente;
	}
	return a;
}

// Función para simplificar una fracción
void simplificarFraccion(int numerador, int denominador, int& numSimp, int& denSimp) {
	int mcd = calcularMCD(numerador, denominador);
	numSimp = numerador / mcd;
	denSimp = denominador / mcd;
}

int main() {
	int numerador, denominador, numSimplificado, denSimplificado;

	cout << "Ingrese el numerador: ";
	cin >> numerador;

	cout << "Ingrese el denominador: ";
	cin >> denominador;

	if (denominador == 0) {
		cout << "Error: El denominador no puede ser cero." << endl;
		return 1; // Código de error
	}

	simplificarFraccion(numerador, denominador, numSimplificado, denSimplificado);
	cout << "La fracción simplificada es: " << numSimplificado << "/" << denSimplificado << endl;

	return 0;
}
