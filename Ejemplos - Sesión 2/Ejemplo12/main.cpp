#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

struct persona {
    char nombre[30];
    int edad;
    long telefono;
};

// Declaraciones de funciones
persona CrearPersona(const char n[30], int e, long t);
void Escribir(persona p);             // paso por valor
void EscribirPuntero(persona* p);      // mediante puntero

int main(int argc, char** argv)
{
    persona ejemplo;

    ejemplo = CrearPersona("Jesus", 99, 123456789);
    cout << "Paso por valor" << endl;
    Escribir(ejemplo);
    cout << endl;

    ejemplo = CrearPersona("Mario", 55, 987654321);
    cout << "Paso con punteros" << endl;
    EscribirPuntero(&ejemplo);

    return 0;
}

void Escribir(persona p)
{
    cout << p.nombre << " tiene " << p.edad << " anyos y su telefono es " << p.telefono << endl;
}

void EscribirPuntero(persona* p)
{
    cout << p->nombre << " tiene " << p->edad << " anyos y su telefono es " << p->telefono << endl;
}

persona CrearPersona(const char n[30], int e, long t)
{
    persona aux;
    strcpy(aux.nombre, n); // la cadena n se copia en aux.nombre
    aux.edad = e;
    aux.telefono = t;
    return aux;
}