#include "nodo.h"

string nodo::leer_texto()
{
    char a;
    fstream archivo;
    string texto = "";
    unsigned long long tamano_texto = 0;
    archivo.open("conexiones.txt", ios_base::in| ios_base::binary| ios_base::ate); //abrimos el archivo en modo lectura
    //comprobamos si el archivo si abrio
    if (archivo.is_open())
    {
        tamano_texto=archivo.tellg();
        archivo.seekg(0);
        for(unsigned long long i=0;i<tamano_texto;i++)
        {
            archivo.get(a);
            texto+= a;
        }
        cout<<texto<<endl;
    }
    else{
            cout<<"El archivo no se pudo abrir, lo mas probable es que no exista"<<endl;
        }
    archivo. close(); // cerramos el archivo
    return texto;
}

void nodo::tra_inf(string info)
{
    unsigned long long tamano=info.length();
    for (unsigned long long i=0;i<tamano;i+=2)
    {
        cout<<info[i];
    }

}

void nodo::agregar_enlaces(string clave, int costo){
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
        cout << "Clave: " << it->first << ", Valor: " << it->second <<std::endl;
    }
}

void nodo::eliminar_enrrutador()
{
  enrrutador.clear(); // modificacion c
}

nodo::nodo() : enrrutador ({{"Enlace", 0}}) {

}



