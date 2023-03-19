#include "src/Objeto.cpp"
#include "src/JuegoMesa.cpp"
#include "src/Libro.cpp"
#include "src/Ninio.cpp"
#include "src/DTObjetoRoto.cpp"
#include <iostream>

void setLink(Objeto *obj, Ninio *ninio) {
    obj->setPrestadoA(ninio);
    ninio->addPrestadoA(obj);
}

/* Como se declara la sobrecarga del operador <<

std::ostream &operator<<(std::ostream &os, myclass const &m) { 
    return os << m.i;
}

o

std::ostream& operator<<(std::ostream& os, const myclass& obj)
{
      os << obj.somevalue;
      return os;
}

*/

std::ostream& operator<<(std::ostream& os, const DTObjetoRoto& obj) {
    os << (const_cast<DTObjetoRoto&>(obj)).getNombreObjeto() << ", Prestado ";
    if(obj.getPrestado()) {
        os << "SI, " << obj->getNombreNinio();
    }
    else {
        os << "NO";
    }
    return os;
}