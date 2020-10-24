#ifndef ARREGLO_DINAMICO_H
#define ARREGLO_DINAMICO_H

#include<iostream>
#include<string>
using namespace std;

class ArregloDinamico{
    private:
        int *arreglo;
        size_t tam;
        size_t cont;
        // MAX representa el tamaño maximo inicial de nuestro arreglo
        const static size_t MAX = 5;

    public:
        // Constructor y Destructor
        ArregloDinamico();
        ~ArregloDinamico();

        void insertar_final(int v);
        void insertar_inicio(int v);
        size_t size();

        // Sobrecargar Operador []
        int operator[](size_t p){ return arreglo[p]; }

    private:
        // Metodo privado
        void expandir();


};


#endif