#include <iostream>

using namespace std;

void ordenarNumeros(int num1, int num2) {
	if (num1 > num2) {
		int primero = num1;
		num1 = num2;
		num2 = primero;
	}
	cout << "Números ordenados: " << num1 << ", " << num2 << endl;
}

int main() {
	int numero1, numero2;
	cout << "Ingrese el primer número: ";
	cin >> numero1;
	cout << "Ingrese el segundo número: ";
	cin >> numero2;
	ordenarNumeros(numero1, numero2);
	return 0;
}
