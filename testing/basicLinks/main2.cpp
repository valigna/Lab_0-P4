/* 
 Con el objetivo de entender un poco mas como funciona la implementacion de los links, voy a hacer
 un caso mas basico que el de la entrega.
 Supongamos que es un sistema para gestionar los libros prestados en una biblioteca...
*/
#include "src2/Persona.cpp"
#include "src2/Libro.cpp"

void set_Link(Libro *l,Persona *p) {
    l->set_Owner(p);
    p->add_Book(l);
}

int main() {

    Persona *p = new Persona("Rodolfo","52184641",42,26062171);
    Libro *l1 = new Libro("Geronimo Stilton",2016);
    Libro *l2 = new Libro("Percy Jackson",2017);
    Libro *l3 = new Libro("Otro Libro Mas",2002);

    set_Link(l1,p);
    set_Link(l2,p);
    set_Link(l3,p);
    p->listarLibrosPedidos();
    delete l2;
    cout << "Supuestamente borre el de Percy Jackson" << endl;
    p->listarLibrosPedidos();
    delete p;
    cout << "Intento de acceder a un libro que estaba linkeado a Rodolfo..." << endl;
    if(l1->get_Owner() == NULL) {cout << "Ya no esta asociado a Rodolfo" << endl;}

    return 1;
}