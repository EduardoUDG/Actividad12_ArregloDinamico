#include "arreglo_dinamico.h"

using namespace std;

ArregloDinamico::ArregloDinamico(){
    // Crea el arreglo
    arreglo = new string[MAX];
    cont = 0;
    tam = MAX;
}



ArregloDinamico::~ArregloDinamico(){
    // Elimina la memoria del arreglo
    delete[] arreglo;
}



void ArregloDinamico::insertar_final(const string &v){
    if(cont == tam){
        // Expandir
        expandir();
    }
    // Una vez expandido, ahora ingresaremos datos al nuevo arreglo
    arreglo[cont] = v;
    cont++;
}



void ArregloDinamico::insertar_inicio(const string &v){
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
    string *nuevo = new string[tam+MAX];

    for(size_t i=0; i<cont; i++){
        nuevo[i] = arreglo[i];
    }
    delete arreglo;
    arreglo = nuevo;
    tam = tam + MAX;
}
