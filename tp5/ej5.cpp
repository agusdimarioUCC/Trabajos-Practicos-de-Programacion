#include <iostream>

using namespace std;

bool esDivisionExacta(int dividendo, int divisor) {
	if (divisor == 0) {
		return false; // No se puede dividir por cero
	} else {
		return dividendo % divisor == 0;
	}
}

int main() {
	int dividendo, divisor;

	cout << "Ingrese el dividendo: ";
	cin >> dividendo;

	cout << "Ingrese el divisor: ";
	cin >> divisor;

	if (esDivisionExacta(dividendo, divisor)) {
		cout << "La división es exacta." << endl;
	} else {
		cout << "La división no es exacta." << endl;
	}

	return 0;
}
