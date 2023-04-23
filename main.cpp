#include "nodo.h"



int main()
{

    nodo mi_nodo;

    mi_nodo.Agregar_enlaces("A",10);
    mi_nodo.Agregar_enlaces("B",20);
    mi_nodo.imprimir_enrrutador();
    cout << endl;
    mi_nodo.modificar_enlaces("B",5);
    mi_nodo.imprimir_enrrutador();

    cout << "\n enrutador modificado"<<endl;
    mi_nodo.eliminar_enlaces("A");
    mi_nodo.imprimir_enrrutador();


    return 0;
}
