#ifndef RED_H
#define RED_H

#include <nodo.h>

class red
{
public:
    red();
    void agregar_nodos(map<string,int>);
    void eliminar_nodos(string nombre);
    void imprimir_vector();


private:
    vector<map<string,int>>vectorr;
};

#endif // RED_H
