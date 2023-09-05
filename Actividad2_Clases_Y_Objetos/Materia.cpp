#include "Materia.h"

using namespace std;

Materia::Materia(const string& _nombre){
    clave = 0;
    nombre = _nombre;
    profesor = "profesor";
    libroTexto = "libro de texto";
}

void Materia::imprimir() const{
    cout<< clave << "|" << nombre << "|" << profesor << "|" << libroTexto;
}

void Materia::cambiaClave(const int& _clave){
    clave = _clave;
}

void Materia::cambiaProfe(const string& _profesor){
    profesor = _profesor;
}
