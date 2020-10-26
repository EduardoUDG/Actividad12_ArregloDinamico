#ifndef ARREGLO_DINAMICO_H
#define ARREGLO_DINAMICO_H

#include<iostream>
#include<string>
using namespace std;

class ArregloDinamico{
    private:
        string *arreglo;
        size_t tam;
        size_t cont;
        // MAX representa el tamaño maximo inicial de nuestro arreglo
        const static size_t MAX = 5;

    public:
        // Constructor y Destructor
        ArregloDinamico();
        ~ArregloDinamico();

        void insertar_final(const std::string &v);
        void insertar_inicio(const std::string &v);
        size_t size();

        // Sobrecargar Operador []
        string operator[](size_t p){ return arreglo[p]; }

    private:
        // Metodo privado
        void expandir();


};


#endif