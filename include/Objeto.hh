#include "Utils.hh"
#include "Ninio.hh"

#ifndef OBJETO
#define OBJETO

class Objeto
{
private:
    string Nombre;
    int AnioComprado;
    estado Estado;
    string EstadoToString();
    Ninio *PrestadoA;
public:
    // Defino operaciones auxiliares para manipular el link...
    Ninio* getPrestadoA();
    void setPrestadoA(Objeto *obj);
    void delPrestadoA(); 

    //Defino constructores
    Objeto();
    Objeto(string Nombre, int AnioComprado, estado Estado);

    //Defino destructores
    ~Objeto();

    //Defino getters y setters
    string getNombre();
    void setNombre(string nombre);
    int getAnio();
    void setAnio(int anio);
    estado getEstado();
    void setEstado(estado Estado);
    void setPrestadoA(Ninio *PrestadoA);
    Ninio* getPrestadoA();

    //Defino otras funciones
    virtual string toString();
    string toStringAux();
};

#endif