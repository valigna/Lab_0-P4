#include "Utils.hh"
#include "Objeto.hh"

using namespace std;

#ifndef LIBRO
#define LIBRO

class Libro : public Objeto
{
private:
    string Autor;
    int CantPaginas;

public:
    /* Getters y Setters */
    string getAutor();
    void setAutor(string autor);
    int getCantPaginas();
    void setCantPaginas(int CantPaginas);

    /* Constructores */
    Libro();
    Libro(string Nombre, int AnioComprado, estado Estado, string autor, int CantPaginas);

    /* Destructor */
    ~Libro();

    /* Otras */
    string toString();
};

#endif