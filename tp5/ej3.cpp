#include <iostream>

using namespace std;

int encontrarMayor(int num1, int num2) {
	if (num1 >= num2) {
		return num1;
	} else {
		return num2;
	}
}

int main() {
	int numero1, numero2;

	cout << "Ingrese el primer número: ";
	cin >> numero1;

	cout << "Ingrese el segundo número: ";
	cin >> numero2;

	int mayor = encontrarMayor(numero1, numero2);

	cout << "El mayor entre " << numero1 << " y " << numero2 << " es: " << mayor << endl;

	return 0;
}
