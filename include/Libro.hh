#ifndef LIBRO
#define LIBRO

#include "Utils.hh"
#include "Objeto.hh"

class Libro : public Objeto
{
private:
    string Autor;
    int CantPaginas;
public:
    // Defino Constructores...
    Libro(string Nombre, int AnioComprado, estado Estado, string autor, int CantPaginas);
    
    // Defino el Destructor...
    ~Libro();

    // Defino Getters...
    string getAutor();
    int getCantPaginas();

    // Otras Operaciones...
    string toString();
};

#endif