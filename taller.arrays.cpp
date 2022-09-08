// 1

// #include<iostream>

// using namespace std;

// int main() {
//     int A[10], B[10], nA = 0, nB = 30;

//     for (int i = 0; i < 10; i++) {
//         nA += 5;
//         A[i] = nA;
//     }

//     for (int i = 0; i < 10; i++) {
//         B[i] = nB;
//         nB -= 3;
//     }

//     for (int n : A) cout<<n<<" ";

//     cout<<"\n\n";

//     for (int n : B) cout<<n<<" ";

//     return 0;
// }
// -------------------------------------------------------------------------------
// 2

// #include<iostream>

// using namespace std;

// int main() {
//     int array[20];

//     for (int i = 1; i <= 20; i++) {
//         cout<<i<<" ";

//         if(i%2 == 0) array[i - 1] = 0;
//         else array[i - 1] = 1; 
//     }

//     cout<<"\n\n";

//     for (int n : array) cout<<n<<" ";

//     return 0;
// }
// -------------------------------------------------------------------------------
// 3

// #include<iostream>
// #include<cstdlib>
// #include<ctime>

// using namespace std;

// int main() {
//     srand(time(NULL));
//     int n, randomNum;

//     cout<<"cual es el numero de elementos: ";cin>>n;

//     int array[n];

//     cout<<"\n";

//     // agregar los numeros al array
//     for (int i = 0; i < n; i++) {
//         randomNum = 10 + rand() % (91);

//         array[i] = randomNum;
//     }

//     // imprimir el array
//     for (int num : array) cout<<num<<" ";

//     cout<<"\n\n";

//     // imprimir posiciones pares
//     for (int i = 2; i < n; i+= 2) {
//         cout<<array[i]<<" ";
//     }

//     // covertir los multiplos de 3 en 0
//     for (int i = 0; i < n; i++) {
//         if (array[i]%3 == 0) array[i] = 0; 
//     }

//     cout<<"\n\n";

//     for (int i = n - 1; i >= 0; i--) {
//         cout<<array[i]<<" ";
//     }
    
//     return 0;
// }
// -------------------------------------------------------------------------------
// 4

// #include<iostream>
// #include <iomanip>

// using namespace std;

// int main() {
//     cout.precision(2);
//     cout.setf(ios::fixed);

//     int NUM[] = {1, 2, 3, 4, 5, -6, -7, -8, -9, 10, 11, 12, 13, 14, 15};
//     int length = sizeof(NUM)/sizeof(*NUM);
    
//     int amount = 0, sum = 0;
//     int may = 0, men = 999;

//     float prom, porc;

//     bool ban = false;

//     // saber la suma y la cantidad de positivos
//     for (int n : NUM) {
//         if (n > 0) {
//             amount++,
//             sum += n;
//             // cout<<n<<" ";
//         }

//         // saber cual es el mayor y el menor numero
//         if (n > may) may = n;
//         if (n < men) men = n;

//         if (n%3 == 0 && n%5 == 0) ban = true;
//     }

//     // saber el promedio y el porcentaje de positivos
//     prom = sum/amount;
//     porc = (float)amount/length*100;

//     cout<<amount<<" "<<sum<<endl;
//     cout<<prom<<" "<<porc<<endl;
//     cout<<may<<" "<<men<<endl;
//     ban? cout<<"Hay un numero multiplo de 3 y de 5" : cout<<"No hay un numero multiplo de 3 y de 5";
    
//     return 0;
// }
// -------------------------------------------------------------------------------
// 5

// #include<iostream>
// #include <iomanip>

// using namespace std;

// int main() {
//     cout.precision(2);
//     cout.setf(ios::fixed);

//     int x;
//     float div = 1.2, array[11];

//     int length = sizeof(array)/sizeof(*array);

//     cout<<"Digite el valor de X: ";cin>>x;

//     for (int i = 0; i < length; i++) {
//         array[i] = x / div;
//         div += 0.2;
//     }

//     for(float n : array) cout<<n<<" ";
    
//     return 0;
// }
// -------------------------------------------------------------------------------
// 6

// #include<iostream>

// using namespace std;

// int main() {
//     int M, FIBO[10], SUCE[10], nSUCE = 2, sum = 0, x = 0, y = 1;

//     cout<<"Digite la longitud de los arrays: ";cin>>M;

//     // llenar el array SUCE
//     for (int i = 0; i < M; i++) {
//         SUCE[i] = nSUCE;
//         nSUCE = SUCE[i] * 2;
//         cout<<SUCE[i]<<" ";
//     }
    
//     cout<<"\n";

//     // llenar el array FIBO
//     for (int i = 0; i < M; i++) {
//         FIBO[i] = sum;
//         cout<<FIBO[i]<<" ";
//         sum = x + y; 
//         x = y;
//         y = sum; 
//     }

//     return 0;
// }
// -------------------------------------------------------------------------------

// EJERCICIOS DE HACKERRANK

// Los mejores y peores puntajes

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int main() {
//     int *V = new int[25];
//     int *better = new int[5];
//     int *bad = new int[5];
//     int aux;

//     for (int i = 0; i < 25; i++) {
//         cin>>V[i];
//     }

//     for (int i = 0; i < 25 - 1; i++)
//     {
//         for (int j = i + 1; j < 25; j++)
//         {
//             if (V[i] > V[j])
//             {
//                 aux = V[i];
//                 V[i] = V[j];
//                 V[j] = aux;
//             }
//         }
//     }

//     for (int i = 25 - 1; i >= 20; i--) {
//         better[i] = V[i];
//         cout<<better[i]<<" ";
//     }

//         cout<<"\n";

//     for (int i = 0; i < 5; i++) {
//         bad[i] = V[i];
//         cout<<bad[i]<<" ";
//     }

//     return 0;
// }
// -------------------------------------------------------------------------------
// Unión de países americanos

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;


// int main() {
//     int LS, LC, LN;

//     cin>>LS>>LC>>LN;

//     string * S = new string[LS];
//     string * C = new string[LC];
//     string * N = new string[LN];

//     int length = LS + LC + LN;

//     string * V = new string[length];

//     int j = 0;
//     string aux;

//     getline(cin, S[0]);

//     for (int i = 0; i < LS; i++)
//     {
//         getline(cin, S[i]);
//         V[j] = S[i];
//         j++;
//     }

//     for (int i = 0; i < LC; i++)
//     {
//         getline(cin, C[i]);
//         V[j] = C[i];
//         j++;
//     }

//     for (int i = 0; i < LN; i++)
//     {
//         getline(cin, N[i]);
//         V[j] = N[i];
//         j++;
//     }

//     for (int i = 0; i < length - 1; i++)
//     {
//         for (int j = i + 1; j < length; j++)
//         {
//             if (V[i] > V[j])
//             {
//                 aux = V[i];
//                 V[i] = V[j];
//                 V[j] = aux;
//             }
//         }
//     }

//     for (int i = 0; i < length; i++) {
//         cout<<V[i]<<" ";
//     }

//     return 0;
// }
// -------------------------------------------------------------------------------
// Ordenamiento burbuja simple

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <iomanip>
// using namespace std;


// int main() {
//     cout.precision(1);
//     cout.setf(ios::fixed);

//     float * V = new float[10], aux;

//     for (int i = 0; i < 10; i++) {
//         cin>>V[i];
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = i + 1; j < 10; j++)
//         {
//             if (V[i] > V[j])
//             {
//                 aux = V[i];
//                 V[i] = V[j];
//                 V[j] = aux;
//             }
//         }
//         cout<<V[i]<<" ";
//     }
    
//     return 0;
// }
// -------------------------------------------------------------------------------
// Estudiantes aceptados en la U

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     string *vec = new string[n];
//     string name;

//     bool band = false;
    
//     for(int i = 0; i < n; i++) {
//         cin>>vec[i];
//     }
    
//     cin>>name;
    
//     for (int i = 0; i < n; i++) {
//         if(vec[i] == name) band = true;
//     }
    
//     if(band) cout<<"ACEPTADO";
//     else cout<<"RECHAZADO";
    
//     return 0;
// }
// -------------------------------------------------------------------------------
// Mejor al promedio

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <iomanip>
// #include <algorithm>
// using namespace std;


// int main() {
//     cout.setf(ios::fixed);

//     int N, myProm, contador = 0, sumProms = 0;

//     float prom;

//     cin>>N>>myProm;

//     int * proms  = new int[N];

//     for (int i = 0; i < N; i++) {
//         cin>>proms[i];
//         sumProms += proms[i];
//         contador++;
//     }

//     prom = (float)sumProms / contador;

//     cout.precision(2);

//     if (myProm > prom) cout<<"SI"<<" "<<myProm - prom;
//     else cout<<"NO";


//     return 0;
// }
// -------------------------------------------------------------------------------
// Goleadores del fútbol

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <cstring>
// #include <algorithm>
// using namespace std;


// int main() {
//     int P;

//     bool band1 = false;
//     bool band2 = false;

//     cin>>P;

//     string * actual = new string[P];
//     string * anterior = new string[P];

//     int j = 0;

//     getline(cin, actual[0]);

//     for (int i = 0; i < P; i++)
//     {
//         getline(cin, actual[i]);
//         j++;
//     }
        
//     for (int i = 0; i < P; i++)
//     {
//         getline(cin, anterior[i]);
//         j++;
//     }

//     // el nombre de el jugador a buscar
//     string playerName;
//     getline(cin, playerName);
    
//     for (int i = 0; i < j; i++)
//     {
//         if(actual[i] == playerName) band1 = true;
//         if(anterior[i] == playerName) band2 = true;
//     }

//     if(band1 && band2) cout<<"SELECCIONADO PARA EL EQUIPO TITULAR";
//     else cout<<"NO SELECCIONADO"; 

//     return 0;
// }
// -------------------------------------------------------------------------------
// Estadísticas empresa Avianca

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <iomanip>

// using namespace std;


// int main() {
//     cout.precision(2);
//     cout.setf(ios::fixed);

//     int N, total = 0, may = 0, men = 999, contador = 0, posMay, posMen;
    
//     cin>>N;

//     int * horas = new int[N];

//     for (int i = 0; i < N; i++)
//     {
//         cin>>horas[i];
        
//         if (horas[i] > may && i%2 == 0)  {
//             may = horas[i];
//             posMay = i + 1;
//         }
//         if (horas[i] < men && i%2 != 0) {
//             men = horas[i];
//             posMen = i + 1;
//         }

//         contador++;
//         total += horas[i];
//     }

//     cout<<total<<endl;
//     cout<<(float)total/contador<<endl;
//     cout<<men<<" "<<posMen<<endl;
//     cout<<may<<" "<<posMay<<endl;

//     return 0;
// }
// -------------------------------------------------------------------------------
// HACKERRANK

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <iomanip>
// #include <algorithm>
// using namespace std;


// int main() {
//     int * A = new int[10];
//     int * B = new int[10];
//     int * sum = new int[10];

//     int suma = 0;

//     for (int i = 0; i < 10; i++) {
//         cin>>A[i];
//         // cout<<A[i];
//     }

//     for (int i = 0; i < 10; i++) {
//         cin>>B[i];
//         // cout<<B[i];
//     }

//     for (int i = 0; i < 10; i++) {
//         sum[i] = pow(A[i], 2) - pow(B[i], 3);
//         cout<<sum[i]<<" ";
//         suma += sum[i];
//     }

//     cout<<"\n";

//     cout<<suma;


//     return 0;
// }
// -------------------------------------------------------------------------------

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <iomanip>

// using namespace std;


// int main() {
//     cout.precision(2);
//     cout.setf(ios::fixed);

//     int N, pares = 0, impares = 0, total = 0, may = 0, men = 999, contador = 0, posMay, posMen;
    
//     cin>>N;

//     int * horas = new int[N];

//     for (int i = 0; i < N; i++)
//     {
//         cin>>horas[i];
        
//         if(horas[i]%2 == 0) pares++;
//         else impares++;

//         if (horas[i] > may && i%2 == 0)  {
//             may = horas[i];
//             posMay = i;
//         }
//         if (horas[i] < men && i%2 != 0) {
//             men = horas[i];
//             posMen = i;
//         }

//         contador++;
//         total += horas[i];
//     }

//     cout<<pares<<" "<<(float)pares/contador*100<<"%"<<endl;
//     cout<<impares<<" "<<(float)impares/contador*100<<"%"<<endl;
//     cout<<total<<endl;
//     cout<<(float)total/contador<<endl;
//     cout<<may<<" "<<posMay<<endl;
//     cout<<men<<" "<<posMen<<endl;

//     return 0;
// }
// -------------------------------------------------------------------------------

// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;


// int main() {
//     int X, Y;
//     cin>>X>>Y;
//     bool band = false;
//     string * A = new string[X];
//     string * B = new string[Y];

//     for (int i = 0; i < X; i++)
//     {
//         cin>>A[i];
//     }
    

//     for (int i = 0; i < Y; i++)
//     {
//         cin>>B[i];
//     }

//     // for (int i = 0; i < count; i++) {
//     //     /* code */
//     // }

//     for (int i = 0; i < X + Y - 1; i++)
//     {
//         for (int j = i + 1; j < X + Y; j++)
//         {
//             if (A[i] == B[j])
//             {
//                 band = true;
//             }
//         }
//     }
    
//     if(band == true) cout<<"NO DEBE SER MULTADO.";
//     else cout<<"buenas";


//     for (int i = 0; i < X; i++)
//     {
//         /* code */
//     }

//     for (int i = 0; i < Y; i++)
//     {
//         /* code */
//     }
    
    
//     return 0;
// }