#include <iostream>
#include <string>

using namespace std;

string obtenerSimboloRomano(int& numero, int valor, string simbolo) {
	if (numero >= valor) {
		numero -= valor;
		return simbolo;
	}
	return "";
}

string convertirARomano(int numero) {
	string resultado;

	resultado += obtenerSimboloRomano(numero, 1000, "M");
	resultado += obtenerSimboloRomano(numero, 900, "CM");
	resultado += obtenerSimboloRomano(numero, 500, "D");
	resultado += obtenerSimboloRomano(numero, 400, "CD");
	resultado += obtenerSimboloRomano(numero, 100, "C");
	resultado += obtenerSimboloRomano(numero, 90, "XC");
	resultado += obtenerSimboloRomano(numero, 50, "L");
	resultado += obtenerSimboloRomano(numero, 40, "XL");
	resultado += obtenerSimboloRomano(numero, 10, "X");
	resultado += obtenerSimboloRomano(numero, 9, "IX");
	resultado += obtenerSimboloRomano(numero, 5, "V");
	resultado += obtenerSimboloRomano(numero, 4, "IV");
	resultado += obtenerSimboloRomano(numero, 1, "I");

	return resultado;
}

int main() {
	int numero;
	cout << "Ingrese un número entero no negativo: ";
	cin >> numero;

	if (numero >= 0) {
		cout << "El número romano equivalente es: " << convertirARomano(numero) << endl;
	} else {
		cout << "Número no válido. Ingrese un número no negativo." << endl;
	}
	return 0;
}
