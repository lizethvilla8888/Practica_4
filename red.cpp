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
    for (vector<map<string, int>>::iterator it = vectorr.begin(); it != vectorr.end(); ++it)
    {
        cout<<" mapa "<<endl;
        for (map<string, int>::iterator it2 = it->begin(); it2 != it->end(); ++it2)
        {
            cout << it2->first << ": " << it2->second << endl;
        }
    }
}

void red::eliminar_nodos(string nombre)
{
    for (vector<map<string, int>>::iterator it = vectorr.begin(); it != vectorr.end(); ++it)
    {
        if (it->find(nombre) != it->end()) // Verifica si la clave esta  en el mapa actual
            {
                it->erase(nombre); // Si existe, elimina la entrada del mapa
                break; // Sale del ciclo porque ya se encontró y eliminó la entrada
            }
        else{cout<<"la clave no existia"<<endl;}
    }
}
