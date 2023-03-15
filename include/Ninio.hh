#include "Utils.hh"
class Objeto{};


#ifndef NINIO
#define NINIO

class Ninio
{
private:
    string Nombre;
    int Edad;
    string Direccion;
    string Telefono;
    //vector<Objeto> PrestadoA;
    vector<*Objeto> PrestadoA;
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

    // Funciones auxiliares para el manejo del link
    void addPrestadoA(Objeto obj);
    void removePrestadoA(Objeto obj);

    //Defino otras operaciones
    void listarObjetosPrestados();

    //Defino Destructor
    ~Ninio();
};

#endif