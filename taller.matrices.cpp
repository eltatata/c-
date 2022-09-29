// preexamen 1

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    cout.precision(1);
    cout.setf(ios::fixed);

    setlocale(LC_CTYPE, "spanish");

    int ventas[20][6] = {{3818000, 1149000, 3615000, 1394000, 948000, 3734000},
                         {0, 3803000, 3584000, 2483000, 4281000, 4724000},
                         {797000, 2644000, 4822000, 1086000, 4420000, 385000},
                         {431000, 160000, 2632000, 1549000, 0, 4215000},
                         {3988000, 0, 2815000, 2179000, 2836000, 1056000},
                         {2645000, 250000, 326000, 4370000, 4056000, 3164000},
                         {817000, 1771000, 4505000, 1044000, 248000, 0},
                         {1132000, 1133000, 1276000, 327000, 2399000, 3210000},
                         {210000, 3138000, 614000, 2189000, 4827000, 1953000},
                         {3138000, 792000, 4871000, 0, 2170000, 4725000},
                         {4044000, 3887000, 2727000, 1622000, 2851000, 553000},
                         {1311000, 0, 2097000, 3752000, 3525000, 4043000},
                         {3009000, 2129000, 3547000, 2383000, 2277000, 3506000},
                         {833000, 2501000, 893000, 3158000, 4559000, 381000},
                         {1027000, 600000, 3902000, 2627000, 1856000, 3900000},
                         {0, 1185000, 1584000, 716000, 0, 1807000},
                         {2120000, 3733000, 3993000, 4167000, 1653000, 2197000},
                         {1899000, 2389000, 3065000, 2074000, 3063000, 0},
                         {4793000, 209000, 0, 1255000, 2555000, 4935000},
                         {4649000, 1441000, 3414000, 957000, 4484000, 509000}};
    // ImprimirMatriz;
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << ventas[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n\n=========================================================================";
    cout << "\n I N F O R M E C O M P L E T O D E V E N T A S A Ñ O 2 0 2 2 ";
    cout << "\n=========================================================================";

    int suma = 0, contador = 0;

    int cont = 0;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            suma += ventas[i][j];
        }
    }

    cout << "\n\nPUNTO 1. Valor al que ascienden todas las ventas : " << suma << endl;

    cout << "\n\nPUNTO 2. Venta promedio de todas las empresas : " << (double)suma / 120 << endl;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (ventas[i][j] > suma / 120)
            {
                cont++;
            }
        }
    }

    cout << "\n\nPUNTO 3. Cantidad de ventas superiores al promedio : " << cont << endl;

    cont = 0;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (ventas[i][j] <= suma / 120)
            {
                cont++;
            }
        }
    }

    cout << "\n\nPUNTO 4. Cantidad de ventas <= al promedio : " << cont << endl;

    cont = 0;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (ventas[i][j] == 0)
            {
                cont++;
            }
        }
    }

    cout << "\n\nPUNTO 5. Cantidad de ventas iguales a cero : " << cont << endl;

    int may = 0;

    int cori, corj;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 6; j++)
        {

            if (ventas[i][j] > may)
            {
                may = ventas[i][j];
                cori = i;
                corj = j;
            }
        }
    }

    cout << "\n\nPUNTO 6. Mayor venta " << may << " y sus coordenadas " << cori << ", " << corj << endl;
    
    int men = 999999;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 6; j++)
        {

            if (ventas[i][j] < men && ventas[i][j] > 0)
            {
                men = ventas[i][j];
                cori = i;
                corj = j;
            }
        }
    }

    cout << "\n\nPUNTO 7. Menor venta " << men << " y sus coordenadas " << cori << ", " << corj << endl;

    bool band = false;
    int clave;

    cout << "\n\nPUNTO 8. Ingrese venta a buscar: ";
    cin >> clave;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 6; j++)
        {

            if (ventas[i][j] == clave)
            {
                band = true;
                cori = i;
                corj = j;
            }
        }
    }

    if (band)
        cout << "La venta existe en: " << cori << " y la ciudad es: " << corj << endl;
    else
        cout << "No se encontro" << endl;

    cont = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 6; j++)
        {

            if (ventas[i][j] >= 500000 && ventas[i][j] <= 1000000)
            {
                cont++;
            }
        }
    }

    cout << "\n\nPUNTO 9. Ventas entre $500000-$1000000 primeras 10 empresas : " << cont << endl;

    cout << "\n\nPUNTO 10. Venta total de las primeras 4 ciudades : " << endl;

    cout << "\n\nPUNTO 11. Ventas >$1.000.000 en Medellín, Cali y Cartagena : " << endl;

    cout << "\n\nPUNTO 12. Venta total de las 10 últimas empresas : " << endl;

    cout << "\n\nPUNTO 13. Promedio de las ventas de las 4 primeras empresas : " << endl;

    cout << "\n\nPUNTO 14. Venta total de la primera y la última empresa : " << endl;

    cout << "\n\nPUNTO 15. Venta mayor realizada en la ciudad de Medellín : " << endl;

    cout << "\n\nPUNTO 16. Venta menor diferente de 0 de las empresas pares : " << endl;

    cout << "\n\nPUNTO 17. % Ventas 4 primeras empresas últimas 3 ciudades : " << endl;

    cout << "\n\nPUNTO 18. % Ventas < $500.000 empresas mult 3 Medellín y Bogotá: " << endl;

    cout << "\n\nPUNTO 19. Venta total en la costa (cartagena + Barranquilla) : " << endl;

    cout << "\n\nPUNTO 20. % Ventas <= $3000000 Medell+in-Bogotá-Cartagena-Pasto: " << endl;

    cout << "\n\nPUNTO 21. Promedio ventas ubicadas en la diagonal principal : " << endl;

    cout << "\n\nPUNTO 22. Venta Pasto 10 primeras empresas + Cartagena 10 sgts : " << endl;

    cout << "\n\nPUNTO 23. Cantidad ventas múltiplos de 100.000 en la Empresa 15: " << endl;

    cout << "\n\nPUNTO 24. Ventas totales de las ciudades Medellín y Pasto : " << endl;
    cout << "\n\nPUNTO 24. Promedio de ventas de las ciudades Medellín y Pasto : " << endl;

    cout << "\n\nPUNTO 25. Imprimir las ventas ordenadas de forma ascendente : " << endl;
}