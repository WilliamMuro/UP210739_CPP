/*#define FILAS 6
#define COLUMNAS 7
#define TAMAÑO_MATRIZ sizeof(char)FILAS*COLUMNAS
#define JUGADOR_1 'O'
#define JUGADOR_2 'X
#define JUGADOR_CPU_1 JUGADOR_1
#define JUGADOR_CPU_2 JUGADOR_2
#define ESPACIO_VACIO ' '
#define FILA_NO_ENCONTRADA -1 */

#include <iostream>
#include <time.h>

using namespace std;


void dibujarEncabezado (int columnas){
    cout << endl;
    int i;
    for ( i = 0; i < columnas; ++i) {
        cout << "|%d", i +1;
        if (i+1 >= columnas)
        {
            cout<< "|";
        }
        
    }
}

int main(){

    
}



