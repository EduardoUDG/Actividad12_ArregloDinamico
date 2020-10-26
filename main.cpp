#include<iostream>
#include<conio.h>
#include<string>

#include "arreglo_dinamico.h"

using namespace std;

int main(){
    ArregloDinamico arre;

    arre.insertar_final("a");
    arre.insertar_final("b");
    arre.insertar_final("c");
    arre.insertar_final("d");
    arre.insertar_final("e");
    arre.insertar_final("f");
    arre.insertar_final("g");
    arre.insertar_final("h");
    arre.insertar_inicio("i");
    arre.insertar_inicio("j");

    for (size_t i=0; i<arre.size(); i++){
        cout<<arre[i]<<" ";
    }


    getch();
    return 0;
}

