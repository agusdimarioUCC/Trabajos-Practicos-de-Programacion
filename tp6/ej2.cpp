#include <iostream>

using namespace std;

void inicializarArreglo(double arr[], int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = 0.0;
	}
}

void leerValores(double arr[], int n) {
	cout << "Ingrese " << n << " valores:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

double calcularSuma(const double arr[], int n) {
	double suma = 0.0;
	for (int i = 0; i < n; i++) {
		suma += arr[i];
	}
	return suma;
}

double calcularMedia(const double arr[], int n) {
	return calcularSuma(arr, n) / n;
}

int main() {
	int n;
	cout << "Ingrese la cantidad de valores (N): ";
	cin >> n;

	double valores[n];

	inicializarArreglo(valores, n);
	leerValores(valores, n);

	double suma = calcularSuma(valores, n);
	double media = calcularMedia(valores, n);

	cout << "Suma total: " << suma << endl;
	cout << "Media: " << media << endl;

	return 0;
}
