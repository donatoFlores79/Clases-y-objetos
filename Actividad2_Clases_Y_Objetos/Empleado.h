#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

#include <string>
#include "iostream"

class Empleado{
private:
    int claveEmpleado;
    std::string nombre, domicilio, reportaA;
    float sueldo;
public:
    Empleado();

    void setClaveEmpleado(const int&);
    void setNombre(const std::string&);
    void setSueldo(const float&);

    int getClaveEmpleado() const;

    void imprimir() const;
    void cambiaDomicilio(const std::string&);
    void cambiaReportaA(const std::string&);
    void actualizarSueldo(const float&);

    void menuEmpleado();
};



#endif // EMPLEADO_H_INCLUDED
