#include <iostream>
#include <cmath>
using namespace std;

void ejercicio3() {
    int nota;
    cout << "Ingrese la nota del alumno ";
    cin >> nota;
    if (nota >= 4) {
        cout << "El alumno esta aprobado" << endl;
    }
}

void ejercicio4() {
    float altura;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    if (altura >= 1.30) {
        cout << "Puede subirse a la montaña rusa.\n";
    } else {
        cout << "No puede subirse a la montaña rusa.\n";
    }
}

void ejercicio5() {
    float R, T, Q, valor;
    cout << "Ingrese el valor de R ";
    cin >> R;
    cout << "Ingrese el valor de T ";
    cin >> T;
    cout << "Ingrese el valor de Q ";
    cin >> Q;
    valor = R * R * R * R - T * T * T + 4 * Q * Q;
    if (valor < 820) {
        cout << "Los valores cumplen la expresion" << endl;
    } else {
        cout << "Los valores no cumplen la expresion" << endl;
    }
}

void ejercicio6() {
    char formaDePago;
    double monto;

    cout << "Ingrese la forma de pago (E para efectivo, T para tarjeta): ";
    cin >> formaDePago;
    cout << "Ingrese el monto a pagar: ";
    cin >> monto;

    if (formaDePago == 'e') {
        monto = monto - monto * 0.10;
    }

    cout << "El monto final a pagar es: " << monto << endl;
}

void ejercicio7() {
    int A, B, aux;
    cout << "Ingrese valor de A ";
    cin >> A;
    cout << "Ingrese valor de B ";
    cin >> B;
    if (A < B) {
        aux = B;
        B = A;
        A = aux;
    }
    cout << "El valor de A es " << A << endl;
    cout << "El valor de B es " << B << endl;
}

void ejercicio8() {
    float sueldo;
    cout << "Ingrese sueldo del empleado: ";
    cin >> sueldo;

    if (sueldo < 18000) {
        sueldo *= 1.12;
        cout << "El empleado tiene aumento. El nuevo sueldo es " << sueldo << endl;
    }
}


//ESTRUCTURA DE CONTROL DE ALTERNATIVA DOBLE
void ejercicio9() {
    int nota;
    cout << "Ingrese la nota del alumno ";
    cin >> nota;
    if (nota >= 4) {
        cout << "El alumno esta aprobado" << endl;
    } else {
        cout << "El alumno esta reprobado" << endl;
    }
}

void ejercicio10() {
    int numBancos, numAlum;
    cout << "Ingrese la cantidad de alumnos ";
    cin >> numAlum;
    cout << "Ingrese la cantidad de bancos ";
    cin >> numBancos;
    if (numBancos >= numAlum) {
        cout << "La cantidad de bancos es suficiente" << endl;
    } else {
        cout << "La cantidad de bancos no es suficiente" << endl;
        cout << "Se deben agregar " << numAlum - numBancos << " bancos" << endl;
    }
}

void ejercicio11() {
    float A, B, areaCuad, areaCirc;
    cout << "Ingrese el valor de A ";
    cin >> A;
    cout << "Ingrese el valor de B ";
    cin >> B;
    if (A >= B) {
        areaCuad = A * A;
        areaCirc = M_PI * B * B;
    } else {
        areaCuad = B * B;
        areaCirc = M_PI * A * A;
    }
    cout << "El area de cuadrado es " << areaCuad << endl;
    cout << "El area de circulo es " << areaCirc << endl;
}

void ejercicio12() {
    float a, b, c, d, raiz1, raiz2;
    cout << "Ingrese el valor de a ";
    cin >> a;
    cout << "Ingrese el valor de b ";
    cin >> b;
    cout << "Ingrese el valor de c ";
    cin >> c;
    d = b * b - 4 * a * c;
    if (d == 0) {
        raiz1 = -b / (2 * a);
        cout << "Raíces reales dobles : " << raiz1 << endl;
    } else {
        if (d > 0) {
            raiz1 = (-b + sqrt(d)) / (2 * a);
            raiz2 = (-b - sqrt(d)) / (2 * a);
            cout << "Raíces reales y distintas : " << raiz1 << " , " << raiz2 << endl;
        } else {
            cout << "Raíces complejas conjugadas" << endl;
        }
    }
}

void ejercicio13() {
    float x, y, distancia;
    cout << "Ingrese el valor de x ";
    cin >> x;
    cout << "Ingrese el valor de y ";
    cin >> y;
    if (x > 0 && y > 0) {
        cout << "El punto esta en el primer cuadrante" << endl;
    } else {
        if (x < 0 && y > 0) {
            cout << "El punto esta en el segundo cuadrante" << endl;
        } else {
            if (x < 0 && y < 0) {
                cout << "El punto esta en el tercer cuadrante" << endl;
            } else {
                cout << "El punto esta en el cuarto cuadrante" << endl;
            }
        }

    }
    distancia = sqrt(x * x + y * y);
    cout << "La distancia al origen de coordenadas es " << distancia;
}

void ejercicio14() {
    int duracion_llamada, min_adicionales;
    double costo;

    cout << "Ingrese cantidad de minutos que duró la llamada: " << endl;
    cin >> duracion_llamada;

    if (duracion_llamada <= 3) {
        costo = 5;
    } else {
        min_adicionales = duracion_llamada - 3;
        costo = 5 + min_adicionales * 2.5;
    }

    cout << "El costo de la llamada es: $" << costo << endl;
}

void ejercicio15() {
    int horas;
    float sueldoBruto, sueldoNeto;
    cout << "Ingrese la cantidad de horas trabajadas ";
    cin >> horas;
    if (horas <= 75) {
        sueldoBruto = horas * 80;
    } else {
        sueldoBruto = 75 * 80 + (horas - 75) * 80 * 1.5;
    }
    cout << "El sueldo bruto del empleado es " << sueldoBruto << endl;
    if (sueldoBruto <= 3000) {
        sueldoNeto = sueldoBruto - sueldoBruto * 0.12;
    } else {
        if (sueldoBruto <= 5000) {
            sueldoNeto = sueldoBruto - sueldoBruto * 0.20;
        } else {
            sueldoNeto = sueldoBruto - sueldoBruto * 0.30;
        }
    }

    cout << "El sueldo neto del empleado es " << sueldoNeto << endl;
}

void ejercicio16() {
    int nDia;

    cout << "ingrese el numero de dia de la semana ";
    cin >> nDia;
    switch (nDia) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miércoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sábado" << endl;
            break;
        case 7:
            cout << "domingo" << endl;
            break;
        default:
            cout << "El numero ingresado no es correcto" << endl;
    }
}

void ejercicio17() {
    int legajo, categoria, cantHoras;
    float sueldoHora, sueldoBruto, sueldoNeto;
    cout << "Ingrese el legajo del empleado ";
    cin >> legajo;
    cout << "Ingrese la categoría del empleado ";
    cin >> categoria;
    cout << "Ingrese la cantidad de horas trabajadas ";
    cin >> cantHoras;
    switch (categoria) {
        case 1:
            sueldoHora = 10;
            break;
        case 2:
            sueldoHora = 15;
            break;
        case 3:
            sueldoHora = 18;
            break;
        case 4:
            sueldoHora = 22;
            break;
        case 5:
            sueldoHora = 28;
            break;
        case 6:
            sueldoHora = 35;
            break;
        case 7:
            sueldoHora = 49;
            break;
        default:
            cout << "La categoria no es correcta" << endl;
            break;
    }
    if (categoria >= 1 && categoria <= 7) {
        sueldoBruto = sueldoHora * cantHoras;
        cout << "El sueldo bruto del empleado legajo " << legajo << " es de " << sueldoBruto << endl;
        sueldoNeto = sueldoBruto - sueldoBruto * 0.20;
        cout << "EL sueldo neto del empleado legajo " << legajo << " es de " << sueldoNeto << endl;
    }
}


void ejercicio19() {
    int mes;
    cout << "Ingrese el numero del mes ";
    cin >> mes;
    switch (mes) {
        case 1:
            cout << "Enero" << endl;
            break;
        case 2:
            cout << "Febrero" << endl;
            break;
        case 3:
            cout << "Marzo" << endl;
            break;
        case 4:
            cout << "Abril" << endl;
            break;
        case 5:
            cout << "Mayo" << endl;
            break;
        case 6:
            cout << "Junio" << endl;
            break;
        case 7:
            cout << "Julio" << endl;
            break;
        case 8:
            cout << "Agosto" << endl;
            break;
        case 9:
            cout << "Septiembre" << endl;
            break;
        case 10:
            cout << "Octubre" << endl;
            break;
        case 11:
            cout << "Nobiembre" << endl;
            break;
        case 12:
            cout << "Diciembre" << endl;
            break;
        default :
            cout << "El valor ingresado no es correcto" << endl;
    }
}

void ejercicio20() {
    int categoria;
    float sueldoActual, aumento, sueldoNuevo;

    cout << "Ingrese sueldo actual ";
    cin >> sueldoActual;
    cout << "Ingrese categoria ";
    cin >> categoria;
    switch (categoria) {
        case 1:
            aumento = sueldoActual * 0.15;
            break;
        case 2:
            aumento = sueldoActual * 0.10;
            break;
        case 3:
            aumento = sueldoActual * 0.08;
            break;
        case 4:
            aumento = sueldoActual * 0.07;
            break;
        default  :
            cout << "La categoria ingresada no es correcta" << endl;
    }
    if (categoria >= 1 && categoria <= 4) {
        cout << "El aumento que recibe el empleado es de " << aumento << endl;
        sueldoNuevo = sueldoActual + aumento;
        cout << "El nuevo sueldo es " << sueldoNuevo << endl;
    }
}

void ejercicio21() {
    int T, OP;
    double f_de_T;

    cout << "Ingrese el valor de T" << endl;
    cin >> T;
    cout << "Ingrese la opción" << endl;
    cin >> OP;


    switch (OP) {
        case 1:
            f_de_T = T / 5;
            break;
        case 2:
            f_de_T = pow(T, T);
            break;
        case 3:
        case 4:
            f_de_T = (6 * T) / 2;
            break;
        default:
            f_de_T = 1;
    }

    cout << "El valor de f(T)=" << f_de_T << endl;
}

void ejercicio22() {
    double Y;
    cout << "Ingrese el valor de Y: ";
    cin >> Y;
    double resultado;
    if (0 <= Y && Y <= 10) {
        resultado = (Y / 4) - Y;
    } else if (11 < Y && Y <= 25) {
        resultado = pow(Y, 3) - 12;
    } else if (25 < Y && Y <= 50) {
        resultado = pow(Y, 2) + (pow(Y, 3) - 18);
    } else {
        resultado = 0;
    }
    cout << "f(" << Y << ") = " << resultado << endl;
}

void ejercicio23() {
    int num;
    cout << "Ingresar un numero ";
    cin >> num;
    if (num > 0) {
        cout << "El numero " << num << " es positivo" << endl;
    } else {
        if (num == 0) {
            cout << "El numero " << num << " es igual a cero" << endl;
        } else {
            cout << "El numero " << num << " es negativo" << endl;
        }
    }
}

void ejercicio24() {
    int zona, minutos;
    float precio;
    cout << "Ingrese el codigo de zona ";
    cin >> zona;
    cout << "Ingrese la cantidad de minutos de la llamada ";
    cin >> minutos;
    switch (zona) {
        case 12 :
            precio = minutos * 2;
            break;
        case 15 :
            precio = minutos * 2.2;
            break;
        case 18 :
            precio = minutos * 4.5;
            break;
        case 19 :
            precio = minutos * 3.5;
            break;
        case 23 :
            precio = minutos * 6;
            break;
        case 25 :
            precio = minutos * 6;
            break;
        case 29 :
            precio = minutos * 5;
            break;
        default :
            cout << "El codigo de zona es incorrecto" << endl;
            precio = 0;
            break;
    }
    cout << "El precio de la llamada es de " << precio << " pesos" << endl;
}

void ejercicio25() {
    int num;
    cout << "Ingresar el numero ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "El numero " << num << " es par" << endl;
    } else {
        cout << "El numero " << num << " es impar" << endl;
    }
}

void ejercicio26() {
    int num1, num2, num3;
    cout << "Ingresar el primer numero ";
    cin >> num1;
    cout << "Ingresar el segundo numero ";
    cin >> num2;
    cout << "Ingresar el tercer numero ";
    cin >> num3;
    if (num1 < num2 && num2 < num3) {
        cout << "Los numeros estan en orden creciente" << endl;
    } else {
        cout << "Los numeros no estan en orden creciente" << endl;
    }
}

void ejercicio27() {
    float monto, descuento;
    cout << "Ingrese el monto de la compra: ";
    cin >> monto;

    if (monto > 15000) {
        descuento = monto * 0.25;
    } else if (monto > 7000) {
        descuento = monto * 0.18;
    } else if (monto > 1000) {
        descuento = monto * 0.11;
    } else if (monto >= 500) {
        descuento = monto * 0.05;
    } else {
        descuento = 0;
    }

    cout << "El monto del descuento es " << descuento << endl;
    cout << "El monto a pagar es " << monto - descuento << endl;
}


void ejercicio28() {
    int antiguedad, categoria;
    cout << "Ingresar la categoría del empleado ";
    cin >> categoria;
    cout << "Ingresar la antigüedad del empleado en años ";
    cin >> antiguedad;
    if (((categoria == 3 || categoria == 4) && antiguedad == 3) || antiguedad > 5) {
        cout << "El empleado es apto para el trabajo";
    } else {
        cout << "El empleado no es apto para el trabajo";
    }
}

void ejercicio29() {
    int mes, anio;
    cout << "Ingresar el valor del mes ";
    cin >> mes;
    cout << "Ingresar el valor del anio ";
    cin >> anio;
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        cout << "El mes tiene 31 dias" << endl;
    } else {
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            cout << "El mes tiene 30 dias" << endl;
        } else {
            if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
                cout << "El mes tiene 29 dias" << endl;
            } else {
                cout << "El mes tiene 28 dias" << endl;
            }
        }
    }
}

void ejercicio30() {
    int anio, unidad, decena, centena, mil;
    cout << "Ingrese el valor del anio ";
    cin >> anio;
    unidad = anio % 10;
    anio /= 10;
    decena = anio % 10;
    anio /= 10;
    centena = anio % 10;
    anio /= 10;
    mil = anio % 10;
    anio /= 10;
    if (mil == 1) {
        cout << "M";
    } else {
        cout << "MM";
    }
    switch (centena) {
        case 1:
            cout << "C";
            break;
        case 2:
            cout << "CC";
            break;
        case 3:
            cout << "CCC";
            break;
        case 4:
            cout << "CD";
            break;
        case 5:
            cout << "D";
            break;
        case 6:
            cout << "DC";
            break;
        case 7:
            cout << "DCC";
            break;
        case 8:
            cout << "DCCC";
            break;
        case 9:
            cout << "CM";
            break;
    }
    switch (decena) {
        case 1:
            cout << "X";
            break;
        case 2:
            cout << "XX";
            break;
        case 3:
            cout << "XXX";
            break;
        case 4:
            cout << "XL";
            break;
        case 5:
            cout << "L";
            break;
        case 6:
            cout << "LX";
            break;
        case 7:
            cout << "LXX";
            break;
        case 8:
            cout << "LXXX";
            break;
        case 9:
            cout << "XC";
            break;
    }

    switch (unidad) {
        case 1:
            cout << "I";
            break;
        case 2:
            cout << "II";
            break;
        case 3:
            cout << "III";
            break;
        case 4:
            cout << "IV";
            break;
        case 5:
            cout << "V";
            break;
        case 6:
            cout << "VI";
            break;
        case 7:
            cout << "VII";
            break;
        case 8:
            cout << "VIII";
            break;
        case 9:
            cout << "IX";
            break;
    }
}

void ejercicio31() {
    float coorX, coorY;
    int Cuadrante;
    cout << "Ingrese el valor de la coordenada X ";
    cin >> coorX;
    cout << "Ingrese el valor de la coordenada Y";
    cin >> coorY;
    cout << "Ingrese el cuadrante ";
    cin >> Cuadrante;
    if (coorX > 0 && coorY > 0 && Cuadrante == 1) {
        cout << "1" << endl;
    } else {
        if (coorX > 0 && coorY < 0 && Cuadrante == 4) {
            cout << "1" << endl;
        } else {
            if (coorX < 0 && coorY > 0 && Cuadrante == 2) {
                cout << "1" << endl;
            } else {
                if (coorX < 0 && coorY < 0 && Cuadrante == 3) {
                    cout << "1" << endl;
                } else {
                    cout << "0" << endl;
                }
            }
        }
    }
}

int ejercicio32() {
    string hora24;
    cout << "Ingrese la hora en formato 24 horas (HH:MM): ";
    cin >> hora24;

    if (hora24.length() != 5 || hora24[2] != ':') {
        cout << "Entrada no válida. Debe ingresar la hora en formato HH:MM." << endl;
        return 1;
    }

    int hora = stoi(hora24.substr(0, 2));
    int minutos = stoi(hora24.substr(3, 2));

    string hora12;
    string meridiano;
    if (hora >= 12) {
        hora -= 12;
        meridiano = "PM";
    } else {
        meridiano = "AM";
    }

    hora12 = to_string(hora) + ":" + to_string(minutos) + " " + meridiano;

    cout << "La hora en formato de 12 horas es: " << hora12 << endl;
    return 0;
}

void ejercicio33() {
    int anio;
    cout << "Ingresar el valor del anio";
    cin >> anio;
    if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
        cout << "El año es bisiesto" << endl;
    } else {
        cout << "El año no es bisiesto" << endl;
    }
}

int main() {
    setlocale(LC_ALL, "spanish"); //con esto puedo usar la ñ y las tildes en consola creo
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
}

