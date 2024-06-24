#include <iostream>

using namespace std;

void calcularFactorial(int n) {
	long long factorial = 1; // Usar long long para evitar desbordamiento con factoriales grandes

	if (n < 0) {
		cout << "El factorial no está definido para números negativos." << endl;
	} else {
		for (int i = 1; i <= n; i++) {
			factorial *= i;
		}
		cout << "El factorial de " << n << " es: " << factorial << endl;
	}
}

int main() {
	int numero;

	cout << "Ingrese un número entero no negativo: ";
	cin >> numero;

	calcularFactorial(numero);

	return 0;
}
