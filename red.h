#ifndef RED_H
#define RED_H

#include <nodo.h>


class red
{
public:
    red();
    void agregar_nodos(nodo enrruta);
    void eliminar_enlace_nodos(string nombre);
    void imprimir_vector();
    void eliminar_nodo(string nombre);



private:
    vector <nodo> vectorr;

};

#endif // RED_H
