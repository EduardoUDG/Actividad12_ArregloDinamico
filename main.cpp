#include<iostream>
#include<conio.h>
#include<string>

#include "arreglo_dinamico.h"

using namespace std;

int main(){
    ArregloDinamico arreglo;

    arreglo.insertar_final("Eduardo");
    arreglo.insertar_final("Jose");
    arreglo.insertar_final("Pepe");
    arreglo.insertar_final("Ricardo");
    arreglo.insertar_inicio("Rocio");

    for (size_t i=0; i<arreglo.size(); i++){
        cout<<arreglo[i]<<" ";
    }


    getch();
    return 0;
}

