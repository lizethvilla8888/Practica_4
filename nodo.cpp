#include "nodo.h"




void nodo::Agregar_enlaces(string clave, int costo){
    pair<string, int> par{clave, costo};
    enrrutador.insert(par);
}

void nodo::eliminar_enlaces(string clave){

    enrrutador.erase(clave);
}

void nodo::modificar_enlaces(string clave,int modificacion){

    enrrutador [clave] = modificacion;
}

void nodo::imprimir_enrrutador(){

    for (it = enrrutador.begin(); it != enrrutador.end(); ++it) {
        std::cout << "Clave: " << it->first << ", Valor: " << it->second <<std::endl;
    }
}

nodo::nodo() : enrrutador ({{"clave", 0}}) {}
