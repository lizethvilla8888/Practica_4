#ifndef NODO_H
#define NODO_H

#include <iostream>
#include <map>
#include <string>
#include <string.h>
#include <fstream>
#include <vector>




using namespace std;

class nodo
{
public:

    nodo(string n);
    string obtener_nombre() ;
    void agregar_enlaces(string clave, int costo);
    void eliminar_enlaces(string clave);
    void modificar_enlaces(string clave, int modificacion);
    void imprimir_enrrutador();
    void eliminar_enrrutador(); // pendiente
    string leer_texto();
    void tra_inf(string info);

private:
    string nombre;
    map<char,char>info_txt;
    map<string, int> enrrutador;
    map<string, int>::iterator it;

};

#endif // NODO_H
