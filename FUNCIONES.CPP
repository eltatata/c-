// DEVOLVER VARIOS VALORES EN UNA FUNCION

// #include <iostream>

// using namespace std;

// int * sumANDmultiplication(int n1, int n2) {
//     static int res[2] = {n1 + n2, n1 * n2};

//     return res;
// }

// int main() {
//     int * resultados = sumANDmultiplication(8, 2);

//     for (int i = 0; i < 2; i++) cout << resultados[i] << " ";

//     return 0;
// }
// --------------------------------------------------------------------------------

// FUNCIONES + ARRAYS: devlover una array ordenado

// #include <iostream>

// using namespace std;

// int * sort(int *array, int size) {
//     static int * arraySort = new int[size];

//     for (int i = 0; i < size; i++)
//     {
//         arraySort[i] = array[i];
//     }
    
//     // ordenar el array  de menor a mayor
//     int aux;

//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arraySort[i] > arraySort[j])
//             {
//                 aux = arraySort[i];
//                 arraySort[i] = arraySort[j];
//                 arraySort[j] = aux;
//             }
//         }
//     }

//     return arraySort;
// }

// int main() {
//     int array[5] = {1,3,2,5,4};

//     int * arrayOrdenado = sort(array, 5);

//     for (int i = 0; i < 5; i++) cout << arrayOrdenado[i] << " ";

//     return 0;
// }
// --------------------------------------------------------------------------------

// 3. Diseñar un procedimiento en C++ que calcule e imprima el área y el perímetro de una
// circunferencia. Invocar este procedimiento desde un programa principal que lee el radio
// de una circunferencia. EN PROCEDIMIENTO

// #include <iostream>
// #include <cmath>
// #include <cstring>

// using namespace std;

// void areaANDperimeter(float radio) {
//     cout<<"\nEl area de la circunferencia es: " << (M_PI * pow(radio, 2)) << " Y el perimetro es: " << (radio * 2 * M_PI); 
// }

// int main() {
//     cout.precision(2);
//     cout.setf(ios::fixed);

//     float radio;

//     cout<<"Cual es el valor del radio: ";cin>>radio;

//     areaANDperimeter(radio);

//     return 0;
// }
// --------------------------------------------------------------------------------

// 3. Diseñar un procedimiento en C++ que calcule e imprima el área y el perímetro de una
// circunferencia. Invocar este procedimiento desde un programa principal que lee el radio
// de una circunferencia. EN FUNCION

// #include <iostream>
// #include <cmath>

// using namespace std;

// float * areaANDperimeter(float radio) {
//     static float res[2] = {(M_PI * pow(radio, 2)), (radio * 2 * M_PI)};

//     return res;
// }

// int main() {
//     cout.precision(2);
//     cout.setf(ios::fixed);

//     int r;

//     cout << "Cual es el valor de radio: ";cin>>r;

//     cout << "\nEl area de la circunferencia es: " << areaANDperimeter(r)[0] << " Y el perimetro es: " << areaANDperimeter(r)[1];

//     return 0;
// }
// --------------------------------------------------------------------------------

// 4. Crear una función en C++ que retorne la temperatura media de un día a partir de la
// temperatura máxima y mínima. Crear un programa principal donde se vaya pidiendo la
// temperatura máxima y mínima de N cantidad de días y vaya mostrando la temperatura
// media a través de la función.

// #include <iostream>

// using namespace std;

// float tempMedium (float may, float men) {
//     return (may + men) / 2;
// }

// int main() {
//     cout.precision(2);
//     cout.setf(ios::fixed);

//     int N;

//     cout << "Cual es la cantidad de dias: "; cin >> N;

//     for (int i = 0; i < N; i++) {
//         float may, men;

//         cout << "\nIngrese la temperatura maxima y la temperatura minima en °C: "; cin >> may >> men;

//         cout << "La temperatura media es: " << tempMedium(may, men) << "°c" << endl;
//     }
    
//     return 0;
// }
// --------------------------------------------------------------------------------

// 5. Diseñar un programa en C++ que permita ingresar una serie de medidas en metros y a
// través de un subprograma realice la conversión a C-Centímetros, K-Kilómetros y PPulgadas. 
// El programa debe preguntar si desea leer otro número y continuar leyendo si
// responde ‘S’, terminando cuando se responda ‘N’.

// #include <iostream>

// using namespace std;

// void conversion (int M) {
//     cout << "\nLos resultados de conversion son: " << endl;
//     cout << "Centimetros: " << (M * 100) << endl;
//     cout << "Kilometros: " << (M / 1000.0) << endl;
//     cout << "Pulgadas: " << (M * 39.37) << endl;
// }

// int main() {
//     cout.precision(2);
//     cout.setf(ios::fixed);

//     while (true) {
//         int M;

//         cout << "\nIngrese el valor de una medida en metros: "; cin >> M;

//         conversion(M);

//         char question;
//         cout << "\nTerminar? (S/N) "; cin >> question;
//         if (question == 'S' || question == 's') break;
//     }
    
//     return 0;
// }
// --------------------------------------------------------------------------------

// 6. Crear un subprograma en C++ llamado Login, que recibe un nombre de usuario y una
// contraseña y retorne Verdadero si el nombre de usuario es “usuario1” y la contraseña
// es “abcde”. Además recibe el número de intentos que se ha intentado hacer login y si
// no se ha podido hacer login incremente este valor. Crear un programa principal donde
// se pida un nombre de usuario y una contraseña e intente hacer login, teniendo en cuenta
// que sólo tenemos 3 intentos

// #include <iostream>
// #include <cstring>

// using namespace std;

// bool login(string user, string password) {
//     if (user == "usuario1" && password == "abcde") return true;
//     else return false;
// }

// int main() {
//     string user, password; 

//     for (int i = 0; i < 3; i++) {
//         cout << "Ingrese su usuario: "; cin >> user; 
//         cout << "Ingrese su contraseña: "; cin >> password; 

//         if (login(user, password)) {
//             cout << "Sesion iniciada";
//             break;
//         } else {
//             cout << "Credenciales incorrectas, numero de intentos restantes: " << 3 - (i + 1) << endl << endl;
//         }
//     } 
    
//     return 0;
// }
// --------------------------------------------------------------------------------
// CON TRY CATCH

// #include <iostream>
// #include <cstring>

// using namespace std;

// string login(string user, string password) {
//     // if (user == "usuario1" && password == "abcde") return true;
//     // else return false;

//     try {
//         if (user != "usuario1") throw "Usuario incorrecto";
//         else if (password != "abcde") throw "Contraseña incorrecta";
//         else throw "Credenciales incorrectas";

//         return "Sesion iniciada";
//     } catch(string errorMsg) {
//         return errorMsg; 
//     }
// }

// int main() {
//     string user, password; 

//     for (int i = 0; i < 3; i++) {
//         cout << "Ingrese su usuario: "; cin >> user; 
//         cout << "Ingrese su contraseña: "; cin >> password; 

//         string res = login(user, password);

//         if (res == "Sesion iniciada") {
//             cout << res;
//             break;
//         } else {
//             cout << res << 3 - (i + 1) << endl << endl;
//         }
//     } 
    
//     return 0;
// }
// --------------------------------------------------------------------------------

// 7. Una persona es apta para prestar el servicio militar obligatorio, cuando: es mayor de 18
// años, menor de 25 años, nacionalidad colombiana y género masculino. Realizar un 
// subprograma en C++ que permita determinar si una persona es apta o no para prestar
// el servicio militar. En el programa principal se debe permitir evaluar N personas y al
// final, mostrar esta información consolidada: Cantidad de personas evaluadas, cantidad
// de mujeres evaluadas y cantidad de hombres evaluados y cantidad de aptos. 

// #include <iostream>
// #include <cstring>

// using namespace std;

// int evaluation(int age, string nationality, string sex) {
//     if((age >= 18 && age <= 25) && (nationality == "colombiana" || nationality == "Colombiana") && (sex == "masculino" || sex == "Masculino")) {
//         return 1;
//     } else {
//         return 0;
//     }
// }

// int main() {
//     int N;
//     int age; string nationality; string sex;

//     int cantWom = 0, cantMen = 0, cantApt = 0;

//     cout << "Digite numero de personas a evaluar: "; cin >> N;

//     for (int i = 0; i < N; i++) {
//         cout << "\nCual es la edad de la persona: "; cin >> age;
//         cout << "Cual es la nacionalidad de la persona: "; cin >> nationality;
//         cout << "Cual es el sexo de la persona: "; cin >> sex;

//         if (sex == "masculino" || sex == "Masculino") cantMen++;
//         else if (sex == "femenino" || sex == "Femenino") cantWom++;

//         cantApt += evaluation(age, nationality, sex);
//     }

//     cout << "\nCantidad de personas: " << N << endl;
//     cout << "Cantidad de personas aptas: " << cantApt << endl;
//     cout << "Cantidad de hombres: " << cantMen << endl;
//     cout << "Cantidad de mujeress: " << cantWom << endl;

//     return 0;
// }
// --------------------------------------------------------------------------------

// 8. Una empresa ha decidido, realizar aumentos de salario a sus trabajadores de acuerdo
// a las siguientes categorías: Sindicalizado 20%, De confianza 10%, Alto directivo 5% y
// Ejecutivo 0%. Se pide desarrollar un subprograma en C++ que permita ingresar los
// datos de varios empleados y calcule los nuevos salarios, así como identificar el salario
// mayor, el salario menor, el mayor aumento, el promedio de nuevos salarios y el
// promedio de aumentos.