#include <iostream>

using namespace std;

double calcularInteres(double capital, double tasa, int meses) {
	return capital * (tasa / 100) * meses;
}

int main() {
	double capital, tasa;
	int meses;

	cout << "Ingrese el capital invertido: ";
	cin >> capital;

	cout << "Ingrese la tasa de interés mensual (en porcentaje): ";
	cin >> tasa;

	cout << "Ingrese el número de meses de la inversión: ";
	cin >> meses;

	double interesesGanados = calcularInteres(capital, tasa, meses);
	double montoTotal = capital + interesesGanados;

	cout << "Intereses ganados: " << interesesGanados << endl;
	cout << "Monto total después de " << meses << " meses: " << montoTotal << endl;

	return 0;
}
