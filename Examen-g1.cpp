#include <iostream>
#include <iomanip>
#include <cstring>
#include <clocale>

using namespace std;

float convertAgeYears(float age) {
    return age / 12;
}

float convertWeight(float weight) {
    return weight / 1000;
}

// string minAgeType(char type, float age) {
//     double men = 99999;
//     char typeMen; 

//     if (age < men) {
//         men == age;
//     }
// }

void processMain(int N) {    
    char type;
    float weight, height, age;

    // variables para calculos
    int cantA = 0, cantG = 0, cantC = 0, cantP = 0, cantT = 0;

    int sumAge = 0, N2point = 0;

    float sumWeight = 0;

    for (int i = 0; i < N; i++) {
        cout << "Cual es tipo del animal: "; cin >> type;
        cout << "Cual es peso del animal: "; cin >> weight;
        cout << "Cual es la edad del animal: "; cin >> age;
        cout << "Cual es la estatura del animal: "; cin >> height;

        switch (type) {
            case 'A': cantA++; break;
            case 'G': cantG++; break;
            case 'C': cantC++; break;
            case 'P': cantP++; break;
            case 'T': cantT++; break;
        }

        if (type == 'A' || type == 'G' || type == 'C') {
            sumAge += age;
            N2point++;
        }

        if (type == 'A' || type == 'G' || type == 'C' || type == 'T') {
            sumWeight += weight;
        }
    }

    cout << "Cantidades por tipo: ";
    cout << "\n\tAves: " << cantA;
    cout << "\n\tGatos: " << cantG;
    cout << "\n\tConejos: " << cantC;
    cout << "\n\tPeces: " << cantP;
    cout << "\n\tTarantulas: " << cantT;

    cout << "\n\nPocentajes por tipo: ";
    cout << "\n\tAves: " << (double)(cantA * 100) / N << "%";
    cout << "\n\tGatos: " << (double)(cantG * 100) / N << "%";
    cout << "\n\tConejos: " << (double)(cantC * 100) / N << "%";
    cout << "\n\tPeces: " << (double)(cantP * 100) / N << "%";
    cout << "\n\tTarantulas: " << (double)(cantT * 100) / N << "%";

    cout << "\n\nPromedio de edad en años de animales con 2 o 4 patas: " << (float)convertAgeYears(sumAge) / N2point;

    cout << "\n\nSuma total de los pesos en kilogramos de aquellos animales con 4 o más patas: " << convertWeight(sumWeight); 
}

int main() {
    cout.precision(2);
    cout.setf(ios::fixed);
    setlocale(LC_CTYPE, "spanish");

    int numExp;

    cout << "Digite cual es el numero de experimentos: "; cin >> numExp;

    processMain(numExp);

    return 0;
}
