#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool esNumeroValido(int numero) {
	return numero > 999 && numero < 10000;
}

string invertirNumeroString(int numero) {
	string numeroStr = to_string(numero);
	reverse(numeroStr.begin(), numeroStr.end());
	return numeroStr;
}

int main() {
	int numero;
	cout << "Ingrese un número de 4 dígitos: ";
	cin >> numero;

	if (esNumeroValido(numero)) {
		cout << "Número invertido: " << invertirNumeroString(numero) << endl;
	} else {
		cout << "El número no tiene 4 dígitos." << endl;
	}
	return 0;
}