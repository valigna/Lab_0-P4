#ifndef DT_OBJETO_ROTO
#define DT_OBJETO_ROTO

#include "Utils.hh"

class DTObjetoRoto
{
private:
    string NombreObjeto;
    bool Prestado;
    string NombreNinio;
public:
    // Defino Constructores
    DTObjetoRoto();
    DTObjetoRoto(string nObj, bool p, string nNin);
    DTObjetoRoto(const DTObjetoRoto &obj);

    // Defino el Destructor
    ~DTObjetoRoto();

    // Defino Getters y Setters...
    void setNombreObjeto(string nombre);
    string getNombreObjeto();
    void setPrestado(bool p);
    bool getPrestado();
    void setNombreNinio(string nombre);
    string getNombreNinio();
};

#endif