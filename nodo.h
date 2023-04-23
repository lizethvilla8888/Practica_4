#ifndef NODO_H
#define NODO_H

#include <iostream>
#include <map>
#include <string>
#include <string.h>


using namespace std;

class nodo
{
public:

    nodo();
    void Agregar_enlaces(string clave, int costo);
    void eliminar_enlaces(string clave);
    void modificar_enlaces(string clave, int modificacion);
    void imprimir_enrrutador();
private:
    map<string, int> enrrutador;
    map<string, int>::iterator it;

};

#endif // NODO_H
