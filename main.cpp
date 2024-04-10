#include <iostream>
#include <cmath>

using namespace std;

void ejercicio1() {
    double lado, area, perimetro;
    cout << "Ingrese el valor del lado del cuadrado ";
    cin >> lado;
    area = lado * lado;
    perimetro = 4 * lado;
    cout << "El perimetro del cuadrado es " << perimetro << endl;
    cout << "El area del cuadrado es " << area << endl;
}

void ejercicio2() {
    double ancho, alto, area, perimetro;
    cout << "Ingrese el valor del ancho del rectángulo ";
    cin >> ancho;
    cout << "Ingrese el valor del alto del rectángulo ";
    cin >> alto;
    area = ancho * alto;
    perimetro = 2 * (ancho + alto);
    cout << "El perímetro del cuadrado es " << perimetro << endl;
    cout << "El área del cuadrado es " << area << endl;

}

void ejercicio3() {
    int n1, n2;
    double promedio;
    cout << "Ingrese el valor del primer numero ";
    cin >> n1;
    cout << "Ingrese el valor del segundo numero ";
    cin >> n2;
    promedio = (n1 + n2) / 2.0;
    cout << "El promedio entre " << n1 << " y " << n2 << " es " << promedio << endl;
}


void ejercicio4() {
    cout << "el pseudocodigo del ejercicio 4 es el siguiente:"
            ""
            ""
            ""
            "Proceso u1_tp1_ej4b_pie_libras\n"
            "    Definir pie, libras, metro, kilo Como Real\n"
            "    Escribir \"Ingrese distancia en pies: \"\n"
            "    Leer pie\n"
            "    Escribir \"Ingrese peso en libras: \"\n"
            "    Leer libras\n"
            "    metro=pie*0.3048\n"
            "    kilo=libras*0.45359\n"
            "    Escribir \"La distancia en metros es: \", metro\n"
            "    Escribir \"El peso en Kilos es: \", kilo\n"
            "FinProceso";
}

void ejercicio5() {
    double sueldoBruto, sueldoNeto, apJub, apOS, apPAMI;
    cout << "Ingrese el sueldo bruto ";
    cin >> sueldoBruto;
    sueldoNeto = sueldoBruto - 0.17 * sueldoBruto;
    apJub = 0.11 * sueldoBruto;
    apOS = 0.03 * sueldoBruto;
    apPAMI = 0.03 * sueldoBruto;
    cout << "El sueldo neto es " << sueldoNeto << endl;
    cout << "El aporte jubilatorio es " << apJub << endl;
    cout << "El aporte por obra social es " << apOS << endl;
    cout << "El aporte por PAMI es " << apPAMI << endl;
}

void ejercicio6() {
    double n1, n2, producto, suma;
    cout << "Ingrese el primer numero ";
    cin >> n1;
    cout << "Ingrese el segundo numero ";
    cin >> n2;
    producto = n1 * n2;
    suma = n1 + n2;
    cout << "El producto es " << producto << endl;
    cout << "La suma es " << suma << endl;
}

void ejercicio7() {
    double monto, entregado, vuelto;
    cout << "Ingrese el monto de la compra ";
    cin >> monto;
    cout << "Ingrese el dinero entregado ";
    cin >> entregado;
    vuelto = entregado - monto;
    cout << "El vuelto es " << vuelto << endl;
}

void ejercicio8() {
    int dias;
    cout << "Ingrese la cantidad de días: ";
    cin >> dias;
    int segundos = dias * 24 * 60 * 60;
    cout << "Hay " << segundos << " segundos en " << dias << " días.\n";
}

void ejercicio9() {
    int segundosTotales;
    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundosTotales;

    int semanas = segundosTotales / (7 * 24 * 60 * 60);
    segundosTotales %= 7 * 24 * 60 * 60;

    int dias = segundosTotales / (24 * 60 * 60);
    segundosTotales %= 24 * 60 * 60;

    int horas = segundosTotales / (60 * 60);
    segundosTotales %= 60 * 60;

    int minutos = segundosTotales / 60;
    segundosTotales %= 60;

    cout << "Eso equivale a:\n";
    cout << semanas << " semanas\n";
    cout << dias << " días\n";
    cout << horas << " horas\n";
    cout << minutos << " minutos\n";
    cout << segundosTotales << " segundos\n";
}

void ejercicio10() {
    double millas, kms;
    cout << "Ingrese la distancia en millas ";
    cin >> millas;
    kms = millas * 1.609;
    cout << "La distancia en kilómetros es " << kms << endl;
}

void ejercicio11() {

    double gradosF, gradosC;
    cout << "Ingrese la temperatura en grados Fahrenheit ";
    cin >> gradosF;
    gradosC = (gradosF - 32) / 1.8;
    cout << "La temperatura en grados Celsius es " << gradosC << endl;
}

void ejercicio12() {
    double galones, litros, monto;
    cout << "Ingrese los galones vendidos ";
    cin >> galones;
    litros = galones * 3.378541;
    monto = 42.32 * litros;
    cout << "El monto a pagar es " << monto << endl;
}

void ejercicio13() {
    double gradosF, gradosC;
    int N;
    cout << "Ingrese el numero de sonidos ";
    cin >> N;
    gradosF = N / 4.0 + 40;
    gradosC = (gradosF - 32) / 1.8;
    cout << "La temperatura en grados Fahrenheit es " << gradosF << endl;
    cout << "La temperatura en grados Celsius es " << gradosC << endl;
}

void ejercicio14() {
    int montoAPagar, dineroAbonado;
    cout << "Ingrese el monto a pagar: ";
    cin >> montoAPagar;
    cout << "Ingrese el dinero abonado: ";
    cin >> dineroAbonado;

    int vuelto = dineroAbonado - montoAPagar;

    int billetesDe50 = vuelto / 50;
    vuelto %= 50;

    int billetesDe20 = vuelto / 20;
    vuelto %= 20;

    int billetesDe10 = vuelto / 10;
    vuelto %= 10;

    int billetesDe5 = vuelto / 5;
    vuelto %= 5;

    int billetesDe1 = vuelto;

    cout << "El vuelto se puede dar con:\n";
    cout << billetesDe50 << " billetes de 50\n";
    cout << billetesDe20 << " billetes de 20\n";
    cout << billetesDe10 << " billetes de 10\n";
    cout << billetesDe5 << " billetes de 5\n";
    cout << billetesDe1 << " billetes de 1\n";
}

void ejercicio15() {
    double angGrad, angRad;
    cout << "Ingrese el ángulo en grados ";
    cin >> angGrad;
    angRad = angGrad / 180 * 3.1416;
    cout << "El ángulo en radianes es " << angRad << endl;
}

void ejercicio16() {
    double coorX, coorY, ang, mod;
    cout << "Ingrese la coordenada X ";
    cin >> coorX;
    cout << "Ingrese la coordenada Y ";
    cin >> coorY;
    ang = atan(coorY / coorX);
    mod = sqrt(coorX * coorX + coorY * coorY);

    cout << "El modulo es " << mod << endl;
    cout << "El ángulo es " << ang << endl;
}

void ejercicio17() {
    float cat1, cat2, hip;
    cout << "Ingrese el primer cateto ";
    cin >> cat1;
    cout << "Ingrese el segundo cateto ";
    cin >> cat2;
    hip = sqrt(cat1 * cat1 + cat2 * cat2);
    cout << "La Hipotenusa es " << hip << endl;
}

void ejercicio18() {
    double radio, area, perimetro;
    cout << "Ingrese el radio del circulo ";
    cin >> radio;
    area = M_PI * radio * radio;
    perimetro = 2 * M_PI * radio;
    cout << "El area es " << area << endl;
    cout << "El perimetro es " << perimetro << endl;
}

void ejercicio19() {
    double radio, altura, area, volumen;
    cout << "Ingrese el radio del cilindro ";
    cin >> radio;
    cout << "Ingrese la altura del cilindro ";
    cin >> altura;
    volumen = M_PI * radio * radio * altura;
    area = 2 * M_PI * radio * altura;
    cout << "El area es " << area << endl;
    cout << "El volumen es " << volumen << endl;
}

void ejercicio20() {
    float lado1, lado2, lado3, area, S;
    cout << "Ingrese el primer lado del triangulo ";
    cin >> lado1;
    cout << "Ingrese el segundo lado del triangulo ";
    cin >> lado2;
    cout << "Ingrese el tercer lado del triangulo ";
    cin >> lado3;
    S = (lado1 + lado2 + lado3) / 2;
    area = sqrt(S * (S - lado1) * (S - lado2) * (S - lado3));
    cout << "El area es " << area << endl;
}

void ejercicio21() {
    float x1, x2, y1, y2, distancia;
    cout << "Ingrese coordenada X del primer punto ";
    cin >> x1;
    cout << "Ingrese coordenada Y del primer punto ";
    cin >> y1;
    cout << "Ingrese coordenada X del segundo punto ";
    cin >> x2;
    cout << "Ingrese coordenada Y del segundo punto ";
    cin >> y2;
    distancia = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    cout << "El distancia es " << distancia << endl;
}

void ejercicio22() {
    float a, b, c, d, x1, x2;
    cout << "Ingrese el termino a ";
    cin >> a;
    cout << "Ingrese el termino b ";
    cin >> b;
    cout << "Ingrese el termino c ";
    cin >> c;
    d = b * b - 4 * a * c;
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    cout << "Primera raiz " << x1;
    cout << "Segunda raiz " << x2;
}

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
    return 0;
}
