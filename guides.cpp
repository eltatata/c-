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
// --------------------------------------------------
// INGRESAR STRINGS CON ESPACIOS AL VECTOR

#include<cstdlib>
#include<ctime>
#include <iostream>
#include <cstring>

using namespace std;

int main() {

    
}