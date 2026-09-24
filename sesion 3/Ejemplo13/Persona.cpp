#include "Persona.hpp"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

Persona::Persona(int edad) {
    this->edad = edad;
    this->genero = rand() % 2; // Asigna 0 (Hombre) o 1 (Mujer) automáticamente
    
    // Generación de un DNI aleatorio automático
    sprintf(this->dni, "%08d%c", rand() % 100000000, 'A' + (rand() % 26));
}

Persona::~Persona() {
}

int Persona::getEdad() {
    return this->edad;
}

bool Persona::esMujer() {
    return this->genero == 1;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

void Persona::mostrar() {
    cout << "Edad: " << edad 
         << ", Género: " << (esMujer() ? "Mujer" : "Hombre") 
         << ", DNI: " << dni << endl;
}