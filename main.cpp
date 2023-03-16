#include "../include/DTObjetoRoto.hh"
#include "../include/JuegoMesa.hh"
#include "../include/Libro.hh"
#include "../include/Ninio.hh"
#include "../include/Objeto.hh"


int main(){
    //Libros...
    Libro l1 = new Libro("Nacidos de la bruma: El imperio final", 2022, Roto, "Brandon Sanderson", 688);
    cout << l1->toString();
    Libro l2 = new Libro("Las Malas", 2022, Nuevo, "Camila Sosa Villada", 240);
    cout << l2->toString();
    Libro l3 = new Libro("El cocodrilo al que no le gustaba el agua", 2016, Roto, " Gemma Merino", 32);
    cout << l3->toString();
    
    //Juegos...
    Juego j1 = new JuegoMesa("Uno", 2022, Roto, 7, 10);
    cout << j1->toString();
    Juego j2 = new JuegoMesa("Mazo de Cartas", 2019, Nuevo, 7, 4);   
    cout << j2->toString();
    Juego j3 = new JuegoMesa("Dados", 2020, Roto, 2, 6);
    cout << j3->toString();

    //Niños...
    Ninio n1 = new Ninio("Maria Laura", 10, "Nueva Palmira 1521", "099298190");
    Ninio n2 = new Ninio("Alex", 5, "Humberto Primo 1501", "29094141");
    
    n1->addPrestadoA(j2);
    j2->setPrestadoA(n1);
    n1->addPrestadoA(l1);
    l1->setPrestadoA(n1);
    n1->addPrestadoA(j3);
    j3->setPrestadoA(n1)
    
    n2->addPrestadoA(j1);
    j1->setPrestadoA(n2);
    n2->addPrestadoA(l3);
    l3->setPrestadoA(n2);

    n1->listarObjetosPrestados();
    n2->listarObjetosPrestados();
    

    return 1;
}