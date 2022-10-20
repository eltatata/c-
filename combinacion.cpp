// #include <iostream>
// #include <clocale>
// #include <iomanip>
// #include <cstring>

// using namespace std;

// int main()
// {
//     cout.precision(2);
//     cout.setf(ios::fixed);
//     setlocale(LC_CTYPE, "spanish");

//     int GOLES[12][10] = {{1, 1, 1, 1, 1, 2, 1, 3, 3, 1}, {1, 2, 0, 0, 0, 1, 0, 0, 0, 0}, {4, 3, 3, 4, 3, 4, 4, 5, 7, 5}, {0, 2, 2, 1, 0, 0, 1, 0, 2, 0}, {3, 2, 0, 0, 2, 2, 2, 3, 2, 4}, {2, 1, 2, 2, 2, 2, 5, 3, 4, 6}, {1, 1, 0, 2, 2, 2, 2, 0, 2, 1}, {1, 1, 0, 0, 1, 0, 0, 1, 0, 4}, {2, 0, 1, 2, 2, 0, 1, 5, 0, 0}, {1, 1, 1, 2, 1, 1, 2, 1, 2, 1}, {1, 1, 1, 2, 1, 1, 2, 1, 4, 1}, {0, 4, 3, 5, 3, 1, 1, 0, 0, 0}};
//     string JUGADORES[12] = {"ALVARO", "CARLOS", "DIEGO", "ELKIN", "GABRIEL", "JOHN", "JUAN", "LUIS", "MARIO", "PABLO", "RAUL", "SERGIO"};

//     int contador = 0;
//     int total = 0;
//     int noGoles = 0; 
//     int golesDiffCero = 0;   
//     int countPar = 0, countImpar = 0;
//     int may = 0, men = 999;
//     int corfMay, corcMay;
//     int corfMen, corcMen;

//     for (int f = 0; f < 12; f++)
//     {
//         for (int c = 0; c < 10; c++)
//         {  
//             // total de goles marcados
//             total += GOLES[f][c];
            
//             // celdas donde no se marcaron goles
//             if(GOLES[f][c] == 0) noGoles++;

//             // goles diferentes de cero
//             if(GOLES[f][c] != 0) golesDiffCero++;
    
//             // goles en celdas pares
//             if((f + c )% 2 == 0) countPar += GOLES[f][c];
//             // goles en celdas impares
//             else countImpar += GOLES[f][c];   

//             // hallar el mayor y sus primeras cordenadas
//             if(GOLES[f][c] > may) {
//                 may = GOLES[f][c]; 
//                 corfMay = f;
//                 corcMay = c;
//             }  

//             // hallar menor el y sus ultimas cordenadas
//             if(GOLES[f][c] <= men && GOLES[f][c] > 0) {
//                 men = GOLES[f][c]; 
//                 corfMen = f;
//                 corcMen = c;
//             }       
     
//             contador++;
//         }
//     }

//     cout<<"1) ";
//     cout<<total<<", ";
//     cout<<(float)total/contador<<endl;

//     cout<<"2) ";
//     cout<<noGoles<<", ";
//     cout<<(float)noGoles * 100/contador<<"%"<<endl;

//     cout<<"3) ";
//     cout<<total<<", ";
//     cout<<(float)total/golesDiffCero<<endl;
    
//     cout<<"4) ";
//     cout<<(float)countPar/(contador/2)<<" "<<(float)countImpar/(contador/2)<<endl;

//     cout<<"5) ";
//     cout<<may<<", ["<<corfMay<<", "<<corcMay<<"]"<<endl;

//     cout<<"6) ";
//     cout<<men<<", ["<<corfMen<<", "<<corcMen<<"]"<<endl<<endl;

//     // COMBINACION

//     int TOTAL[10];
//     double promedio[10];
//     int mayor[10];
//     int cantidad[10];

//     for (int c = 0; c < 10; c++)
//     {   
//         int ac = 0, prom, may = 0, cant = 0;
//         for (int f = 0; f < 12; f++)
//         {
//             ac += GOLES[f][c];

//             if(GOLES[f][c] > may) may = GOLES[f][c];

//             if(GOLES[f][c] < 2) cant++;
//         }
            
//         TOTAL[c] = ac;
//         promedio[c] =(float) ac / 12;
//         mayor[c] = may;
//         cantidad[c] = cant;
//     }

//     int sumaV[10];
//     double promedioV[10];
//     int mayorV[10];
//     int cantidadV[10];

//     for (int f = 0; f < 12; f++)
//     {   
//         int acmu = 0, prom, may = 0, cant = 0;
//         for (int c = 0; c < 10; c++)
//         {
//             acmu += GOLES[f][c];

//             if(GOLES[f][c] > may) may = GOLES[f][c];

//             if(GOLES[f][c] == 0) cant++;
//         }      

//         sumaV[f] = acmu;
//         promedioV[f] =(float) acmu / 10;
//         mayorV[f] = may;
//         cantidadV[f] = cant;
//     }

//     // for (int i = 0; i < 12; i++)
//     // {
        
//     // }

//     // for (int i = 0; i < 10; i++)
//     // {

//     // }
    

//     return 0;
// }
// -----------------------------------------------------
// PREEXAMEN 2

#include <iostream>
#include <clocale>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    cout.precision(2);
    cout.setf(ios::fixed);
    setlocale(LC_CTYPE, "spanish");

    int N; cin>>N;

	int ** APORTES = new int * [12];

	for (int i = 0; i < 12; i++) APORTES[i] = new int[N];

    APORTES[0][0]=29007600;		APORTES[0][1]=14202841;		APORTES[0][2]=4294491;		APORTES[0][3]=7943976;		APORTES[0][4]=28189792;		APORTES[0][5]=38817104;		APORTES[0][6]=10681280;		APORTES[0][7]=15601030;		APORTES[0][8]=10284943;		APORTES[0][9]=15742551;
    APORTES[1][0]=3078619;		APORTES[1][1]=31588090;		APORTES[1][2]=28592266;		APORTES[1][3]=3896918;		APORTES[1][4]=6924869;		APORTES[1][5]=15327780;		APORTES[1][6]=18425329;		APORTES[1][7]=8515215;		APORTES[1][8]=7077472;		APORTES[1][9]=27720812;
    APORTES[2][0]=1821639;		APORTES[2][1]=4855077;		APORTES[2][2]=33183615;		APORTES[2][3]=5565533;		APORTES[2][4]=24753110;		APORTES[2][5]=15566032;		APORTES[2][6]=37476290;		APORTES[2][7]=20996453;		APORTES[2][8]=26606060;		APORTES[2][9]=2572930;
    APORTES[3][0]=0;			APORTES[3][1]=24870956;		APORTES[3][2]=20769327;		APORTES[3][3]=36358853;		APORTES[3][4]=36541379;		APORTES[3][5]=5638735;		APORTES[3][6]=29517907;		APORTES[3][7]=12931916;		APORTES[3][8]=30399500;		APORTES[3][9]=21323917;
    APORTES[4][0]=17227523;		APORTES[4][1]=2629811;		APORTES[4][2]=29339870;		APORTES[4][3]=4986826;		APORTES[4][4]=36120276;		APORTES[4][5]=9407977;		APORTES[4][6]=23797030;		APORTES[4][7]=33591483;		APORTES[4][8]=28780719;		APORTES[4][9]=16883077;
    APORTES[5][0]=9356147;		APORTES[5][1]=17453954;		APORTES[5][2]=24849972;		APORTES[5][3]=14646702;		APORTES[5][4]=14079090;		APORTES[5][5]=25972374;		APORTES[5][6]=36870113;		APORTES[5][7]=19815622;		APORTES[5][8]=12815242;		APORTES[5][9]=28293658;
    APORTES[6][0]=26046579;		APORTES[6][1]=16554564;		APORTES[6][2]=4668167;		APORTES[6][3]=37327582;		APORTES[6][4]=27589586;		APORTES[6][5]=18472558;		APORTES[6][6]=29683371;		APORTES[6][7]=34647591;		APORTES[6][8]=3427755;		APORTES[6][9]=31622904;
    APORTES[7][0]=26649972;		APORTES[7][1]=21719897;		APORTES[7][2]=29456947;		APORTES[7][3]=23444002;		APORTES[7][4]=5551125;		APORTES[7][5]=6976050;		APORTES[7][6]=31948064;		APORTES[7][7]=21560163;		APORTES[7][8]=29139565;		APORTES[7][9]=38696505;
    APORTES[8][0]=26680267;		APORTES[8][1]=11467949;		APORTES[8][2]=30303812;		APORTES[8][3]=31347353;		APORTES[8][4]=9832426;		APORTES[8][5]=12105231;		APORTES[8][6]=4842371;		APORTES[8][7]=36824175;		APORTES[8][8]=11051809;		APORTES[8][9]=38865230;
    APORTES[9][0]=27556810;		APORTES[9][1]=9214216;		APORTES[9][2]=14691024;		APORTES[9][3]=11363606;		APORTES[9][4]=0;			APORTES[9][5]=3793419;		APORTES[9][6]=25059967;		APORTES[9][7]=29088857;		APORTES[9][8]=0;			APORTES[9][9]=6559790;
    APORTES[10][0]=25509781;	APORTES[10][1]=12261988;	APORTES[10][2]=28910028;	APORTES[10][3]=19541385;	APORTES[10][4]=7462792;		APORTES[10][5]=6721307;		APORTES[10][6]=15189112;	APORTES[10][7]=13620401;	APORTES[10][8]=17922323;	APORTES[10][9]=1758839;
    APORTES[11][0]=36509101;	APORTES[11][1]=23951207;	APORTES[11][2]=35878948;	APORTES[11][3]=6328813;		APORTES[11][4]=17005933;	APORTES[11][5]=19053899;	APORTES[11][6]=33200544;	APORTES[11][7]=7622854;		APORTES[11][8]=26658266;	APORTES[11][9]=26516996;

    for (int i = 0; i < 12; i++) {
		for (int j = 0; j < N; j++) {
			cout << APORTES[i][j] << "  ";
		}
		cout << endl;
	}

    float promEPS[N];
    int infeEPS[N];
    int mayEPS[N];
    int menEPS[N];
    int supeEPS[N];
    
    for (int c = 0; c < N; c++) {
        double men = 999999999999999;
        int ac = 0, may = 0, infe = 0, supe = 0;
		for (int f = 0; f < 12; f++) {
			ac += APORTES[f][c];

            if(APORTES[f][c] > may) may = APORTES[f][c];

            if(APORTES[f][c] < men && APORTES[f][c] > 0) men = APORTES[f][c];

            if(APORTES[f][c] > 20000000) supe++;

            if(APORTES[f][c] < 10000000) infe += APORTES[f][c];
		}

		promEPS[c] = (double) ac / 12;
		infeEPS[c] = infe;
		mayEPS[c] = may;
		menEPS[c] = men;
		supeEPS[c] = supe;
	}

    cout<<"\n\n";

    for (int i = 0; i < N; i++)
    {
        cout<<promEPS[i]<<" ";
    }

    cout<<"\n\n";

    for (int i = 0; i < N; i++)
    {
        cout<<infeEPS[i]<<" ";
    }

    cout<<"\n\n";

    for (int i = 0; i < N; i++)
    {
        cout<<mayEPS[i]<<" ";
    }

    cout<<"\n\n";

    for (int i = 0; i < N; i++)
    {
        cout<<menEPS[i]<<" ";
    }

    cout<<"\n\n";

    for (int i = 0; i < N; i++)
    {
        cout<<supeEPS[i]<<" ";
    }

    cout<<"\n\n";

    float promParMES[12];
    int totalMulDiezMES[12];
    int mayMulTresMES[12];
    int menMulCinMES[12];
    int lastMES[12];

    for (int f = 0; f < 12; f++) {
        double men = 999999999999999;
        int ac = 0, mulDiez = 0, may = 0, last = 0;
		for (int c = 0; c < N; c++) {
			if((f + c)%2 == 0) ac += APORTES[f][c];

            if(APORTES[f][c]%10 == 0) mulDiez += APORTES[f][c];

            if(APORTES[f][c]%3 == 0 && APORTES[f][c] > may) may = APORTES[f][c];

            if(APORTES[f][c]%5 == 0 && APORTES[f][c] < men) men = APORTES[f][c];

            if(APORTES[f][c]%2 == 0 && (f + c)%2 != 0) last++;
		}

		promParMES[f] = (double) ac / (N / 2);
		totalMulDiezMES[f] = mulDiez;
		mayMulTresMES[f] = may;
		menMulCinMES[f] = men;
		lastMES[f] = last;
	}

    cout<<"\n\n";

    for (int i = 0; i < 12; i++)
    {
        cout<<promParMES[i]<<" ";
    }

    cout<<"\n\n";

    for (int i = 0; i < 12; i++)
    {
        cout<<totalMulDiezMES[i]<<" ";
    }

    cout<<"\n\n";

    for (int i = 0; i < 12; i++)
    {
        cout<<mayMulTresMES[i]<<" ";
    }

    cout<<"\n\n";

    for (int i = 0; i < 12; i++)
    {
        cout<<menMulCinMES[i]<<" ";
    }

    cout<<"\n\n";

    for (int i = 0; i < 12; i++)
    {
        cout<<lastMES[i]<<" ";
    }

    

    return 0;
}