#include <iostream>
#include <fstream>
#include <filesystem>


using namespace std;
string texto;


void crearArchivos1(string directorio){//creacion de archivos pares

        int cantidad;
        cout << "Cuantos archivos quiere crear \n";
        cin >> cantidad;
        string extension = ".txt";
        string cambioNombre = "archivo";
        string nuevoNombre = "archivos";
        int i = cantidad;
        for (i = 0; i < cantidad; i++) {
            ofstream file;
            file.open(directorio + nuevoNombre + to_string(i) + ".txt");
            file << "primera línea\n";
            file << "segunda línea\n";
            file << "tercera línea\n";
            file.close();
        }
        cout << "Archivos creados : " + to_string(i);
    }







