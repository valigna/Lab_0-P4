#include "include/Objeto.hh"
#include "include/JuegoMesa.hh"
#include "include/Libro.hh"
#include "include/Ninio.hh"
#include "include/DTObjetoRoto.hh"
#include <iostream>

void setLink(Objeto *obj, Ninio *ninio) {
    obj->setPrestadoA(ninio);
    ninio->addPrestadoA(obj);
}

std::ostream& operator<<(std::ostream& os, const DTObjetoRoto& obj) {
    os << (const_cast<DTObjetoRoto&>(obj)).getNombreObjeto() << ", Prestado ";
    if((const_cast<DTObjetoRoto&>(obj)).getPrestado()) {
        os << "SI, " << (const_cast<DTObjetoRoto&>(obj)).getNombreNinio();
    }
    else {
        os << "NO";
    }
    return os;
}