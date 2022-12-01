#include<iostream>
#include<iomanip>
#include<clocale>

using namespace std;

void Punto10(int** EXISTENCIAS, int N) {
	for (int i = 0; i < N; i++)
		for (int j = 0; j < 6; j++)
			EXISTENCIAS[i][j] *= 1000;
}

void Punto9(double vecPto7[], string CIUDADES[]) {
	for (int i = 0; i < 5; i++)
	{
		for (int k = i + 1; k < 6; k++)
		{
			if (vecPto7[i] < vecPto7[k]) {
				double aux = vecPto7[i];
				vecPto7[i] = vecPto7[k];
				vecPto7[k] = aux;
				string ciudad = CIUDADES[i];
				CIUDADES[i] = CIUDADES[k];
				CIUDADES[k] = ciudad;
			}
		}
	}

	cout << "\n9. Vector Punto7 Ordenado Descendentemente." << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << "Ciudad " << CIUDADES[i] << ": " << vecPto7[i] << endl;
	}
}


void Punto8(int** CODIGOS, int** EXISTENCIAS, string CIUDADES[], int N, int cod) {
	int posi = -1, posj = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (CODIGOS[i][j] == cod) {
				posi = i;
				posj = j;
			}
		}
	}

	if (posi == -1)
		cout << "Código no existe. " << endl;
	else
		cout << "Código existe en la Zona #" << posi << " en la ciudad " << CIUDADES[posj] << ". Existencias " << EXISTENCIAS[posi][posj] << endl;
}

void Punto7(int** EXISTENCIAS, string CIUDADES[], double vecPto7[], int N) {

	for (int j = 0; j < 6; j++)
	{
		int acum = 0;
		for (int i = 0; i < N; i++)
		{
			acum += EXISTENCIAS[i][j];
		}
		vecPto7[j] = (double)acum / N;
	}

	cout << "\n7. Promedio de existencias ciudades" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "Ciudad " << CIUDADES[i] << ": " << vecPto7[i] << endl;
	}
}

void Punto6(int** EXISTENCIAS, int N) {
	int* vecPto6 = new int[N];

	for (int i = 0; i < N; i++)
	{
		int cont = 0;
		for (int j = 0; j < 6; j++)
		{
			if (EXISTENCIAS[i][j] == 0)
				cont++;
		}
		vecPto6[i] = cont;
	}

	cout << "\n6. Cantidad de existencias = 0 por zonas" << endl;

	for (int i = 0; i < N; i++)
	{
		cout << "Zona #" << i << ": " << vecPto6[i] << endl;
	}
}

void Punto5(int** CODIGOS, int N) {
	int posi = -1, posj = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 6; j += 2)
		{
			if (CODIGOS[i][j] % 10 == 0) {
				posi = i;
				posj = j;
			}
		}
	}

	if (posi == -1) {
		cout << "\n5. No existe código que termine en 0 en Medellín, Cali o Cartagena." << endl;
	}
	else {
		cout << "\n5. Existe código que termine en 0 en Medellín, Cali o Cartagena." << endl;
		cout << "5.Existe en coordenadas [" << posi << "][" << posj << "]" << endl;
	}
}

void Punto4(int** CODIGOS, int** EXISTENCIAS, int N) {
	int may = 0, men = 100;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (CODIGOS[i][j] > 500) {
				if (EXISTENCIAS[i][j] > may) {
					may = EXISTENCIAS[i][j];
				}
				if (EXISTENCIAS[i][j] != 0 && EXISTENCIAS[i][j] < men) {
					men = EXISTENCIAS[i][j];
				}
			}
		}
	}
	cout << "\n4. Suma del mayor (" << may << ") y el menor (" << men << ") = " << may + men << endl;
}

double Punto3(int** EXISTENCIAS, int** CODIGOS, int N) {
	int acum = 0, cont = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 3; j < 6; j++)
		{
			if (EXISTENCIAS[i][j] != 0 && CODIGOS[i][j] <= 500) {

				acum += EXISTENCIAS[i][j];

				cont++;

			}
		}
	}
	return (cont == 0 ? 0 : (double)acum / cont);
}

int Punto2(int** matriz, int N, int num) {
	int cont = 0;
	for (int i = 0; i < N; i++)

		for (int j = 0; j < 6; j++)

			if (matriz[i][j] % 2 == num)

				cont++;

	return cont;
}

void CrearMatriz(int** matriz, int N, int limInf, int limSup) {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 6; j++)
		{

			matriz[i][j] = limInf + rand() % (limSup - limInf + 1);
		}
	}
}

void ImprimirMatriz(int** matriz, int N, string mensaje) {
	cout << mensaje << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 6; j++)
		{

			cout << matriz[i][j] << "   ";
		}
		cout << endl;
	}
}


int main() {
	setlocale(LC_CTYPE, "spanish");
	cout.setf(ios::fixed);
	cout.precision(2);
	srand(time(NULL));

	//DECLARACIÓN DE ARREGLOS
	int N;
	cout << "Ingrese la cantidad de zonas [N]: ";
	cin >> N;

	int** CODIGOS = new int* [N];

	int** EXISTENCIAS = new int* [N];

	for (int i = 0; i < N; i++)
	{
		CODIGOS[i] = new int[6];

		EXISTENCIAS[i] = new int[6];
	}

	string CIUDADES[6] = { "MEDELLÍN", "BOGOTÁ","CALI", "BARRANQUILLA", "CARTAGENA ", "SANTA MARTHA" };

	//PUNTO 1
	CrearMatriz(CODIGOS, N, 100, 999);
	CrearMatriz(EXISTENCIAS, N, 0, 99);
	ImprimirMatriz(CODIGOS, N, "1-MATRIZ CODIGOS");
	ImprimirMatriz(EXISTENCIAS, N, "1- MATRIZ EXISTENCIAS");


	//PUNTO 2
	int cont = Punto2(CODIGOS, N, 0);
	cout << "\n2. Cantidad códigos pares: " << cont << " representan el " << (double)cont / (N * 6) * 100 << "%" << endl;
	cont = Punto2(CODIGOS, N, 1);
	cout << "\n2. Cantidad códigos impares: " << cont << " representan el " << (double)cont / (N * 6) * 100 << "%" << endl;

	//PUNTO 3
	cout << "\n3. Promedio existencias <> 0 costa en codigos nacionales: " << Punto3(EXISTENCIAS, CODIGOS, N) << endl;

	//PUNTO 4
	Punto4(CODIGOS, EXISTENCIAS, N);

	//PUNTO 5
	Punto5(CODIGOS, N);

	//PUNTO 6
	Punto6(EXISTENCIAS, N);

	//PUNTO 7
	double vecPto7[6]{};
	Punto7(EXISTENCIAS, CIUDADES, vecPto7, N);

	//PUNTO 8
	int cod;
	cout << "\n8. Digite código a buscar: ";
	cin >> cod;
	Punto8(CODIGOS, EXISTENCIAS, CIUDADES, N, cod);

	//PUNTO 9
	Punto9(vecPto7, CIUDADES);

	//PUNTO 10
	Punto10(EXISTENCIAS, N);
	ImprimirMatriz(EXISTENCIAS, N, "10- MATRIZ EXISTENCIAS x 1000");

	cout << endl;

	return 0;
}