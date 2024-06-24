#include <iostream>
#include <cmath>

using namespace std;

const int MAX_FILAS = 100;
const int MAX_COLUMNAS = 100;
const int MAX_VALOR = 1000;

void leerMatriz(double matriz[][MAX_COLUMNAS], int filas, int columnas) {
    cout << "Valores:" << endl;
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++) {
            do { cin >> matriz[i][j]; } while (matriz[i][j] > MAX_VALOR);
        }
}

double calcularSuma(const double arr[], int n) {
    double suma = 0.0;
    for (int i = 0; i < n; i++) suma += arr[i];
    return suma;
}

void calcularPromedios(const double matriz[][MAX_COLUMNAS], int filas, int columnas, double promediosFilas[], double promediosColumnas[]) {
    for (int i = 0; i < filas; i++) promediosFilas[i] = calcularSuma(matriz[i], columnas) / columnas;
    for (int j = 0; j < columnas; j++) {
        double sumaColumna = 0.0;
        for (int i = 0; i < filas; i++) sumaColumna += matriz[i][j];
        promediosColumnas[j] = sumaColumna / filas;
    }
}

double calcularPromedioTotal(const double matriz[][MAX_COLUMNAS], int filas, int columnas) {
    return calcularSuma(matriz[0], filas * columnas) / (filas * columnas);
}

void encontrarPromediosMasAltos(const double promedios[], int n) {
    double maxPromedio = promedios[0];
    for (int i = 1; i < n; i++) if (promedios[i] > maxPromedio) maxPromedio = promedios[i];
    cout << "Promedio más alto: " << maxPromedio << endl;
}

double encontrarMinimoFila(const double matriz[][MAX_COLUMNAS], int fila, int columnas) {
    double minimo = matriz[fila][0];
    for (int j = 1; j < columnas; j++) if (matriz[fila][j] < minimo) minimo = matriz[fila][j];
    return minimo;
}

double encontrarMinimoColumna(const double matriz[][MAX_COLUMNAS], int filas, int columna) {
    double minimo = matriz[0][columna];
    for (int i = 1; i < filas; i++) if (matriz[i][columna] < minimo) minimo = matriz[i][columna];
    return minimo;
}

int main() {
    int filas, columnas, filaBusqueda, columnaBusqueda;
    cout << "Filas (max " << MAX_FILAS << "): "; cin >> filas;
    cout << "Columnas (max " << MAX_COLUMNAS << "): "; cin >> columnas;

    if (filas <= 0 || filas > MAX_FILAS || columnas <= 0 || columnas > MAX_COLUMNAS) {
        cout << "Error: Dimensiones no válidas." << endl;
        return 1;
    }

    double matriz[MAX_FILAS][MAX_COLUMNAS], promediosFilas[MAX_FILAS], promediosColumnas[MAX_COLUMNAS];

    leerMatriz(matriz, filas, columnas);
    calcularPromedios(matriz, filas, columnas, promediosFilas, promediosColumnas);

    cout << "\nPromedios por fila: ";
    for (int i = 0; i < filas; i++) cout << promediosFilas[i] << " ";
    cout << endl;

    cout << "\nPromedios por columna: ";
    for (int i = 0; i < columnas; i++) cout << promediosColumnas[i] << " ";
    cout << endl;

    cout << "\nPromedio total: " << calcularPromedioTotal(matriz, filas, columnas) << endl;

    cout << "\nFilas: ";
    encontrarPromediosMasAltos(promediosFilas, filas);

    cout << "\nColumnas: ";
    encontrarPromediosMasAltos(promediosColumnas, columnas);

    cout << "\nFila a buscar mínimo: "; cin >> filaBusqueda;
    cout << "Mínimo en fila " << filaBusqueda << ": " << encontrarMinimoFila(matriz, filaBusqueda, columnas) << endl;

    cout << "\nColumna a buscar mínimo: "; cin >> columnaBusqueda;
    cout << "Mínimo en columna " << columnaBusqueda << ": " << encontrarMinimoColumna(matriz, filas, columnaBusqueda) << endl;

    return 0;
}
