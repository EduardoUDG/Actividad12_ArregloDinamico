#include "arreglo_dinamico.h"

ArregloDinamico::ArregloDinamico(){
    // Crea el arreglo
    arreglo = new int[MAX];
    cont = 0;
    tam = MAX;
}



ArregloDinamico::~ArregloDinamico(){
    // Elimina la memoria del arreglo
    delete[] arreglo;
}



void ArregloDinamico::insertar_final(int v){
    if(cont == tam){
        // Expandir
        expandir();
    }
    // Una vez expandido, ahora ingresaremos datos al nuevo arreglo
    arreglo[cont] = v;
    cont++;
}



void ArregloDinamico::insertar_inicio(int v){
    if(cont == tam){
        // Expandir
        expandir();
    }
    for (size_t i=cont; i>0; i--){
        arreglo[i] = arreglo[i-1];
    }
    arreglo[0] = v;
    cont++;
}



size_t ArregloDinamico::size(){
    return cont;
}


void ArregloDinamico::expandir(){
    int *nuevo = new int[tam+MAX];

    for(size_t i=0; i<cont; i++){
        nuevo[i] = arreglo[i];
    }
    delete arreglo;
    arreglo = nuevo;
    tam = tam + MAX;
}
