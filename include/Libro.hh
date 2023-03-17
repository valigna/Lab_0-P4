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
    // Defino Constructores
    Libro();
    Libro(string Nombre, int AnioComprado, estado Estado, string autor, int CantPaginas);
    
    // Defino el Destructor
    ~Libro();

    // Defino Getters y Setters
    string getAutor();
    void setAutor(string autor);
    int getCantPaginas();
    void setCantPaginas(int CantPaginas);

    // Otras Operaciones
    string toString();
};

#endif