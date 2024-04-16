#include <iostream>
#include <cmath>

using namespace std;

void ejercicio2() {
    int i = 1;
    int sum = 0;

    while (i <= 10) {
        sum += i;
        i++;
    }

    cout << "La sumatoria de los numeros enteros del 1 al 10 es: " << sum << endl;
}

void ejercicio3() {
    double gasto = 0, suma = 0;

    cout << "Ingrese los gastos. Ingrese un valor negativo para terminar." << endl;

    cin >> gasto;
    while (gasto >= 0) {
        suma += gasto;
        cin >> gasto;
    }

    cout << "La sumatoria de los gastos es: " << suma << endl;
}

void ejercicio4() {
    int nota = 0;
    double total = 0, cantidad = 0;
    double promedio;

    cout << "Ingrese las notas. Ingrese '0' para terminar." << endl;
    cin >> nota;

    while (nota != 0) {
        total += nota;
        cantidad++;
        cin >> nota;
    }
    promedio = total / cantidad;
    cout << "El promedio de las notas es: " << promedio << endl;

}

void ejercicio5() {
    int num, max, i = 1;
    cout << "Ingrese el numero para el cual desea ver la tabla de multiplicacion: ";
    cin >> num;
    cout << "Ingrese hasta que numero desea ver la tabla de multiplicacion: ";
    cin >> max;
    while (i <= max) {
        cout << num << " * " << i << " = " << num * i << endl;
        i++;
    }
}

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
    int entrega = 0;
    do {
        cout << "cuantas unidades se entregan?";
        cin >> entrega;
        unidades -= entrega;
    } while (unidades > 200);
    cout << "alerta de menos de 200 unidades";

}

void ejercicio9() {
    double sueldo;

    do {
        cout << "Ingrese el sueldo del , 0 para finalizar: ";
        cin >> sueldo;

        if (sueldo > 0) {
            if (sueldo >= 18000) {
                cout << "Su aumento es del 12%\n";
                sueldo = sueldo * 1.12;
            } else {
                cout << "Su aumento es del 15%\n";
                sueldo = sueldo * 1.15;
            }
            cout << "El sueldo con aumento es: $" << sueldo << endl;
        }
    } while (sueldo != 0);
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
        cout << endl << "ingrese 12 numeros enteros: ";
        cin >> ingresado;
        if (ingresado == 0) {
            ceros++;
        }
    }
    cout << "cantidad de veces que se ingreso el cero: " << ceros << endl;
}

void ejercicio12() {
    int nro, cnro, mayor, menor;
    for (cnro = 1; cnro <= 10; cnro++) {
        cout << "Ingrese 10 numeros ";
        cin >> nro;
        if (cnro == 1) {
            mayor = nro;
            menor = nro;
        } else {
            if (mayor < nro) {
                mayor = nro;
            }
            if (menor > nro) {
                menor = nro;
            }
        }
    }
    cout << "El numero mayor de la serie fue " << mayor << endl;
    cout << "EL numero menor de la serie fue " << menor << endl;
}

void ejercicio13() {
    int nro, c, contceros = 0, contpos = 0, contneg = 0;

    for (c = 1; c <= 10; c++) {
        cout << "Ingrese 10 numeros ";
        cin >> nro;
        if (nro > 0) {
            contpos++;
        } else {
            if (nro < 0) {
                contneg++;
            } else {
                contceros++;
            }
        }
    }
    cout << "La cantidad de positivos fue " << contpos << endl;
    cout << "La cantidad de negativos fue " << contneg << endl;
    cout << "La cantidad de ceros fue " << contceros << endl;
}

void ejercicio14() {
    int num, resultado = 1;

    cout << "Ingrese un numero para calcular factorial: ";
    cin >> num;

    while (num >= 1) {
        resultado = resultado * num;
        num = num - 1;
    }

    cout << "El resultado del factorial es: " << resultado << endl;
}

void ejercicio15() {
    int nota, aprobados = 0, desaprobados = 0, total = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese la nota " << (i + 1) << ": ";
        cin >> nota;

        if (nota >= 4) {
            aprobados++;
        } else {
            desaprobados++;
        }

        total += nota;
    }

    double promedio = total / 10;

    cout << "Cantidad de aprobados: " << aprobados << endl;
    cout << "Cantidad de desaprobados: " << desaprobados << endl;
    cout << "Promedio: " << promedio << endl;
}

void ejercicio16() {
    int num, pares = 0, impares = 0, nulos = 0;

    for (int i = 0; i < 8; i++) {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> num;

        if (num == 0) {
            nulos++;
        } else if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "Cantidad de números pares: " << pares << endl;
    cout << "Cantidad de números impares: " << impares << endl;
    cout << "Cantidad de números nulos: " << nulos << endl;


}

void ejercicio17() {
    int cantidadTrabajadores;
    double sueldo, totalSueldos = 0;

    cout << "Ingrese la cantidad de trabajadores de la empresa: ";
    cin >> cantidadTrabajadores;

    for (int i = 0; i < cantidadTrabajadores; i++) {
        cout << "Ingrese el sueldo del trabajador " << i++ << ": ";
        cin >> sueldo;
        totalSueldos += sueldo;
    }

    cout << "El monto que la empresa invierte en sueldos es: $" << totalSueldos << endl;
}

void ejercicio18() {
    int num, cantDivisores = 0, denominador;

    cout << "Ingrese un numero: ";
    cin >> num;

    for (denominador = 1; denominador <= num; denominador++) {
        if (num % denominador == 0) {
            cantDivisores++;
            cout << "El numero es divisible en " << denominador << endl;
        }
    }

    if (cantDivisores == 2) {
        cout << "Es primo\n";
    } else {
        cout << "No es Primo\n";
    }
}

void ejercicio19() {
    int num = 2;

    while (num < 100) {
        cout << num << endl;
        num += 3;
        cout << num << endl;
        num += 2;
    }
}

void ejercicio20() {
    int numVentas, ventasMenor200 = 0, ventas200a400 = 0, ventasMayor400 = 0;
    double monto;

    cout << "Ingrese el número de ventas: ";
    cin >> numVentas;

    for (int i = 0; i < numVentas; i++) {
        cout << "Ingrese el monto de la venta " << (i + 1) << ": ";
        cin >> monto;

        if (monto <= 200) {
            ventasMenor200++;
        } else if (monto > 200 && monto < 400) {
            ventas200a400++;
        } else {
            ventasMayor400++;
        }
    }

    cout << "Cantidad de ventas de $200 o menos: " << ventasMenor200 << endl;
    cout << "Cantidad de ventas mayores a $200 inferiores a $400: " << ventas200a400 << endl;
    cout << "Cantidad de ventas de $400 o más: " << ventasMayor400 << endl;
}

void ejercicio21() {
    float valor = 1;
    int N, signo = -1;
    cout << "ingrese el valor de N ";
    cin >> N;
    for (int den = 2; den <= N; den++) {
        valor = valor + ((1. / den) * signo);
        signo = signo * (-1);
    }
    cout << "El valor de la serie es " << valor;
}

void ejercicio22() {
    int ns, ns1, ns2, n;
    do {
        cout << "Ingrese la cantidad de terminos a mostrar ";
        cin >> n;
        if (n < 3) {
            cout << "El valor ingresado debe ser mayor o igual a 3. Ingrese nuevamente" << endl;
        }
    } while (n < 3);
    ns1 = 0;
    ns2 = 1;
    cout << ns1 << endl;
    cout << ns2 << endl;
    for (int i = 1; i <= n - 2; i++) {
        ns = ns1 + ns2;
        cout << ns << endl;
        ns1 = ns2;
        ns2 = ns;
    }
}

void ejercicio23() {
    int semilla;

    do {
        cout << "Ingrese la semilla para comenzar ";
        cin >> semilla;
        if (semilla < 1) {
            cout << "El valor ingresado no es correcto. Ingrese nuevamente" << endl;
        }
    } while (semilla < 1);

    cout << semilla << endl;
    while (semilla > 1) {
        if (semilla % 2 == 0) {
            semilla = semilla / 2;
        } else {
            semilla = semilla * 3 + 1;
        }
        cout << semilla << endl;
    }
}

void ejercicio24() {
    int votos_candidato1 = 0, votos_candidato2 = 0, votos_candidato3 = 0, votos_candidato4 = 0, votos_en_blanco = 0;

    int voto;

    do {
        cout << "Ingrese el voto (1, 2, 3, 4 o 0 para voto en blanco, -1 para finalizar): ";
        cin >> voto;

        switch (voto) {
            case 1:
                votos_candidato1++;
                break;
            case 2:
                votos_candidato2++;
                break;
            case 3:
                votos_candidato3++;
                break;
            case 4:
                votos_candidato4++;
                break;
            case 0:
                votos_en_blanco++;
                break;
            case -1:
                break;
            default:
                cout << "Voto no válido. Intente nuevamente." << endl;
        }
    } while (voto != -1);

    int total_votos = votos_candidato1 + votos_candidato2 + votos_candidato3 + votos_candidato4 + votos_en_blanco;

    float porcentaje_candidato1 = votos_candidato1 / total_votos * 100;
    float porcentaje_candidato2 = votos_candidato2 / total_votos * 100;
    float porcentaje_candidato3 = votos_candidato3 / total_votos * 100;
    float porcentaje_candidato4 = votos_candidato4 / total_votos * 100;
    float porcentaje_en_blanco = votos_en_blanco / total_votos * 100;

    cout << "\nResultados de la votación:" << endl;
    cout << "Candidato 1: " << votos_candidato1 << " votos (" << porcentaje_candidato1 << "%)" << endl;
    cout << "Candidato 2: " << votos_candidato2 << " votos (" << porcentaje_candidato2 << "%)" << endl;
    cout << "Candidato 3: " << votos_candidato3 << " votos (" << porcentaje_candidato3 << "%)" << endl;
    cout << "Candidato 4: " << votos_candidato4 << " votos (" << porcentaje_candidato4 << "%)" << endl;
    cout << "Votos en blanco: " << votos_en_blanco << " votos (" << porcentaje_en_blanco << "%)" << endl;
}

void ejercicio26() {
    double impares = 1.0;
    int signo = 1;
    double mi_valor_pi = 4.0;
    int iteraciones = 0;

    do {
        mi_valor_pi = mi_valor_pi + (4.0 / (impares + 2)) * -signo;
        impares = impares + 2;
        signo = signo * (-1);
        iteraciones++;
    } while (abs(mi_valor_pi - M_PI) > 0.0005);

    cout << "Valor calculado de pi: " << mi_valor_pi << endl;
    cout << "Valor real de pi: " << M_PI << endl;
    cout << "Las iteraciones necesarias fueron: " << iteraciones << endl;
}

void ejercicio27() {
    char tipo;
    int minutos, cantidadLocales = 0;
    float costo, costoTotal = 0;

    while (tipo != 's') {
        cout << "Ingrese i=Internacional, n=Nacional, l=Local o s=Salir ";
        cin >> tipo;

        cout << "Ingrese la cantidad de minutos ";
        cin >> minutos;

        if (tipo == 'i') {
            costo = 7.59;
            if (minutos > 3) {
                costo += (minutos - 3) * 3.03;
            }
        } else if (tipo == 'n') {
            costo = 1.20;
            if (minutos > 3) {
                costo += (minutos - 3) * 0.48;
            }
        } else if (tipo == 'l') {
            cantidadLocales++;
            if (cantidadLocales > 50) {
                costo = 0.60;
            } else {
                costo = 0;
            }
        }

        cout << "Esta llamada cuesta " << costo << endl;
        costoTotal += costo;
    }

    cout << "El costo total de llamadas es " << costoTotal << endl;

}

void ejercicio28() {
    int suma = 0;
    for (int i = 2; i <= 200; i += 2) {
        suma += i;
    }
    cout << "La suma de los números pares entre 2 y 200 es: " << suma << endl;
}

void ejercicio29() {
    int num1, num2, producto = 0;

    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;

    for (int i = 0; i < num2; i++) {
        producto += num1;
    }

    cout << "El producto de " << num1 << " y " << num2 << " es: " << producto << endl;
}

void ejercicio30() {
    int num1, num2, cociente = 0, resto;

    cout << "Introduce el dividendo: ";
    cin >> num1;
    cout << "Introduce el divisor: ";
    cin >> num2;

    resto = num1;

    while (resto >= num2) {
        resto -= num2;
        cociente++;
    }

    cout << "El cociente de la division es: " << cociente << endl;
    cout << "El resto de la division es: " << resto << endl;
}

void ejercicio31() {
    int base, exponente;
    long long resultado = 1;

    cout << "Introduce la base: ";
    cin >> base;
    cout << "Introduce el exponente: ";
    cin >> exponente;

    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    cout << "El resultado de " << base << " elevado a " << exponente << " es: " << resultado << endl;
}

void ejercicio32() {
    int num;

    cout << "Introduce un numero positivo (0 para terminar): ";
    cin >> num;

    while (num != 0) {
        cout << "El cuadrado de " << num << " es: " << num * num << endl;
        cout << "El cubo de " << num << " es: " << num * num * num << endl;

        cout << "Introduce otro numero positivo (0 para terminar): ";
        cin >> num;
    }

    cout << "Has introducido el numero 0. El programa ha terminado." << endl;
}

void ejercicio33() {
    int num1, num2;

    for (int i = 0; i < 10; i++) {
        cout << "Introduce el par de numeros " << i + 1 << " (dos numeros separados por espacio): ";
        cin >> num1 >> num2;

        cout << "La suma de " << num1 << " y " << num2 << " es: " << num1 + num2 << endl;
        cout << "El producto de " << num1 << " y " << num2 << " es: " << num1 * num2 << endl;
    }
}

void ejercicio34() {
    double longitud;
    int total = 0, aptas = 0, noAptas = 0;

    cout << "Introduce la longitud de la pieza (0 para terminar): ";
    cin >> longitud;

    while (longitud != 0) {
        total++;

        if (longitud >= 1.15 && longitud <= 1.20) {
            aptas++;
        } else {
            noAptas++;
        }

        cout << "Introduce la longitud de la siguiente pieza (0 para terminar): ";
        cin >> longitud;
    }

    double porcentajeAptas = aptas / total * 100;
    double porcentajeNoAptas = noAptas / total * 100;

    cout << "Cantidad de piezas aptas: " << aptas << " (" << porcentajeAptas << "%)" << endl;
    cout << "Cantidad de piezas no aptas: " << noAptas << " (" << porcentajeNoAptas << "%)" << endl;
}

void ejercicio35() {
    int num, contador10 = 0, contador20 = 0, contador30 = 0, contador40 = 0, otros = 0;

    cout << "Introduce un numero entero (99 para terminar): ";
    cin >> num;

    while (num != 99) {
        switch (num) {
            case 10:
                contador10++;
                break;
            case 20:
                contador20++;
                break;
            case 30:
                contador30++;
                break;
            case 40:
                contador40++;
                break;
            default:
                otros++;
        }

        cout << "Introduce otro numero entero (99 para terminar): ";
        cin >> num;
    }

    cout << "El numero 10 se presento " << contador10 << " veces." << endl;
    cout << "El numero 20 se presento " << contador20 << " veces." << endl;
    cout << "El numero 30 se presento " << contador30 << " veces." << endl;
    cout << "El numero 40 se presento " << contador40 << " veces." << endl;
    cout << "Se ingresaron " << otros << " numeros distintos de 10, 20, 30 y 40." << endl;
}

void ejercicio36() {
    int A, B, sumatoria = 0, cantidad = 0;

    cout << "Ingresar numero A: ";
    cin >> A;
    cout << "Ingresar numero B: ";
    cin >> B;

    cout << "Los numeros comprendidos entre ellos es:" << endl;
    for (int i = A + 1; i < B; i++) {
        cout << i << endl;
        sumatoria += i;
        cantidad++;
    }

    cout << "La cantidad de numeros es: " << cantidad << endl;
    cout << "La sumatoria de numeros es: " << sumatoria << endl;
}

void ejercicio37() {
    int A, B, C, menor, mayor, restante;

    cout << "Ingresar numero A: ";
    cin >> A;
    cout << "Ingresar numero B: ";
    cin >> B;
    cout << "Ingresar numero C: ";
    cin >> C;

    // Determinar el menor y el mayor
    menor = min(min(A, B), C);
    mayor = max(max(A, B), C);

    // Calcular el restante
    restante = mayor - menor;

    cout << "Los numeros comprendidos entre el menor y el doble del mayor son:" << endl;
    for (int i = menor; i <= 2 * mayor; i += restante) {
        cout << i << endl;
    }
}

void ejercicio38() {}

void ejercicio39() {}

void ejercicio40() {}

void ejercicio41() {}

void ejercicio42() {
    for (int i = 10; i >= 1; i--) {
        for (int c = 1; c <= i; c++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
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
    return 0;
}