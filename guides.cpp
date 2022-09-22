// ORDENAMIENTO BURBUJA

// ORDERNAR DE MENOR A MAYOR

// #include<cstdlib>
// #include<ctime>
// #include <iostream>

// using namespace std;

// int main() {

//     srand(time(NULL));

//     int *V = new int[10];
//     int n = 10, aux;

//     // llenar el array
//     for (int i = 0; i < n; i++) {
//         V[i] = 0 + rand() % (11);
//     }

//     // ordenar el array  de menor a mayor
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (V[i] > V[j])
//             {
//                 aux = V[i];
//                 V[i] = V[j];
//                 V[j] = aux;
//             }
//         }
//     }

//     // imprimir los valores del array
//     for (int i = 0; i < n; i++) {
//         cout<<V[i]<<" ";
//     }

// }
// --------------------------------------------------
// ORDENAR DE MAYOR A MENOR

// #include<cstdlib>
// #include<ctime>
// #include <iostream>

// using namespace std;

// int main() {

//     srand(time(NULL));

//     int *V = new int[10];
//     int n = 10, aux;

//     // llenar el array
//     for (int i = 0; i < n; i++) {
//         V[i] = 0 + rand() % (11);
//     }

//     // ordenar el array de mayor a menor
//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < n - 1; j++)
//         {
//             if(V[j] < V[j + 1])
//             {
//             aux = V[j];
//             V[j] = V[j + 1];
//             V[j + 1] = aux;
//             }
//         }
//     }

//     // imprimir los valores del array
//     for (int i = 0; i < n; i++) {
//         cout<<V[i]<<" ";
//     }

// }
// -------------------------------------------------------------------------------
// GUIAS DE MATRICES

// RECORRER MATRIZ

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
// -------------------------------------------------------------------------------
// DIAGONAL PRINCIPAL

// #include <iostream>

// using namespace std;

// int main()
// {
//     int mat[5][5] = {{53, 25, 46, 69, 43}, {26, 34, 77, 36, 72}, {51, 59, 54, 25, 31}, {14, 76, 48, 40, 28}, {56, 91, 15, 74, 33}};

//     cout << "\n--> Diagonal Principal <--" << endl;

//     // imprimir de manera estilizada
//     for (int f = 0; f < 5; f++)
//     {
//         for (int c = 0; c < 5; c++)
//         {
//             if (f == c) cout << "  " << mat[f][c];
//             else cout << "    ";
//         }
//         cout << endl;
//     }

//     // imprimir de manera simple
//     for (int d = 0; d < 5; d++)
//     {
//         cout << mat[d][d] << endl;
//     }

//     return 0;
// }
// -------------------------------------------------------------------------------
// DIAGONAL SECUNDARIA

// #include <iostream>

// using namespace std;

// int main()
// {
//     int mat[5][5] = {{53, 25, 46, 69, 43}, {26, 34, 77, 36, 72}, {51, 59, 54, 25, 31}, {14, 76, 48, 40, 28}, {56, 91, 15, 74, 33}};

//     cout << "\n--> Diagonal Secundaria <--" << endl;

//     // imprimir de manera estilizada
//     for (int f = 0; f < 5; f++)
//     {
//         for (int c = 0; c < 5; c++)
//         {
//             if ((f + c) == 4)
//                 cout << "  " << mat[f][c];
//             else
//                 cout << "    ";
//         }
//         cout << endl;
//     }

//     // imprimir de manera simple
//     for (int f = 0; f < 5; f++)
//     {
//         cout << mat[f][5 - f - 1] << endl;
//     }

//     return 0;
// }