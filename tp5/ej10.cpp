#include <iostream>
#include <cmath>

using namespace std;

void menu() {
	cout << "\nElija una opción:" << endl;
	cout << "1. Convertir de coordenadas polares a cartesianas" << endl;
	cout << "2. Convertir de coordenadas cartesianas a polares" << endl;
	cout << "0. Salir" << endl;
}

void convertirPolarCartesiano() {
	double r, theta;
	cout << "Ingrese radio (r): ";
	cin >> r;
	cout << "Ingrese ángulo (theta en radianes): ";
	cin >> theta;

	double x = r * cos(theta);
	double y = r * sin(theta);

	cout << "Coordenadas cartesianas: (" << x << ", " << y << ")" << endl;
}

void convertirCartesianoPolar() {
	double x, y;
	cout << "Ingrese coordenada x: ";
	cin >> x;
	cout << "Ingrese coordenada y: ";
	cin >> y;

	double r = sqrt(x * x + y * y);
	double theta = atan2(y, x);

	cout << "Coordenadas polares: (" << r << ", " << theta << ")" << endl;
}

int main() {
	int opcion;
	do {
		menu();
		cin >> opcion;

		switch (opcion) {
			case 1:
				convertirPolarCartesiano();
			break;
			case 2:
				convertirCartesianoPolar();
			break;
			case 0:
				cout << "Saliendo..." << endl;
			break;
			default:
				cout << "Opción no válida. Intente de nuevo." << endl;
		}
	} while (opcion != 0);

	return 0;
}
