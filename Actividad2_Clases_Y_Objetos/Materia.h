#ifndef MATERIA_H_INCLUDED
#define MATERIA_H_INCLUDED

#include <string>
#include "iostream"

class Materia{
private:
    int clave;
    std::string nombre, profesor, libroTexto;
public:
    Materia(const std::string&);

    void imprimir() const;
    void cambiaClave(const int&);
    void cambiaProfe(const std::string&);
};

#endif // MATERIA_H_INCLUDED
