#include "Empleado.h"

using namespace std;

Empleado::Empleado(){
    claveEmpleado = 0;
    nombre = "nombre";
    domicilio = "domicilio";
    reportaA = "reporta a";
    sueldo = 0;
}

void Empleado::setClaveEmpleado(const int& _clave){
    claveEmpleado = _clave;
}

void Empleado::setNombre(const string& _nombre){
    nombre = _nombre;
}

void Empleado::setSueldo(const float& _sueldo){
    sueldo = _sueldo;
}

int Empleado::getClaveEmpleado() const{
    return claveEmpleado;
}

void Empleado::imprimir() const{
    cout<< nombre << "|" << claveEmpleado << "|" << domicilio << "|" << sueldo << endl << "Reporta a:" << reportaA << endl;
}

void Empleado::cambiaDomicilio(const string& nuevoDomicilio){
    domicilio = nuevoDomicilio;
}

void Empleado::cambiaReportaA(const string& nuevoReportaA){
    reportaA = nuevoReportaA;
}

void Empleado::actualizarSueldo(const float& porcentajeAumento){
    sueldo = sueldo + sueldo*(porcentajeAumento/100);
}

void Empleado::menuEmpleado(){
    int opc;
    float sueldoAux;
    string aux;

    cout<< "\nQue accion deseas realizar?\n";
    cout<< "1.Cambiar el domicilio del empleado\n";
    cout<< "2.Actualizar el sueldo del empleado\n";
    cout<< "3.Imprimir los datos del empleado\n";
    cout<< "4.Cambiar el nombre de la persona a la que reporta el empleado\n";
    cout<< "--->";
    cin>> opc;

    switch(opc){
    case 1:
        cout<< "Ingresa el nuevo domicilio:"; cin>> aux;
        cambiaDomicilio(aux);
        break;
    case 2:
        cout<< "Ingresa el porcentaje a aumentar el sueldo:"; cin>> sueldoAux;
        actualizarSueldo(sueldoAux);
        break;
    case 3:
        imprimir();
        break;
    case 4:
        cout<< "Ingresa el nombre de la persona a la que reporta el empleado:"; cin>> aux;
        cambiaReportaA(aux);
        break;
    }
}
