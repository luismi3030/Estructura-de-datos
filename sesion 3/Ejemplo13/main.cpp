#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Persona.hpp"

using namespace std;

int main() {
    // Inicializar la semilla para los números aleatorios
    srand(time(NULL));
    
    // Array con las edades del 18 al 27 (ambos inclusive, sin repetir)
    int edades[] = {18, 19, 20, 21, 22, 23, 24, 25, 26, 27};
    Persona* personas[10];
    
    cout << "--- Lista de Personas ---" << endl;
    for(int i = 0; i < 10; i++) {
        personas[i] = new Persona(edades[i]);
        personas[i]->mostrar();
    }
    
    // Liberar memoria
    for(int i = 0; i < 10; i++) {
        delete personas[i];
    }
    
    return 0;
}