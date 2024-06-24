#include <iostream>

using namespace std;

int sumarNumeros(int num1, int num2) {
	return num1 + num2;
}

int main() {
	int numero1, numero2;

	cout << "Ingrese el primer número: ";
	cin >> numero1;

	cout << "Ingrese el segundo número: ";
	cin >> numero2;

	int suma = sumarNumeros(numero1, numero2);

	cout << "La suma de " << numero1 << " y " << numero2 << " es: " << suma << endl;

	return 0;
}
