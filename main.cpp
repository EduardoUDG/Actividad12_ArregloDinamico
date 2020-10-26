#include<iostream>
#include<conio.h>
#include<string>

#include "arreglo_dinamico.h"

using namespace std;

int main(){
    ArregloDinamico arre;
    cout<<endl<<endl;


    arre.insertar_final("alex");
    arre.insertar_final("beto");
    arre.insertar_final("carlos");
    arre.insertar_final("daniel");
    arre.insertar_final("erick");
    arre.insertar_final("franco");
    arre.insertar_final("gerardo");
    arre.insertar_final("hector");



    for (size_t i=0; i<arre.size(); i++){ cout<<arre[i]<<" | "; }



    cout<<endl;
    arre.insertar_inicio("ilario");
    arre.insertar_inicio("juan");
    for(size_t i=0; i<80; i++){ cout<<"-"; }
    cout<<endl;



    for (size_t i=0; i<arre.size(); i++){ cout<<arre[i]<<" | "; }


    getch();
    return 0;
}

