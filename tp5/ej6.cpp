#include <iostream>

using namespace std;

bool esVocal(char caracter) {
	return (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u');
}

int main() {
	char letra;

	cout << "Ingrese un carácter: ";
	cin >> letra;

	if (esVocal(letra)) {
		cout << letra << " es una vocal." << endl;
	} else {
		cout << letra << " no es una vocal." << endl;
	}

	return 0;
}
