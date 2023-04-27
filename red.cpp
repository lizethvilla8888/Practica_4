#include "red.h"

red::red()
{
    // Constructor vacío
}

void red::agregar_nodos(nodo enrruta)
{
    vectorr.push_back(enrruta);
}

void red:: imprimir_vector()
{
            cout<<" Tabla de enrrutamiento "<<endl;
    for (vector<nodo>::iterator it = vectorr.begin(); it != vectorr.end(); ++it)
    {
         it->imprimir_enrrutador();
    }
}

void red::eliminar_enlace_nodos(string nombre)
{
    for (vector<nodo>::iterator it = vectorr.begin(); it != vectorr.end(); ++it)
        {
            it->eliminar_enlaces(nombre);
        }
}

void red::eliminar_nodo(string nombre)
{
    for (auto it = vectorr.begin(); it != vectorr.end(); ++it) {
        if (it->obtener_nombre() == nombre) {
            vectorr.erase(it);
            cout << "El nodo " << nombre << " fue eliminado de la red" << endl;
            return;
        }
    }
    cout << "El nodo " << nombre << " no existe en la red" << endl;
}
