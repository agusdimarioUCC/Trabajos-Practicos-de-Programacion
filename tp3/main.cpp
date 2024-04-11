#include <iostream>

using namespace std;

void ejercicio1() {}

void ejercicio2() {}

void ejercicio3() {}

void ejercicio4() {}

void ejercicio5() {}

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

void ejercicio8() {}

void ejercicio9() {}

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

void ejercicio12() {}

void ejercicio13() {}

void ejercicio14() {}

void ejercicio15() {
    int notas, suma, aprobados, desaprobados;
    float promedio;
    for (int i = 0; i < 10; ++i) {
        cout << "ingrese nota: " << endl;
        cin >> notas;
        cout << notas;
    }
}

void ejercicio16() {}

void ejercicio17() {}

void ejercicio18() {}

void ejercicio19() {}

void ejercicio20() {}

void ejercicio21() {}

void ejercicio22() {}

void ejercicio23() {}

void ejercicio24() {}

void ejercicio25() {}

void ejercicio26() {}

void ejercicio27() {}

void ejercicio28() {}

void ejercicio29() {}

void ejercicio30() {}

void ejercicio31() {}

void ejercicio32() {}

void ejercicio33() {}

void ejercicio34() {}

void ejercicio35() {}

void ejercicio36() {}

void ejercicio37() {}

void ejercicio38() {}

void ejercicio39() {}

void ejercicio40() {}

void ejercicio41() {}

void ejercicio42() {}

int main() {
    ejercicio1();

    ejercicio2();

    ejercicio3();

    ejercicio4();

    ejercicio5();

    ejercicio6();

    ejercicio7();

    ejercicio8();

    ejercicio9();

    ejercicio10();

    ejercicio11();

    ejercicio12();

    ejercicio13();

    ejercicio14();

    ejercicio15();

    ejercicio16();

    ejercicio17();

    ejercicio18();

    ejercicio19();

    ejercicio20();

    ejercicio21();

    ejercicio22();

    ejercicio23();

    ejercicio24();

    ejercicio25();

    ejercicio26();

    ejercicio27();

    ejercicio28();

    ejercicio29();

    ejercicio30();

    ejercicio31();

    ejercicio32();

    ejercicio33();

    ejercicio34();

    ejercicio35();

    ejercicio36();

    ejercicio37();

    ejercicio38();

    ejercicio39();

    ejercicio40();

    ejercicio41();

    ejercicio42();

    system("pause");

    return 0;
}
