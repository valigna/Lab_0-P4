/* 
    //Libros...
    Libro *l1 = new Libro("Nacidos de la bruma: El imperio final", 2022, Roto, "Brandon Sanderson", 688);
    cout << l1->toString();
    Libro *l2 = new Libro("Las Malas", 2022, Nuevo, "Camila Sosa Villada", 240);
    cout << l2->toString();
    Libro *l3 = new Libro("El cocodrilo al que no le gustaba el agua", 2016, Roto, " Gemma Merino", 32);
    cout << l3->toString();
    
    //Juegos...
    JuegoMesa *j1 = new JuegoMesa("Uno", 2022, Roto, 7, 10);
    cout << j1->toString();
    JuegoMesa *j2 = new JuegoMesa("Mazo de Cartas", 2019, Nuevo, 7, 4);   
    cout << j2->toString();
    JuegoMesa *j3 = new JuegoMesa("Dados", 2020, Roto, 2, 6);
    cout << j3->toString();

    //Niños...
    Ninio *n1 = new Ninio("Maria Laura", 10, "Nueva Palmira 1521", "099298190");
    Ninio *n2 = new Ninio("Alex", 5, "Humberto Primo 1501", "29094141");
    
    n1->addPrestadoA(j2);
    j2->setPrestadoA(n1);
    n1->addPrestadoA(l1);
    l1->setPrestadoA(n1);
    n1->addPrestadoA(j3);
    j3->setPrestadoA(n1);
    
    n2->addPrestadoA(j1);
    j1->setPrestadoA(n2);
    n2->addPrestadoA(l3);
    l3->setPrestadoA(n2);

    n1->listarObjetosPrestados();
    n2->listarObjetosPrestados();
    
 */


     //--INSERT--
    //Libros...
    // mapaObjetos.insert (std::pair<string, Objeto *>("Nacidos de la bruma: El imperio final", new Libro("Nacidos de la bruma: El imperio final", 2022, Roto, "Brandon Sanderson", 688)));
    // mapaObjetos.insert (std::pair<string, Objeto *>("Las Malas", new Libro("Las Malas", 2022, Nuevo, "Camila Sosa Villada", 240)));
    // mapaObjetos.insert (std::pair<string, Objeto *>("El cocodrilo al que no le gustaba el agua", new Libro("El cocodrilo al que no le gustaba el agua", 2016, Roto, "Gemma Merino", 32)));
    
    // //Juegos...
    // mapaObjetos.insert (std::pair<string, Objeto *>("Uno", new JuegoMesa("Uno", 2022, Roto, 7, 10)));
    // mapaObjetos.insert (std::pair<string, Objeto *>("Mazo de Cartas", new JuegoMesa("Mazo de Cartas", 2019, Nuevo, 7, 4)));
    // mapaObjetos.insert (std::pair<string, Objeto *>("Dados", new JuegoMesa("Dados", 2020, Roto, 2, 6)));
    //--INSERT--