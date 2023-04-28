#include "nodo.h"
#include "red.h"
#include "database.h"

int main()
{

/*
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
    mi_nodo.eliminar_enlaces("B");
    mi_nodo.Agregar_enlaces("x",100);
    mi_nodo.imprimir_enrrutador();



    red mi_red;
    map<string,int>mapasion;
    //ponemos elementos
    mapasion["perra"]=10;
    mapasion["flor"]=12;
    mapasion["gucamaya"]=7;

    map<string,int>mapas;
    //ponemos elementos
    mapas["perra"]=1;
    mapas["flor"]=2;
    mapas["gucamaya"]=17;

    nodo mi_nodo;
    mi_nodo.Agregar_enlaces("A",10);
    mi_nodo.Agregar_enlaces("B",10);



    mi_red.agregar_nodos(mi_nodo);

    mi_red.imprimir_vector();
    mi_red.eliminar_nodos("A");
    mi_red.imprimir_vector();


    string uno = "enrrutador1", dos = "enrrutador2";
    nodo enrrutador1 (uno);
    enrrutador1.agregar_enlaces("A", 10);
    enrrutador1.agregar_enlaces("B", 20);
    enrrutador1.agregar_enlaces("C", 30);

    nodo enrrutador2 (dos);
    enrrutador2.agregar_enlaces("A", 50);
    enrrutador2.agregar_enlaces("T", 40);
    enrrutador2.agregar_enlaces("C", 30);

    red network;
    network.agregar_nodos(enrrutador1);
    network.agregar_nodos(enrrutador2);


    cout << "\n Red"<< endl<<endl;

    network.imprimir_vector();

    cout << "Imprimir vector"<<endl<<endl;

//    network.imprimir_vector();

//    enrrutador1.eliminar_enrrutador();



    network.eliminar_nodo(uno);

    cout << "enrrutador 1 eliminado   \n \n \n ";
    network.imprimir_vector();



    // Crear un objeto de la clase database
    database db;

    string nombre_txt = "conexiones.txt";

    // Establecer el nombre y la ruta del archivo de la base de datos
    db.set_name(nombre_txt);
    db.set_path("C:\\Users\\USUARIO\\Desktop\\UdeA\\Info ii\\Laboratorios\\Practica_4\\build-Practica_4-Desktop_Qt_6_4_2_MinGW_64_bit-Debug");


    // Obtener los valores de la columna 'A'
    vector<string> col_A = db.get_col(0);

    // Crear un vector para almacenar las letras únicas de la columna 'A'
    vector<char> letras_A;

//    // Iterar sobre los valores de la columna 'A'
//    for (string valor : col_A) {
//        // Iterar sobre los caracteres del valor
//        for (char letra : valor) {
//            // Si la letra no está en el vector de letras únicas, agregarla
//            if (find(letras_A.begin(), letras_A.end(), letra) == letras_A.end()) {
//                letras_A.push_back(letra);
//            }
//        }
//    }

    // Imprimir las letras únicas de la columna 'A'
    cout << "Letras únicas de la columna A:" << endl;
    for (char letra : letras_A) {
        cout << letra << endl;
    }
 /*

    return 0;
}

void imprimir_menu()
{
//    int condicion = 0, opcion= 1;

//    cout << "Seleccione una opcion; \n";
//    cin >> opcion;

//    while (condition != 0) {

//    switch (opcion) {
//         case 1:
//           cout << "Opcion 1 elegida\n";
//           cout << "Modelar un enrutador.\n";
//           string nombre ;


//           break;
//         case 2:
//           std::cout << "Opcion 2 elegida\n";
//           break;
//         case 3:
//           std::cout << "Opcion 3 elegida\n";
//           break;
//         default:
//           std::cout << "Opcion invalida\n";
//           break;
//       }
//    }



    database texto;  // defino objeto de la clase database
    string texto_string;

    texto.set_name("conexiones.txt"); // le mando el nombre de el archivo el cual quiero leer
    texto_string = texto.get_all_database(); // le asigno a texto_string todo el texto leido del archivo txt
    // cout << texto_string; // imprimo todo el texto leido
    vector<string> enrrutadores;

    vector<string> nombres;
    string cadena;

    string nombre, conexion, costo,aux;

    int espacio;
    char c = ' ';

    enrrutadores = texto.get_all_rows();

    for (int i = 0; i < enrrutadores.size(); i++) {
        cadena =  enrrutadores[i];
        aux = cadena;
        espacio = cadena.find(c);
        nombre = cadena.substr(0,espacio);
        aux = cadena.substr (espacio+1,cadena.length());

        espacio = aux.find (c);
        cout << "aux   "<<aux<<"espacio"<< espacio << endl;
        conexion = aux.substr(0,espacio);
        costo = aux.substr (espacio,cadena.length());
        cout << "nombre "<< nombre<< " conexion " <<conexion << " costo "<<costo<<endl;
    }

*/



}



class Mapa {
private:
    map<string, int> m;
    string nombre;

public:
    Mapa(string nombre): nombre(nombre) {}

    void agregar(string letra, int costo) {
        m[letra] = costo;
    }

    void mostrar() {
        cout << "Mapa de " << nombre << ":" << endl;
        for (auto it = m.begin(); it != m.end(); it++) {
            cout << "\t" << it->first << " -> " << it->second << endl;
        }
    }

    int obtenerCosto(string letra) {
        return m[letra];
    }

    string obtenerNombre() {
        return nombre;
    }
};

vector<Mapa> crearMapas(string archivo) {
    vector<Mapa> mapas;
    ifstream archivo_entrada(archivo);
    if (archivo_entrada) {
        string linea;
        while (getline(archivo_entrada, linea)) {
            string origen, destino;
            int costo;
            stringstream ss(linea);
            ss >> origen >> destino >> costo;
            bool encontrado = false;
            for (int i = 0; i < mapas.size(); i++) {
                if (mapas[i].obtenerNombre() == origen) {
                    mapas[i].agregar(destino, costo);
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) {
                Mapa mapa(origen);
                mapa.agregar(destino, costo);
                mapas.push_back(mapa);
            }
        }
        archivo_entrada.close();
    }
    return mapas;
}

void mostrarMatriz(vector<Mapa> mapas) {
    cout << "Matriz de adyacencia:" << endl;
    for (int i = 0; i < mapas.size(); i++) {
        cout << "\t" << mapas[i].obtenerNombre();
    }
    cout << endl;
    for (int i = 0; i < mapas.size(); i++) {
        cout << mapas[i].obtenerNombre() << "\t";
        for (int j = 0; j < mapas.size(); j++) {
            if (i == j) {
                cout << "0\t";
            } else {
                int costo = mapas[i].obtenerCosto(mapas[j].obtenerNombre());
                if (costo == 0) {
                    cout << "-\t";
                } else {
                    cout << costo << "\t";
                }
            }
        }
        cout << endl;
    }
}

int main() {
    string archivo = "archivo.txt";
    vector<Mapa> mapas = crearMapas(archivo);
    for (int i = 0; i < mapas.size(); i++) {
        mapas[i].mostrar();
    }
    mostrarMatriz(mapas);
    return 0;
}
