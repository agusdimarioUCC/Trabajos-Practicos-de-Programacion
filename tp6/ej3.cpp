#include <iostream>

using namespace std;

void leerValores(double arr[], int n) {
	cout << "Ingrese " << n << " valores:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

double calcularSuma(double arr[], int n) {
	double suma = 0.0;
	for (int i = 0; i < n; i++) {
		suma += arr[i];
	}
	return suma;
}

void calcularPorcentajes(double arr[], int n) {
	double sumaTotal = calcularSuma(arr, n);
	for (int i = 0; i < n; i++) {
		arr[i] = (arr[i] / sumaTotal) * 100.0;
	}
}

int main() {
	int n;
	cout << "Ingrese la cantidad de valores (N): ";
	cin >> n;

	double valores[n];

	leerValores(valores, n);
	calcularPorcentajes(valores, n);

	cout << "Porcentajes:" << endl;
	for (int i = 0; i < n; i++) {
		cout << valores[i] << "% ";
	}
	cout << endl;

	return 0;
}
