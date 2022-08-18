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

#include<iostream>
#include <iomanip>

using namespace std;

int main() {
    cout.precision(2);
    cout.setf(ios::fixed);

    int NUM[] = {1, 2, 3, 4, 5, -6, -7, -8, -9, 10, 11, 12, 13, 14, 15};
    int length = sizeof(NUM)/sizeof(*NUM);
    
    int amount = 0, sum = 0;
    int may = 0, men = 999;

    float prom, porc;

    bool ban = false;

    // saber la suma y la cantidad de positivos
    for (int n : NUM) {
        if (n > 0) {
            amount++,
            sum += n;
            // cout<<n<<" ";
        }

        // saber cual es el mayor y el menor numero
        if (n > may) may = n;
        if (n < men) men = n;

        if (n%3 == 0 && n%5 == 0) ban = true;
    }

    // saber el promedio y el porcentaje de positivos
    prom = sum/amount;
    porc = (float)amount/length*100;

    cout<<amount<<" "<<sum<<endl;
    cout<<prom<<" "<<porc<<endl;
    cout<<may<<" "<<men<<endl;
    ban? cout<<"Hay un numero multiplo de 3 y de 5" : cout<<"No hay un numero multiplo de 3 y de 5";
    
    return 0;
}




















// #include<iostream>

// using namespace std;

// int main() {
//     int array[5], sizeArray;

//     sizeArray = sizeof(array)/sizeof(*array);

//     for (int i = 0; i < sizeArray; i++) {
//         cout<<"agrege un numero: ";cin>>array[i];
//     }
    
//     cout<<"\nelementos dentro del array: ";

//     for (int num : array) cout<<num<<" ";
    

//     return 0;
// }