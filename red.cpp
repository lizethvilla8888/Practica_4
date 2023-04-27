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



void red::eliminar_nodos(string nombre)
{
    for (vector<nodo>::iterator it = vectorr.begin(); it != vectorr.end(); ++it)
        {
            it->eliminar_enlaces(nombre);
        }
}
