#include <iostream>
#include <cmath>

using namespace std;

void calcularPotencias(double a, int n) {
	for (int i = 0; i <= n; i++) {
		cout << a << "^" << i << " = " << pow(a, i) << endl;
	}
}

int main() {
	double base;
	int exponente;

	cout << "Ingrese la base (a): ";
	cin >> base;

	cout << "Ingrese el exponente máximo (n): ";
	cin >> exponente;

	calcularPotencias(base, exponente);

	return 0;
}
