#include <iostream>

using namespace std;

void leerValores(int valores[]) {
	cout << "Ingrese 10 valores enteros:" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> valores[i];
	}
}

void imprimirValores(const int valores[]) {
	cout << "Valores ingresados:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << valores[i] << " ";
	}
	cout << endl;
}

int main() {
	int valores[10];
	leerValores(valores);
	imprimirValores(valores);
	return 0;
}
