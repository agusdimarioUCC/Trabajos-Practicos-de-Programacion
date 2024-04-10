#include <iostream>

using namespace std;

void ejercicio6() {
    int acumulador = 0;
    int contador = 0;

    do {
        contador += acumulador;
        ++acumulador;
    } while (acumulador <= 10);

    cout << "La sumatoria de los numeros del 1 al 10 es: " << contador << endl << endl;

}

void ejercicio7() {
    int acumulador = 1;
    int contador = 0;
    cout << "los 100 primeros numeros pares son: " << endl;
    do {
        if (acumulador % 2 == 0) {
            cout << acumulador << ",";
            ++contador;
        }
        acumulador++;
    } while (contador < 100);
    cout << endl << endl;

    cout << "Se han generado " << contador << " numeros pares" << endl << endl;
}

void ejercicio8() {
    int unidades = 1000;

}

void ejercicio10() {
    int contador = 0;
    cout << "suma del for: ";
    for (int acumulador = 0; acumulador <= 10; ++acumulador) {
        contador += acumulador;
    }
    cout << contador;
}

void ejercicio11() {
    int ingresado;
    int ceros = 0;
    for (int i = 0; i < 12; ++i) {
        cout << endl << "ingrese un numero entero: ";
        cin >> ingresado;
        if (ingresado == 0) {
            ceros++;
        }
    }
    cout << "cantidad de veces que se ingreso el cero: " << ceros << endl;
}

void ejercicio15() {
    int notas, suma, aprobados, desaprobados;
    float promedio;
    for (int i = 0; i < 10; ++i) {
        cout << "ingrese nota: " << endl;
        cin >> notas;
        cout << notas;
    }
}

int main() {
    ejercicio6();
    ejercicio7();
    ejercicio10();
    ejercicio11();
}
