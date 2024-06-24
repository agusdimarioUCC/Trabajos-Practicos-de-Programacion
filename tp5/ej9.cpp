#include <iostream>

using namespace std;

double convertirUnidad(double valor, char unidad) {
	switch (unidad) {
		case 'k': return valor * 0.621371;
		case 'm': return valor > 10 ? valor * 1.09361 : valor * 3.28084;
		case 'c': return valor * 0.393701;
		case 'l': return valor * 0.264172;
		case 'C': return valor * 9.0 / 5.0 + 32;
		default: return 0;
	}
}

int main() {
	double valor; char unidad;
	cout << "Valor y unidad (k,m,c,l,C): ";
	cin >> valor >> unidad;
	double resultado = convertirUnidad(valor, unidad);
	if (resultado) {
		switch (unidad) {
			case 'k': cout << valor << "km = " << resultado << "mi" << endl; break;
			case 'm': cout << valor << "m = " << resultado << ((valor > 10) ? "yd" : "ft") << endl; break;
			case 'c': cout << valor << "cm = " << resultado << "in" << endl; break;
			case 'l': cout << valor << "l = " << resultado << "gal" << endl; break;
			case 'C': cout << valor << "°C = " << resultado << "°F" << endl; break;
		}
	}
	return 0;
}
