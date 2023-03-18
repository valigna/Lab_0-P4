#include "utilsMain.cpp"

int main() {
    //Opcion con Map... | Creacion de los conjuntos Objeto y Ninio dados por la letra...
    // Partes a) y b))
    std::map<string,Objeto *> mapaObjetos;
    
    // --EMPLACE--
    // Libros...
    mapaObjetos.emplace("Nacidos de la bruma: El imperio final", new Libro("Nacidos de la bruma: El imperio final", 2022, Roto, "Brandon Sanderson", 688));
    mapaObjetos.emplace("Las Malas", new Libro("Las Malas", 2022, Nuevo, "Camila Sosa Villada", 240));
    mapaObjetos.emplace("El cocodrilo al que no le gustaba el agua", new Libro("El cocodrilo al que no le gustaba el agua", 2016, Roto, "Gemma Merino", 32));
    
    // Juegos...
    mapaObjetos.emplace("Uno", new JuegoMesa("Uno", 2022, Roto, 7, 10));
    mapaObjetos.emplace("Mazo de Cartas", new JuegoMesa("Mazo de Cartas", 2019, Nuevo, 7, 4));
    mapaObjetos.emplace("Dados", new JuegoMesa("Dados", 2020, Roto, 2, 6));
    // --EMPLACE--

    // Parte c)
    cout << "-------------------------------" << endl;
    cout << "Imprimiendo los objetos creados" << endl;
    cout << "-------------------------------" << endl;
    for(auto& x: mapaObjetos){
        cout << (x.second)->toString() << endl;
    }
    cout << "-------------------------------" << endl;
    


    // Parte d)
    std::map<std::string, Ninio *> mapaNinios;
    //--EMPLACE--
    mapaNinios.emplace("Maria Laura", new Ninio("Maria Laura", 10, "Nueva Palmira 1521", "099298190"));
    mapaNinios.emplace("Alex", new Ninio("Alex", 5, "Humberto Primo 1501", "29094141")); 


    // Parte e)
    setLink(mapaObjetos["Mazo de Cartas"],mapaNinios["Maria Laura"]);
    setLink(mapaObjetos["Nacidos de la bruma: El imperio final"],mapaNinios["Maria Laura"]);
    setLink(mapaObjetos["Dados"],mapaNinios["Maria Laura"]);
    setLink(mapaObjetos["Uno"],mapaNinios["Alex"]);
    setLink(mapaObjetos["El cocodrilo al que no le gustaba el agua"],mapaNinios["Alex"]);
    
    // Parte f)
    cout << "Imprimiendo los objetos prestados" << endl;
    cout << "-------------------------------" << endl;
    for(auto& x: mapaNinios){
        forward_list<string> aux = (x.second)->listarObjetosPrestados();
        while ((!aux.empty())) {
            cout << "Niño: " << (x.second)->getNombre() << "Objeto: " << aux.front() << endl;
            aux.pop_front();
        }
    }
    cout << "-------------------------------" << endl;
    
     // Parte g)
     std::map<string, DTObjetoRoto *> mapaObjetosRotos;
     cout << "Imprimiendo los objetos rotos" << endl;
     cout << "-------------------------------" << endl;
     for(auto& x: mapaObjetos){
         if((x.second)->getEstado() == Roto){
             mapaObjetosRotos.emplace((x.second)->getNombre(), new DTObjetoRoto(x.second));
             cout << (x.second)->toString() << endl;
         }
     }
     cout << "-------------------------------" << endl;
    
    // Parte h)
    Objeto* dummy = mapaObjetos["Uno"];
    mapaObjetos.erase("Uno");
    for(auto& x: mapaObjetos) {

        Ninio *n = (x.second)->getPrestadoA();
        bool estabaRoto = false;
        if( ((x.second)->getEstado()) == Roto) {estabaRoto = true;}

        // Borramos el objeto...

        // Consultamos la nueva lista de objetos prestados del Ninio anteriormente linkeado con el objeto...
        forward_list<string> lista = n->listarObjetosPrestados();
        while ((!lista.empty())) {
            cout << "Ninio: " << (n->getNombre()) << "Objeto : " << lista.front() << endl;
            lista.pop_front();
        }

        // En caso de que fuera un objeto "Roto", consultamos nuevamente la lista de objetos rotos...
        if (estabaRoto) {
            for()
        }
    }

    return 1;
    
}