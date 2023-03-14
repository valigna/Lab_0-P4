#include "utils.hh"

#ifndef NINIO
#define NINIO

class Ninio
{
private:
    string Nombre;
    int Edad;
    string Direccion;
    string Telefono;
public:
    //Defino constructores
    Ninio();
    Ninio(string Nombre, int Edad, string Direccion, string Telefono);

    //Defino setters y getters
    void setNombre(string nombre);
    void setEdad(int edad);
    void setDireccion(string direccion);
    void setTelefono(string telefono);
    string getNombre();
    int getEdad();
    string getDireccion();
    string getTelefono();

    //Defino otras operaciones
    string* listarObjetosPrestados();

    //Defino Destructor
    ~Ninio();
};

#endif