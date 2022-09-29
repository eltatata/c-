#include<iostream>
#include<iomanip>
#include <clocale>
using namespace std;

int main() {
	//Configurar precisión decimal y tildes	
	cout.precision(2);
    cout.setf(ios::fixed);

	setlocale(LC_CTYPE, "spanish");

	//Declarar la matriz dinámica
	int ** PRODUCCION = new int * [12];

	for (int i = 0; i < 12; i++)
 		PRODUCCION[i] = new int[8];


	//Dejar estos datos quemados para manipular la matriz
	PRODUCCION[0][0] = 1166;	PRODUCCION[0][1] = 5987;	PRODUCCION[0][2] = 7739;	PRODUCCION[0][3] = 6018;	PRODUCCION[0][4] = 7360;	PRODUCCION[0][5] = 761;		PRODUCCION[0][6] = 222;		PRODUCCION[0][7] = 2765;
	PRODUCCION[1][0] = 7691;	PRODUCCION[1][1] = 102;		PRODUCCION[1][2] = 4640;	PRODUCCION[1][3] = 3682;	PRODUCCION[1][4] = 7098;	PRODUCCION[1][5] = 562;		PRODUCCION[1][6] = 4841;	PRODUCCION[1][7] = 4019;
	PRODUCCION[2][0] = 3987;	PRODUCCION[2][1] = 1493;	PRODUCCION[2][2] = 5671;	PRODUCCION[2][3] = 3029;	PRODUCCION[2][4] = 3558;	PRODUCCION[2][5] = 2512;	PRODUCCION[2][6] = 714;		PRODUCCION[2][7] = 1754;
	PRODUCCION[3][0] = 553;		PRODUCCION[3][1] = 2712;	PRODUCCION[3][2] = 5589;	PRODUCCION[3][3] = 7016;	PRODUCCION[3][4] = 4807;	PRODUCCION[3][5] = 4679;	PRODUCCION[3][6] = 390;		PRODUCCION[3][7] = 826;
	PRODUCCION[4][0] = 1251;	PRODUCCION[4][1] = 1790;	PRODUCCION[4][2] = 4325;	PRODUCCION[4][3] = 2853;	PRODUCCION[4][4] = 1533;	PRODUCCION[4][5] = 6113;	PRODUCCION[4][6] = 989;		PRODUCCION[4][7] = 5286;
	PRODUCCION[5][0] = 4093;	PRODUCCION[5][1] = 2926;	PRODUCCION[5][2] = 6434;	PRODUCCION[5][3] = 1116;	PRODUCCION[5][4] = 745;		PRODUCCION[5][5] = 5103;	PRODUCCION[5][6] = 3601;	PRODUCCION[5][7] = 2258;
	PRODUCCION[6][0] = 5016;	PRODUCCION[6][1] = 6263;	PRODUCCION[6][2] = 6679;	PRODUCCION[6][3] = 2504;	PRODUCCION[6][4] = 7856;	PRODUCCION[6][5] = 676;		PRODUCCION[6][6] = 5563;	PRODUCCION[6][7] = 436;
	PRODUCCION[7][0] = 6507;	PRODUCCION[7][1] = 3712;	PRODUCCION[7][2] = 5050;	PRODUCCION[7][3] = 3997;	PRODUCCION[7][4] = 7931;	PRODUCCION[7][5] = 1009;	PRODUCCION[7][6] = 2753;	PRODUCCION[7][7] = 2553;
	PRODUCCION[8][0] = 3025;	PRODUCCION[8][1] = 310;		PRODUCCION[8][2] = 5300;	PRODUCCION[8][3] = 7814;	PRODUCCION[8][4] = 3219;	PRODUCCION[8][5] = 3649;	PRODUCCION[8][6] = 1342;	PRODUCCION[8][7] = 1229;
	PRODUCCION[9][0] = 4080;	PRODUCCION[9][1] = 6731;	PRODUCCION[9][2] = 1258;	PRODUCCION[9][3] = 4638;	PRODUCCION[9][4] = 901;		PRODUCCION[9][5] = 425;		PRODUCCION[9][6] = 3881;	PRODUCCION[9][7] = 5734;
	PRODUCCION[10][0] = 7428;	PRODUCCION[10][1] = 4917;	PRODUCCION[10][2] = 7122;	PRODUCCION[10][3] = 1041;	PRODUCCION[10][4] = 5935;	PRODUCCION[10][5] = 6687;	PRODUCCION[10][6] = 5815;	PRODUCCION[10][7] = 2125;
	PRODUCCION[11][0] = 910;	PRODUCCION[11][1] = 121;	PRODUCCION[11][2] = 1888;	PRODUCCION[11][3] = 1961;	PRODUCCION[11][4] = 505;	PRODUCCION[11][5] = 5734;	PRODUCCION[11][6] = 5883;	PRODUCCION[11][7] = 4562;

	//Imprimir la matriz
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 8; j++) {
			cout << PRODUCCION[i][j] << "  ";
		}
		cout << endl;
	}

	// realizar calculos

	int contador = 0;
	int proTotal = 0;

	for (int f = 0; f < 12; f++)
	{
		for (int c = 0; c < 8; c++)
		{
			proTotal += PRODUCCION[f][c];
			contador++;
		}
	}
	

	//Punto 1
	cout << "\n1. Producción total en toneladas de todas las frutas : " << proTotal << endl;
	cout << "1. Producción promedio en toneladas de todas las frutas : " << (float)proTotal/contador << endl;

	contador = 0;
	proTotal = 0;

	for (int f = 9; f < 12; f++)
	{
		for (int c = 0; c < 8; c++)
		{
			if (c%2 == 1) {
				proTotal += PRODUCCION[f][c];
				contador++;
			} 
		}
	}

	//Punto 2	
	cout << "\n2. Producción total en toneladas de frutas en columnas impares último trimestre: " << proTotal << endl;
	cout << "2. Producción promedio en toneladas de frutas en columnas impares último trimestre: " << (float)proTotal/contador << endl;

	int sum0 = 0;
	int sum7 = 0;


	for (int f = 0; f < 12; f++)
	{
		for (int c = 0; c < 8; c++)
		{
			if (c == 0) {
				sum0 += PRODUCCION[f][c];
			} else if (c == 7) {
				sum7 += PRODUCCION[f][c];
				// cout<<PRODUCCION[f][c]<<endl;
			} 
		}
	}

	float prom0 = (float)sum0/12;
	float prom7 = (float)sum7/12;

	//Punto 3
	if(prom0 > prom7) cout << "\n3. Es menor la producción promedio de la última fila " << prom7 << " que la de la primera: " << prom0 << endl;
	else if(prom0 < prom7) cout << "\n3. Es mayor la producción promedio de la última fila " << prom7 << " que la de la primera: " << prom0 << endl;
	else if(prom0 == prom7) cout << "\n3. Es igual la producción promedio de la última fila " << prom7 << " que la de la primera: " << prom0 << endl;
	
	contador = 0;
	int contEspe = 0;

	for (int f = 0; f < 12; f++)
	{
		for (int c = 0; c < 8; c++)
		{
			contador++;
			if (PRODUCCION[f][c] >= 500 && PRODUCCION[f][c] <= 2500) {
				contEspe++;
			}
		}
	}

	//Punto 4	
	cout << "\n4. Cantidad de producciones entre 500 y 2.500 toneladas : " << contEspe << endl;
	cout << "4. Porcentaje de producciones entre 500 y 2.500 toneladas : " << (float)contEspe * 100/contador << "%" << endl;

	// SOLUCION MALA
	contador = 0;
	contEspe = 0;

	for (int f = 0; f < 12; f++)
	{
		for (int c = 0; c < 8; c++)
		{
			contador++;
			if (f%2 == 0 && c%2 == 0 && PRODUCCION[f][c]%2 == 1) {
				contEspe++;
			}
		}
	}

	//Punto 5	
	cout << "\n5. Cantidad de producción de frutas impares en posiciones pares  : " << contEspe << endl;
	cout << "5. Porcentaje de producción de frutas impares en posiciones pares: " << (float)contEspe * 100/contador << "%" << endl;
	
	int sumPrin = 0;
	int sumSec = 0;
	contador = 0;
 
	for (int f = 0; f < 12; f++)
	{
		for (int c = 0; c < 8; c++)
		{
			if (f == c) sumPrin++;
			else if ((f + c) == 12 - 1) sumSec++;
			contador++;
		}
	}

	cout << (float)sumPrin * 100 / contador<<endl;
	cout << (float)sumSec * 100 / contador<<endl;

	//Punto 6
	cout << "\n6. Es mayor/menor/igual el porcentaje de producción frutas de la diagonal principal % que la secundaria %" << endl;
	
	//Punto 7	
	cout << "\n7. Mayor producción en meses impares de frutas pares: " << endl;
	cout << "7. Coordenadas de la mayor producción. Mes y Fruta " << endl;

	//Punto 8	
	cout << "\n8. Menor producción múltiplo de 10 : " << endl;
	cout << "8. Coordenadas de la menor producción. Mes y Fruta " << endl;

	//Punto 9	
	cout << "\n9. Deferencia entre la mayor y la menor producción es: " << endl;

	//Punto 10
	cout << "\n10. Ingrese producción (en toneladas) a buscar      : " << endl;
	
	//Punto 11
	cout << "\n11. No / Se realizó más producción en la triangular superior que la inferior " << endl;
	
		
	//Punto 12
	cout << "\n12. Matriz con producciones duplicadas en orden: " << endl;	
	return 0;
}