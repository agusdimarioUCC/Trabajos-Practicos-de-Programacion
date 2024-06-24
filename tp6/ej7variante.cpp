#include <iostream>

using namespace std;

const int MAX_FILAS = 100;
const int MAX_COLUMNAS = 100;
const int MAX_VALOR = 1000;

// Función para leer valores en la matriz, validando que no superen el máximo
void leerMatriz(double matriz[][MAX_COLUMNAS], int filas, int columnas) {
    cout << "Valores:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            do {
                cin >> matriz[i][j];
            } while (matriz[i][j] > MAX_VALOR);
        }
    }
}

// Función para calcular la suma de elementos en un arreglo
double calcularSuma(const double arr[], int n) {
    double suma = 0.0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return suma;
}

// Función para calcular promedios por fila y columna
void calcularPromedios(const double matriz[][MAX_COLUMNAS], int filas, int columnas, double promediosFilas[], double promediosColumnas[]) {
    for (int i = 0; i < filas; i++) {
        promediosFilas[i] = calcularSuma(matriz[i], columnas) / columnas;
    }
    for (int j = 0; j < columnas; j++) {
        double sumaColumna = 0.0;
        for (int i = 0; i < filas; i++) {
            sumaColumna += matriz[i][j];
        }
        promediosColumnas[j] = sumaColumna / filas;
    }
}

// Función para calcular el promedio total de la matriz
double calcularPromedioTotal(const double matriz[][MAX_COLUMNAS], int filas, int columnas) {
    return calcularSuma(matriz[0], filas * columnas) / (filas * columnas);
}

// Función para encontrar el máximo promedio en un arreglo
void encontrarPromediosMasAltos(const double promedios[], int n) {
    double maxPromedio = promedios[0];
    for (int i = 1; i < n; i++) {
        if (promedios[i] > maxPromedio) {
            maxPromedio = promedios[i];
        }
    }
    cout << "Promedio más alto: " << maxPromedio << endl;
}

// Función para contar elementos mayores o iguales a una referencia en una fila
int contarElementosMayoresOIguales(const double matriz[][MAX_COLUMNAS], int fila, int columnas, double referencia) {
    int contador = 0;
    for (int j = 0; j < columnas; j++) {
        if (matriz[fila][j] >= referencia) {
            contador++;
        }
    }
    return contador;
}

// Función para contar elementos menores a una referencia en una fila
int contarElementosMenores(const double matriz[][MAX_COLUMNAS], int fila, int columnas, double referencia) {
    int contador = 0;
    for (int j = 0; j < columnas; j++) {
        if (matriz[fila][j] < referencia) {
            contador++;
        }
    }
    return contador;
}

// Función para encontrar el máximo valor en una columna
double encontrarMaximoColumna(const double matriz[][MAX_COLUMNAS], int filas, int columna) {
    double maximo = matriz[0][columna];
    for (int i = 1; i < filas; i++) {
        if (matriz[i][columna] > maximo) {
            maximo = matriz[i][columna];
        }
    }
    return maximo;
}

// Función para calcular y mostrar porcentajes de elementos mayores/menores a una referencia
void calcularPorcentajeElementos(const double matriz[][MAX_COLUMNAS], int filas, int columnas, double referencia) {
    cout << "\nPorcentaje de elementos mayores o iguales a " << referencia << ":" << endl;
    for (int i = 0; i < filas; i++) {
        double porcentaje = (double)contarElementosMayoresOIguales(matriz, i, columnas, referencia) / columnas * 100;
        cout << "Fila " << i << ": " << porcentaje << "%" << endl;
    }
    for (int j = 0; j < columnas; j++) {
        double maximo = encontrarMaximoColumna(matriz, filas, j);
        cout << "Columna " << j << ": " << (maximo >= referencia ? 100.0 : 0.0) << "%" << endl;
    }

    cout << "\nPorcentaje de elementos menores a " << referencia << ":" << endl;
    for (int i = 0; i < filas; i++) {
        double porcentaje = (double)contarElementosMenores(matriz, i, columnas, referencia) / columnas * 100;
        cout << "Fila " << i << ": " << porcentaje << "%" << endl;
    }
}

int main() {
    int filas, columnas;
    cout << "Filas (max " << MAX_FILAS << "): ";
    cin >> filas;
    cout << "Columnas (max " << MAX_COLUMNAS << "): ";
    cin >> columnas;

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

    double referencia;
    cout << "\nIngrese el valor de referencia: ";
    cin >> referencia;

    calcularPorcentajeElementos(matriz, filas, columnas, referencia);

    return 0;
}