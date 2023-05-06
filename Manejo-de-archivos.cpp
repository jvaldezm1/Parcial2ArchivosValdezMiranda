#include <iostream>
#include <fstream>



using namespace std;
string texto;


void crearArchivos1(){//creacion de archivos pares

        int cantidad;
    int i = cantidad;
        cout << "Cuantos archivos quiere crear \n";
        cin >> cantidad;
        string extension = ".txt";
        string cambioNombre = "files";
        string nuevoNombre = "files";

        for (i = 0; i < cantidad; i++) {
            ofstream file;
            file.open("C:\\Users\\miran\\OneDrive\\Documentos\\par" + nuevoNombre + to_string(i) + ".txt");
            file << "primera línea\n";
            file << "segunda línea\n";
            file << "tercera línea\n";
            file.close();
        }
        cout << "Archivos creados : " + to_string(i);
    }


    void agregarTexto(){//se agregan textos a los archivos creados.
        ofstream archivo;
        archivo.open("C:\\Users\\miran\\OneDrive\\Documentos\\par");
        archivo.open("files.txt", ios::app);
        if (archivo.is_open()) {
            archivo << "Este es un nuevo texto que se agrega al final del archivo." << endl;
            archivo.close();
            cout << "Texto agregado al archivo." << endl;
        }
        else {
            cout << "Error al abrir el archivo." << endl;
        }


}











