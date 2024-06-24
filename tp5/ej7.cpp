#include <iostream>
#include <cmath>

using namespace std;

const double g = 9.81;
const double pi = 3.14159;

void calcularCoordenadas(double angulo, double velocidadInicial, double tiempo, double coordenadas[]) {
	double anguloRad = angulo * pi / 180.0;
	coordenadas[0] = velocidadInicial * cos(anguloRad) * tiempo;
	coordenadas[1] = velocidadInicial * sin(anguloRad) * tiempo - 0.5 * g * tiempo * tiempo;
}

int main() {
	double angulo, velocidadInicial;

	cout << "Ingrese el ángulo de inclinación (en grados): ";
	cin >> angulo;

	cout << "Ingrese la velocidad inicial (en m/s): ";
	cin >> velocidadInicial;

	cout << "Tiempo\tCoordenada X\tCoordenada Y" << endl;

	double tiempo = 0.0;
	double coordenadas[2];
	while (true) {
		calcularCoordenadas(angulo, velocidadInicial, tiempo, coordenadas);
		cout << tiempo << "\t" << coordenadas[0] << "\t\t" << coordenadas[1] << endl;

		if (coordenadas[1] < 0) {
			break;
		}

		tiempo += 0.1;
	}

	return 0;
}
