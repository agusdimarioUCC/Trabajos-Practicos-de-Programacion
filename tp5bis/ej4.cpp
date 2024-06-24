#include <iostream>
#include <cmath>

using namespace std;

int calcularMCD(int a, int b) {
	while (b != 0) {
		int siguiente = b;
		b = a % b;
		a = siguiente;
	}
	return a;
}

int main() {
	int num1, num2;
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "Ingrese el segundo numero: ";
	cin >> num2;
	num1 = abs(num1);
	num2 = abs(num2);
	cout << "El MCD de " << num1 << " y " << num2 << " es: " << calcularMCD(num1, num2) << endl;
	return 0;
}