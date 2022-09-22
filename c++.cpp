// 1. PRIMER PROGRAMA CON C++

// #include <iostream>

// using namespace std;

// int main()
// {
//     cout << "hola mundo";
//     return 0;
// }
// ---------------------------------------------------------------------------------------

// 2. TIPOS DE DATOS BASICOS

// #include <iostream>

// using namespace std;

// int main() {
//     int entero = 2;
//     cout<<entero<<endl;

//     float flotante = 2.2;
//     cout<<flotante<<endl;

//     char letra = 'a';
//     cout<<letra<<endl;

//     return 0;
// }
// ---------------------------------------------------------------------------------------

// 3. LECTURA O ENTRADA DE DATOS

// #include <iostream>

// using namespace std;

// int main() {
//     float numero;
//     cout<<"digite un numero: ";
//     cin>>numero;
//     cout<<"\nel numero que digito es: "<<numero;
//     return 0;
// }
// ---------------------------------------------------------------------------------------

// 4. OPERACIONES ARITMETICAS

/* 1. escribe  un programa que lea la entrada estandar dos numeros
y muestre la salida estandar su suma, resta, multuplicacion y division */

// #include <iostream>

// using namespace std;

// int main() {
//     int n1, n2, suma = 0, restar = 0, division = 0, multiplicar = 0;
//     cout<<"de un numero: "; cin>>n1;
//     cout<<"otro numero: "; cin>>n2;

//     restar = n1 - n2;
//     suma = n1 + n2;
//     division = n1 / n2;
//     multiplicar = n1 * n2;

//     cout<<"\nla suma es: "<<suma<<endl;
//     cout<<"\nla resta es: "<<restar<<endl;
//     cout<<"\nla division es: "<<division<<endl;
//     cout<<"\nla multiplicacion es: "<<multiplicar<<endl<<endl;
//     return 0;
// }

/* 2. escribe un programa que lea de la entrada estandar el precio de un producto
y muestre en la salida estandar el precio del producto y aplicarl el iva */

// #include <iostream>

// using namespace std;

// int main() {
//     int p1, p2, operacion = 0;
//     cout<<"precio del producto: "; cin>>p1;

//     operacion = p1 + 12;

//     cout<<"\nel precio total del producto es: "<<operacion<<endl;
// }
// ---------------------------------------------------------------------------------------

// 5. PEDIR DATOS AL USUARIO Y MOSTRARLOS EN PANTALLA

/* 3. realize un  programa que lea la entrada estandar los
siguientes datos de una persona:

edad: datode tipo entero
sexo: dato de tipo caracter
altura en metros: dato de tipo real

tras leer los datos, el programa debe mostrarlos en la salida estandar */

// #include <iostream>

// using namespace std;

// int main() {
//     int edad;
//     char sexo[10];
//     float altura;

//     cout<<"\ncual es tu edad: ";cin>>edad;
//     cout<<"cual es tu sexo: ";cin>>sexo;
//     cout<<"cual es tu altura: ";cin>>altura;

//     cout<<"\ntu edad es: "<<edad<<endl;
//     cout<<"tu sexo es: "<<sexo<<endl;
//     cout<<"tu altura es: "<<altura<<endl<<endl;

//     return 0;
// }

/* 4. ejecute el programa del ejercicio anterior con entradas erroneas y observe los
reesultados. por ejemplo introduzca un dato de tipo caracter cuando
se espera un dato de tipo entero */

// #include <iostream>

// using namespace std;

// int main() {
//     int edad;
//     char sexo[10];
//     float altura;

//     cout<<"\ncual es tu edad: ";cin>>edad;
//     cout<<"cual es tu sexo: ";cin>>sexo;
//     cout<<"cual es tu altura: ";cin>>altura;

//     cout<<"\ntu edad es: "<<edad<<endl;
//     cout<<"tu sexo es: "<<sexo<<endl;
//     cout<<"tu altura es: "<<altura<<endl<<endl;

//     return 0;
// }
// ---------------------------------------------------------------------------------------

// 6. EJERCICIO EXPRESIONES 1 C++

/* 1. ejercicio 1 */

// #include<iostream>

// using namespace std;

// int main() {
//     float a,b, resultado = 0;

//     cout<<"digite el valor de a: ";cin>>a;
//     cout<<"digite el valor de b: ";cin>>b;

//     resultado = (a/b) + 1;

//     cout.precision(2);
//     cout<<"\nel resultado es: "<<resultado<<endl;

//     return 0;
// }

// /* 2. ejercicio 2 */

// #include<iostream>

// using namespace std;

// int main() {
//     float a,b,c,d, resultado = 0;

//     cout<<"digite el valor de a: ";cin>>a;
//     cout<<"digite el valor de b: ";cin>>b;
//     cout<<"digite el valor de c: ";cin>>c;
//     cout<<"digite el valor de d: ";cin>>d;

//     resultado = (a+b) / (c+d);

//     cout.precision(2);
//     cout<<"\nel resultado es: "<<resultado<<endl;

//     return 0;
// }
// ---------------------------------------------------------------------------------------

// 7. EJERCICIO EXPRESIONES 2 C++

// 3. ejercicio 3

// #include<iostream>

// using namespace std;

// int main() {
//     float a,b,c,d,e,f, resultado = 0;

//     cout<<"digite el valor de a: ";cin>>a;
//     cout<<"digite el valor de b: ";cin>>b;
//     cout<<"digite el valor de c: ";cin>>c;
//     cout<<"digite el valor de d: ";cin>>d;
//     cout<<"digite el valor de e: ";cin>>e;
//     cout<<"digite el valor de f: ";cin>>f;

//     resultado = (a+(b/c)) / (d+(e/f));

//     cout.precision(2);
//     cout<<"\nel resultado es: "<<resultado<<endl;

//     return 0;
// }

// 4. ejercicio 4

// #include<iostream>

// using namespace std;

// int main() {
//     float a,b,c,d, resultado = 0;

//     cout<<"digite el valor de a: ";cin>>a;
//     cout<<"digite el valor de b: ";cin>>b;
//     cout<<"digite el valor de c: ";cin>>c;
//     cout<<"digite el valor de d: ";cin>>d;

//     resultado = (a+(b/(c-d)));

//     cout.precision(2);
//     cout<<"\nel resultado es: "<<resultado<<endl;

//     return 0;
// }
// ---------------------------------------------------------------------------------------

// 8. EJERCICIO INTERCAMBIO DE VALORES ENTRE 2 VARIABLES

/* 5. escriba un fragmento de programa que intercambie los valores de dos variables */

// #include<iostream>

// using namespace std;

// int main () {
//     int x,y,aux;
//     cout<<"digite el valor de x: "; cin>>x;
//     cout<<"digite el valor de y: "; cin>>y;

//     aux = x;
//     x = y;
//     y = aux;

//     cout<<"\n el valor de x es: "<<x<<endl;
//     cout<<"\n el valor de y es: "<<y<<endl<<endl;

//     return 0;
// }

/* ejercicio 6 */

// #include<iostream>

// using namespace std;

// int main() {
//     int n1,n2,n3,n4, operacion = 0;

//     cout<<"\ncual es la nota de del alumno 1: "; cin>>n1;
//     cout<<"cual es la nota de del alumno 2: "; cin>>n2;
//     cout<<"cual es la nota de del alumno 3: "; cin>>n3;
//     cout<<"cual es la nota de del alumno 4: "; cin>>n4;

//     operacion = (n1 + n2 + n3 + n4) / 4;

//     cout<<"\nel resultado de la nota media es: "<<operacion<<endl<<endl;

//     return 0;
// }
// ---------------------------------------------------------------------------------------

// 9. EJERCICIO DE PORCENTAJE DE NOTAS DE UN ALUMNO

/* 7. la calificacion final de un estudiante es la media ponderada de tres notas:
la nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un
60% y la nota de participacion que cuenta del 10% restante.
Escriba un programa que lea la entrada estandar las tres notas de un alumno
y escriba en la salida estandar su nota final */

// #include<iostream>

// using namespace std;

// int main() {
//     float practica, teorica, participacion, nota_final;
//     cout<<"\ncual es la nota de pratica: "; cin>>practica;
//     cout<<"\ncual es la nota teorica: "; cin>>teorica;
//     cout<<"\ncual es la nota de participacion: "; cin>>participacion;

//     practica *= 0.30; //practica = practica * 0.30
//     teorica *= 0.60;
//     participacion *= 0.10;

//     nota_final= practica + teorica + participacion;

//     cout<<"\n la nota final es: "<<nota_final<<endl<<endl;
//     return 0;
// }

/* 8. escriba un programa que lea de la entrada estandar los dos catetos de un
triangulo rectangulo y escriba en la salida estandar su hipotenusa */

// #include<iostream>

// #include<cmath>

// using namespace std;

// int main() {
//     float x, y, h, operacion = 0;

//     cout<<"\ncual es el valor del cateto x: "; cin>>x;
//     cout<<"\ncual es el valor del cateto y: "; cin>>y;

//     x *= x;
//     y *= y;
//     h = x + y;

//     operacion = sqrt(h);

//     cout.precision(3);
//     cout<<"\n el resultado es: "<<operacion;

//     return 0;
// }
// ---------------------------------------------------------------------------------------

/* 10. EJERCICIOS RAIZ CUADRADA Y ELEVACION */

/* 9. realice un programa que calcule el valor que toma la
siguiente funcion para unos valores dados de  x e y */

// #include<iostream>

// #include<cmath>

// using namespace std;

// int main() {
//     float x,y, funcion = 0;

//     cout<<"cual es el calor de x: "; cin>>x;
//     cout<<"cual es el calor de y: "; cin>>y;

//     funcion =  (sqrt(x)) / (pow(y, 2) -1);

//     cout.precision(2);
//     cout<<"el resultado es: "<<funcion;

//     return 0;
// }

/* 10. ejercicio 10 */

// #include<iostream>

// #include<math.h>

// using namespace std;

// int main () {
//     float a, b, c, funcion = 0;

//     cout<<"cual es el valor de a: "; cin>>a;
//     cout<<"cual es el valor de b: "; cin>>b;
//     cout<<"cual es el valor de c: "; cin>>c;

//     funcion = (-b - sqrt(a * a - 4*a*c))/(2/a);

//     cout<<"\nel resultado es: "<<funcion;
//     return 0;
// }
// ---------------------------------------------------------------------------------------

/* 11. LA SENTENCIA IF : CONDICIONALES SIMPLES */

// #include<iostream>

// using namespace std;

// int main() {

//     IGUALDAD

//     float numero, dato = 20;

//     cout<<"\ndigite el numero correcto: "; cin>>numero;

//     if (numero == dato) {
//         cout<<"\nes correcto"<<endl<<endl;
//     }
//     else {
//         cout<<"\nel numero es incorrecto"<<endl<<endl;
//     }

//     -----
//     DIFERENCIA

//     float numero, dato = 5;

//     cout<<"\ndigite un numero: "; cin>>numero;

//     if (numero != dato) {
//         cout<<"\nel numero no es 5"<<endl<<endl;
//     }
//     else {
//         cout<<"\nel numero es 5"<<endl<<endl;
//     }

//     return 0;

//     -----
//     MAYOR

//     float numero, dato = 5;

//     cout<<"\ndigite un numero: "; cin>>numero;

//     if (numero > dato) {
//         cout<<"\nel numero es mayor que"<<endl<<endl;
//     }
//     else {
//         cout<<"\nel numero es menor que 5"<<endl<<endl;
//     }

//     -----
//     MAYOR O IGUAL

//     float numero, dato = 5;

//     cout<<"\ndigite un numero: "; cin>>numero;

//     if (numero >= dato) {
//         cout<<"\nel numero es 5 o mayor a 5"<<endl<<endl;
//     }
//     else {
//         cout<<"\nel numero es menor que 5"<<endl<<endl;
//     }
// }
// ---------------------------------------------------------------------------------------

/* 12. SENTENCIA SWITCH : CONDICIONALES MULTIPLES */

// #include<iostream>

// using namespace std;

// int main() {
//     int numero;

//     cout<<"\nde un numero del 1 al 5: "; cin>>numero;

//     switch (numero)
//     {
//     case 1: cout<<"\nes el numero 1";
//         break;
//     case 2: cout<<"\nes el numero 2";
//         break;
//     case 3: cout<<"\nes el numero 3";
//         break;
//     case 4: cout<<"\nes el numero 4";
//         break;
//     case 5: cout<<"\nes el numero 5";
//         break;
//     default: cout<<"\nno esta en el rango de 1 a 5";
//         break;
//     }
//     return 0;
// }
// ---------------------------------------------------------------------------------------

/* 13. EJERCICIO DETERMINAR EL MAYOR DE 2 NUMERON */

/* 1. escriba un programa que lea dos numeros y deterine cual de ellos es el mayor */

// #include<iostream>

// using namespace std;

// int main() {
//     float numero1, numero2;

//     cout<<"\ndigite 2 numeros: "; cin>>numero1>>numero2;
//     if (numero1 == numero2) {
//         cout<<"\nlos dos numeros son iguales";
//     }
//     else if (numero1 > numero2) {
//         cout<<"\nel numero mayor es: "<<numero1;
//     }
//     else {
//         cout<<"\nel numero mayor es: "<<numero2;
//     }

//     return 0;
// }

/* 2. escriba un programa que lea tres numeros y determine cual de ellos es el mayor */

// #include<iostream>

// using namespace std;

// int main() {
//     int n1 = 0, n2 = 2, n3 = 9;

//     cout<<"\ndigite el valor de los tres numeros: "; cin>>n1>>n2>>n3;

//     if(n1 > n2 && n1 > n3 ) {
//         cout<<"\nel numero mayor es: "<<n1;
//     }
//     else if(n2 > n1 && n2 > n3 ) {
//         cout<<"\nel numero mayor es: "<<n2;
//     }
//     else if(n3 > n1 && n3 > n2 ) {
//         cout<<"\nel numero mayor es: "<<n3;
//     }
//     else if(n2 == n1 && n2 == n3 ) {
//         cout<<"\ntodos los numero son iguales: ";
//     }
//     else {
//         cout<<"no se a podido realizar";
//     }

//     return 0;
// }
// ---------------------------------------------------------------------------------------

/* 14.  DETERMINAR SI UN NUMERO ES PAR O IMPAR*/

// 3. determinar si un numero es par o impar

// #include<iostream>

// using namespace std;

// int main() {
//     int numero;

//     cout<<"cual es el numero: ";
//     cin>>numero;

//     if(numero%2 == 0) {
//         cout<<"el numero es par";
//     } else {
//         cout<<"el numero es impar";
//     }

//     return 0;
// }

// 4. determinar si un numero es negativo o positivo

// #include<iostream>

// using namespace std;

// int main () {
//     int numero;

//     cout<<"cual es el numero: ";
//     cin>>numero;

//     if (numero < 0) {
//         cout<<"\nel numero es negativo";
//     } else {
//         cout<<"\nel numero es positivo";
//     }
// }
// ---------------------------------------------------------------------------------------
// 15. DETERMINAR SIN UN DATO ES UNA VOCAL MINUSCULA

// 5. determinar si es una vocal miniscula

// #include<iostream>

// using namespace std;

// int main() {
//     char letra;

//     cout<<"digite un caracter: ";
//     cin>>letra;

//     switch(letra) {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u': cout<<"\nla letra es una vocal minuscula"; break;
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U': cout<<"\nla letra es una vocal mayuscula"; break;
//         default: cout<<"no se encontro la vocal"; break;
//     }

//     return 0;
// }

// 6. determinar si es una vocal miniscula, mayuscula o no es una vocal

// #include<iostream>

// using namespace std;

// int main() {
//     char letra;

//     cout<<"digite un caracter: ";
//     cin>>letra;

//     switch(letra) {
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u': cout<<"\nla letra es una vocal minuscula"; break;
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U': cout<<"\nla letra es una vocal mayuscula"; break;
//         default: cout<<"\nel caracter no es una vocal"; break;
//     }

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 16. EDAD EN RANGO DE 18 - 25

// 7. saber si la edad esta en el rango

// #include<iostream>

// using namespace std;

// int main() {
//     int edad;

//     cout<<"cual es tu edad: ";
//     cin>>edad;

//     if (edad >= 18 && edad <= 25 ) {
//         cout<<"\nestas en el rango de edad";
//     } else {
//         cout<<"\nestas fuera del rango de edad";
//     }

//     return 0;
// }

// 8. leer tres numeros y saber si el numero coincide con el establecido

// #include<iostream>

// using namespace std;

// int main() {
//     int numero1, numero2, numero3;
//     int numeroE = 10;

//     cout<<"digite los numeros: ";
//     cin>>numero1;cin>>numero2;cin>>numero3;

//     if (numero1 == numeroE | numero2 == numeroE | numero3 == numeroE) {
//         cout<<"uno de los numeros coincide";
//     } else {
//         cout<<"ninnguno de los numeros coincide";
//     }

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 17. NUMEROS ENTEROS A NUMEROS ROMANOS

// 9. de numeros normales a numero s romanos

// #include<iostream>

// using namespace std;

// //NUMERO = 2152

// int main() {
//     int numero, unidades, decenas, centenas, miles;

//     cout<<"ingrese un numero: ";
//     cin>>numero;

//     unidades = numero%10; numero /= 10;
//     decenas = numero%10; numero /= 10;
//     centenas = numero%10; numero /= 10;
//     miles = numero%10; numero /= 10;

//     switch (miles) {
//         case 1: cout<<"M"; break ;
//         case 2: cout<<"MM"; break;
//         case 3: cout<<"MMM"; break;
//     }

//     switch(centenas) {
//         case 1: cout<<"C"; break;
//         case 2: cout<<"CC"; break;
//         case 3: cout<<"CCC"; break;
//         case 4: cout<<"CD"; break;
//         case 5: cout<<"D"; break;
//         case 6: cout<<"DC"; break;
//         case 7: cout<<"DCC"; break;
//         case 8: cout<<"DCCC"; break;
//         case 9: cout<<"CM"; break;
//     }

//     switch(decenas) {
//         case 1: cout<<"X"; break;
//         case 2: cout<<"XX"; break;
//         case 3: cout<<"XXX"; break;
//         case 4: cout<<"XL"; break;
//         case 5: cout<<"L"; break;
//         case 6: cout<<"LX"; break;
//         case 7: cout<<"LXX"; break;
//         case 8: cout<<"LXXX"; break;
//         case 9: cout<<"XC"; break;
//     }

//     switch(unidades) {
//         case 1: cout<<"I"; break;
//         case 2: cout<<"II"; break;
//         case 3: cout<<"III"; break;
//         case 4: cout<<"IV"; break;
//         case 5: cout<<"V"; break;
//         case 6: cout<<"VI"; break;
//         case 7: cout<<"VII"; break;
//         case 8: cout<<"VIII"; break;
//         case 9: cout<<"IX"; break;
//     }

//     return 0;
// }

// 10. mostrar el mes que corresponde al numero

// #include<iostream>

// using namespace std;

// int main() {
//     int numero;

//     cout<<"cual es el numero del mes: ";
//     cin>>numero;

//     switch(numero) {
//         case 1: cout<<"el mes es enero"; break;
//         case 2: cout<<"el mes es febrero"; break;
//         case 3: cout<<"el mes es marzo"; break;
//         case 4: cout<<"el mes es abril"; break;
//         case 5: cout<<"el mes es mayo"; break;
//         case 6: cout<<"el mes es junio"; break;
//         case 7: cout<<"el mes es julio"; break;
//         case 8: cout<<"el mes es agosto"; break;
//         case 9: cout<<"el mes es septiembre"; break;
//         case 10: cout<<"el mes es octubre"; break;
//         case 11: cout<<"el mes es noviembre"; break;
//         case 12: cout<<"el mes es diciembre"; break;
//     }

//     return 0;
// }

// ejercicio 10 de manera mas optimizada y simplificada

// #include<iostream>

// using namespace std;

// string listaDeMeses[] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};

// int main() {
//     int numeroMes;

//     cout<<"cual es el numero del mes: ";
//     cin>>numeroMes;

//     numeroMes -= 1;

//     string mes = listaDeMeses[numeroMes];

//     cout<<mes;

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 18. CAJERO AUTOMATICO CON MENU

// 11. hacer un programa que simule un cajero automatico con un saldo inicial de 1000 dolares

// #include<iostream>

// using namespace std;

// int main() {
//     int opcion;
//     float saldo, sumaImgresar, sumaRetirar;

//     cout<<"\t| menu |";
//     cout<<"\ningresar dinero: 1";
//     cout<<"\nretirar dinero: 2";
//     cout<<"\nmotrar saldo: 3";
//     cout<<"\nsalir: 4";

//     while (true){
//         cout<<"\n\nque operacion desea realizar: ";
//         cin>>opcion;

//         if (opcion == 4) {
//             cout<<"vuelva pronto :)";
//             break;
//         }

//         switch(opcion) {
//             case 1: cout<<"\nsuma a ingresar: "; cin>>sumaImgresar;
//             if (sumaImgresar <= 0) {
//                 cout<<"no se aceptan valores iguales o menores a cero";
//                 break;
//             } else {
//                 saldo += sumaImgresar;;
//                 cout<<"saldo actual:"<<saldo;
//                 break;
//             }

//             case 2: cout<<"\nsuma a retirar: "; cin>>sumaRetirar;
//             if(sumaRetirar <= 0) {
//                 cout<<"no se aceptan valores iguales o menores a cero";
//                 break;
//             } else if (saldo == 0) {
//                 cout<<"no se puede retirar dinero ya que su saldo es 0";
//                 break;
//             } else if (sumaRetirar > saldo) {
//                 cout<<"saldo insuficiente";
//                 cout<<"saldo actual: "<<saldo;
//                 break;
//             } else {
//                 saldo -= sumaRetirar;
//                 cout<<"saldo actual: "<<saldo;
//                 break;
//             }

//             case 3: cout<<"\nsu saldo es: "<<saldo;
//             break;

//             default: cout<<"\nesa opcion no esta dentro ddel menu";
//             break;
//         }
//     }
//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 19. CICLOS O BUCLES

// WHILE
// piensa y despues actua

// #include<iostream>

// using namespace std;

// int main() {
//     int i;

//     i = 1;

//     // sumar 1 hasta llegar a 10
//     while (i <= 10) {
//         cout<<i<<endl;

//         i++;
//     }

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 20. CICLOS O BUCLES

// DO WHILE
// actua primero y despues piensa

// #include<iostream>
// se importa stdlib para utilizar la funcion system("pause")
// #include<cstdlib>

// using namespace std;

// int main() {
//     int i;

//     i = 1;

//     // sumar 1 hasta llegar a 10
//     do {
//         cout<<i<<endl;
//         i++;
//     } while (i <= 10);

//     // esta linea hace que no se cierre el programa automaticamente
//     system("pause");

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 21. CICLOS O BUCLES

// FOR

// #include<iostream>
// // se importa la libreria para utilizar la funcion getch()
// #include<conio.h>

// using namespace std;

// int main() {
//     for (int i = 1; i <= 10; i++){
//         cout<<i<<endl;
//     }

//     // esta linea hace que no se cierre el programa automaticamente
//     getch();

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 22. TABLA DE MULTIPLICAR

// 1. realizar un programa que muestre la tabla de multiplicar de un numero

// #include<iostream>
// #include<cstdlib>

// using namespace std;

// int main() {
//     int num;

//     cout<<"digite un numero: ";cin>>num;

//     for (int i = 0; i <= 10; i++){
//         cout<<num<<" * "<<i<<" = "<<num * i<<endl;
//     }

//     cout<<"\n\n";

//     system("pause");

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 23. SUMA DE CUADRADOS

// #include<iostream>

// using namespace std;

// int main() {
//     int suma = 0, cuadrado;

//     for (int i = 1; i <= 10; i++) {
//         cuadrado = i * i;

//         cout<<cuadrado<<endl;

//         suma += cuadrado;
//     }
//     cout<<"\n";
//     cout<<suma;

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 24. SUMAR DENTRO DE UNA RANGO

// #include<iostream>

// using namespace std;

// int main() {
//     int num, sum = 0;

//     while (true) {
//         cout<<"digite un numero: ";cin>>num;

//         if (num == 0 || num >=20 && num <= 30) {
//             break;
//         }

//         sum += num;
//     }

//     cout<<sum;

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 25. SUMAR 1+2+3+4+5+6....

// #include<iostream>
// #include<cmath>

// using namespace std;

// int main() {
//     int n, sum;

//     cout<<"digite un numero hasta el cual se desee sumar: ";cin>>n;

//     sum = n * (n + 1) / 2;

//     cout<<sum;

//     return 0;
// }

// 2. suma pero con impares

// #include<iostream>
// #include<cmath>

// using namespace std;

// int main() {
//     int n, sum;

//     cout<<"digite un numero hasta el cual se desee sumar: ";cin>>n;

//     for (int i = 1; i <= n; i+=2) {
//         sum += i;
//     }

//     cout<<sum;

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 26. FACTORIAL DE UN NUMERO

// #include<iostream>
// #include<cmath>

// using namespace std;

// int main() {
//     int n, sum = 1;

//     cout<<"digite un numero para hallar el factorial: ";cin>>n;

//     for (int i = 1; i <= n; i++) {
//         sum *= i;
//     }

//     cout<<sum;

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 27. SUMA DE 2**1,2**2,2**3....

// #include<iostream>
// #include<cmath>

// using namespace std;

// int main() {
//     int n, sum = 0;

//     cout<<"digite un numero hasta el cual potenciar al dos: ";cin>>n;

//     for (int i = 1; i <= n; i++) {
//         sum += pow(2, i);
//     }

//     cout<<sum;

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 28. SERIA DE FIBONACCI

// #include<iostream>
// #include<cmath>

// using namespace std;

// int main() {
//     int n, sum, x = 0, y = 1;

//     cout<<"cual es el numero de tope: ";cin>>n;

//     cout<<"1";
//     for (int i = 1; i < n; i++) {
//         sum = x + y;

//         cout<<sum;

//         x = y;

//         y = sum;
//     }

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 29. NUMERO MAGICO

// #include<iostream>
// #include<cstdlib>
// #include<ctime>

// using namespace std;

// int main() {
//     int numUser, numMachine, i = 0;

//     srand(time(NULL));

//     numMachine = 1 + rand() % (100);

//     cout<<numMachine<<endl;

//     while (true) {
//         cout<<"\ndigite un numero: ";cin>>numUser;

//         if (numUser == numMachine) {
//             cout<<"\n!!Adivinastes el numero!!"<<endl;
//             cout<<"\nNumero de intentos: "<<i;
//             break;
//         } else if (numUser > numMachine) {
//             cout<<"\nEL numero es menor"<<endl;
//         } else if (numUser < numMachine) {
//             cout<<"\nEL numero es mayor"<<endl;
//         }

//         i++;
//     }

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 30. CONCEPTO DE ARREGLO UNIDIMENCIONAL

// #include<iostream>

// using namespace std;

// int main() {
//     int numeros[] = {1, 2, 3, 4, 5};
//     char letras[] = {'a', 'b', 'c', 'd', 'e'};

//     for (int i = 0; i < 5; i++) {
//         cout<<numeros[i]<<endl;
//     }

//     for (int i = 0; i < 5; i++) {
//         cout<<letras[i]<<endl;
//     }

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 31. SUMA DE ELEMENTOS DE UNA ARREGLO

// #include<iostream>

// using namespace std;

// int main() {
//     int suma = 0, numeros[] = {1, 2, 3, 4, 5};

//     for (int x : numeros) suma += x;

//     cout<<suma;

//     return 0;
// }

// 2. multiplicacion de los elementos

// #include<iostream>

// using namespace std;

// int main() {
//     int suma = 1, numeros[] = {1, 2, 3, 4, 5};

//     for (int x : numeros) suma *= x;

//     cout<<suma;

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 32. MOSTRAR LOS ELEMENTOS CON SUS INDICES

// #include<iostream>

// using namespace std;

// int main() {
//     int n, numeros[100];

//     cout<<"Digite el numero de elementos: ";cin>>n;

//     for (int i = 0; i < n; i++) {
//         cout<<"Digite un numero: ";cin>>numeros[i]; //guardando los elementos
//     }

//     for (int i = 0; i < n; i++) {
//         cout<<i<<" --> "<<numeros[i]<<endl;
//     }

//     return 0;
// }

// 2.mostrar el orden inverso de un array

// #include<iostream>

// using namespace std;

// int main() {
//     int sizeArray, numeros[] = {1, 2, 3, 4, 5};

//     sizeArray = sizeof(numeros)/sizeof(*numeros);

//     cout<<"Array original: "<<endl;
//     for (int x : numeros) cout<<x<<" ";

//     cout<<"\n\n";

//     cout<<"Array invertido: "<<endl;
//     for (int i = sizeArray - 1; i >= 0; i--) {
//         cout<<numeros[i]<<" ";
//     }

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 33. SABER EL NUMERO MAYOR DE UN ARRAY

// #include<iostream>

// using namespace std;

// int main() {
//     int numeros[100], n, mayor = 0;

//     cout<<"cual es el numero de elementos: ";cin>>n;

//     for (int i = 0; i < n; i++) {
//         cout<<"digite un numero: ";cin>>numeros[i];

//         if(numeros[i] > mayor) mayor = numeros[i] ;
//     }

//     cout<<"\nEl mayor numero del array es: "<<mayor;

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 34. AGREGAR CONTEDNIDO DE DOS ARRAY EN UNO SOLO

// #include<iostream>

// using namespace std;

// int main() {
//     char array1[] = {'q', 'w', 'e', 'r', 't'};
//     char array2[] = {'a', 'b', 'c', 'd', 'e'};

//     // longitudes de los 2 primeros arrays
//     int length1 =sizeof(array1)/sizeof(*array1);
//     int length2 =sizeof(array2)/sizeof(*array2);

//     char fullArray[length1 + length2];

//     // longitud del 3 array
//     int length3 =sizeof(fullArray)/sizeof(*fullArray);

//     for (int i = 0; i < length1; i++) {
//         fullArray[i] = array1[i];
//     }

//     for (int i = length2; i < length3; i++) {
//         fullArray[i] = array2[i - 5];
//     }

//     for (char letra : fullArray) cout<<letra<<endl;

//     return 0;
// }

// 2. copiar los elementos de un array y doblarlos en otro array

// #include<iostream>

// using namespace std;

// int main() {
//     int nums[] = {1,2,3,4,5,6,7,8,9,10};

//     int sizeNums = sizeof(nums)/sizeof(*nums);

//     int dobleNums[sizeNums];

//     // imprimir el array original
//     cout<<"array original: [ ";
//     for (int num : nums) cout<<num<<" ";
//     cout<<"]";

//     // copiar y multipliccar los elementos en "dobleNums"
//     for (int i = 0; i < sizeNums; i++) {
//         dobleNums[i] = nums[i] * 2;
//     }

//     // imprimir el array doble
//     cout<<"\n\narray doble: [ ";
//     for(int numDouble : dobleNums) cout<<numDouble<<" ";
//     cout<<"]";

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 35. CONCEPTO DE MATRIZ O TABLA (MATRICES)

// #include <iostream>

// using namespace std;

// int main()
// {
//     // 2 filas -, 3 columnas |
//     int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};

//     // recorrer las filas
//     for (int f = 0; f < 2; f++)
//     {
//         // imprimir los nimeros que estan en la columna
//         for (int c = 0; c < 3; c++)
//         {
//             cout << matriz[f][c] << " ";
//         }

//         // linea para mostrar los sub arrays en forma de matriz
//         cout << endl;
//     }

//     return 0;
// }

// ---------------------------------------------------------------------------------------
// 36. RELLENAR MATRIZ

// #include <iostream>

// using namespace std;

// int main()
// {
//     int F, C;

//     cout << "Digite el numero de columnas y de filas: "; cin >> F >> C;

//     int mat[F][C];

//     for (int f = 0; f < F; f++)
//     {
//         for (int c = 0; c < C; c++)
//         {
//             cout << "Digite un numero en: [" << f << "]"<< "[" << c << "]: ";cin >> mat[f][c];
//         }
//     }


//     for (int f = 0; f < F; f++)
//     {
//         for (int c = 0; c < C; c++)
//         {
//             cout << mat[f][c] << " ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// 2. rellenar una matriz y hallar la diagonal principal

// #include <iostream>
// #include <ctime>
// #include<cstdlib>

// using namespace std;

// int main()
// {
//     srand(time(NULL));

//     int mat[3][3];

//     // llenar la matriz
//     for (int f = 0; f < 3; f++)
//     {
//         for (int c = 0; c < 3; c++)
//         {
//             mat[f][c] = rand() % 10;
//         }
//     }


//     for (int f = 0; f < 3; f++)
//     {
//         for (int c = 0; c < 3; c++)
//         {
//             cout << mat[f][c] << " ";
//         }
//         cout<<endl;
//     }

//     cout<<"\nLa diagonal principal es: "<<endl<<endl;

//     for (int d = 0; d < 3; d++)
//     {
//         cout << mat[d][d] << endl;
//     }

//     return 0;
// }
// ---------------------------------------------------------------------------------------
// 37. COPIAR MATRIZ A OTRA 

// #include <iostream>
// #include <ctime>
// #include<cstdlib>

// using namespace std;

// int main()
// {
//     int mat[2][2] = {{1, 2}, {10, 20}};
//     int copy[2][2];

//     // recorrer mat
//     for (int f = 0; f < 2; f++)
//     {
//         for (int c = 0; c < 2; c++)
//         {   
//             // copiar los elementos de mat a copy
//             copy[f][c] = mat[f][c];

//             // imprimir los elementos de copy
//             cout<<copy[f][c]<<" ";
//         }
//         cout<<"\n";
//     }
    
//     return 0;
// }


// 2. rellenar con numero aleatorios y copiar a otra

// #include <iostream>
// #include <ctime>
// #include<cstdlib>

// using namespace std;

// int main()
// {
//     srand(time(NULL));

//     int F, C;

//     cout << "Digite el numero de columnas y de filas: "; cin >> F >> C;

//     int mat[F][C];
//     int copy[F][C];

//     // llenar la matriz con aleatorios
//     for (int f = 0; f < 3; f++)
//     {
//         for (int c = 0; c < 3; c++)
//         {
//             mat[f][c] = rand() % 10;
            
//             // copiar los elementos de mat a copy
//             copy[f][c] = mat[f][c];

//             // imprimir los elementos de copy
//             cout<<copy[f][c]<<" ";
//         }
//         cout<<"\n";
//     }

//     return 0;
// }