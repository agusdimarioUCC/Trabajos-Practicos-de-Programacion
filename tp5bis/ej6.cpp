#include <iostream>
#include <string>

using namespace std;

int romanoADecimal(char simbolo) {
	switch(simbolo) {
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
		default: return 0;
	}
}

int convertirRomanoADecimal(string numeroRomano) {
	int resultado = 0;
	int valorActual, valorAnterior = 0;

	for (int i = numeroRomano.length() - 1; i >= 0; i--) {
		valorActual = romanoADecimal(numeroRomano[i]);

		if (valorActual >= valorAnterior) {
			resultado += valorActual;
		} else {
			resultado -= valorActual;
		}

		valorAnterior = valorActual;
	}

	return resultado;
}

int main() {
	string numeroRomano;

	cout << "Ingrese un número romano: ";
	cin >> numeroRomano;

	int decimal = convertirRomanoADecimal(numeroRomano);

	if (decimal != 0) {
		cout << "El número decimal equivalente es: " << decimal << endl;
	} else {
		cout << "Número romano no válido." << endl;
	}

	return 0;
}
