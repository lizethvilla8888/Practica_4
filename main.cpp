#include "nodo.h"
#include "red.h"



int main()
{


    nodo mi_nodo;
    mi_nodo.leer_texto();
    string x =mi_nodo.leer_texto();
    mi_nodo.tra_inf(x);
    mi_nodo.Agregar_enlaces("L",78);
    mi_nodo.Agregar_enlaces("B",20);
    mi_nodo.imprimir_enrrutador();
    cout << endl;
    mi_nodo.modificar_enlaces("B",5);
    mi_nodo.imprimir_enrrutador();

    cout << "\n enrutador modificado"<<endl;
    mi_nodo.eliminar_enlaces("A");
    mi_nodo.imprimir_enrrutador();


    red mi_red;
    map<string,int>mapasion;
    //ponemos elementos
    mapasion["perra"]=10;
    mapasion["flor"]=12;
    mapasion["gucamaya"]=7;

    mi_red.agregar_nodos(mapasion);
    mi_red.imprimir_vector();
    mi_red.eliminar_nodos("flor");
    mi_red.imprimir_vector();

    return 0;
}
