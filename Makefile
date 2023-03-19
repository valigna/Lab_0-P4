
CXX=g++
IDIR=include
CDIR=src
ODIR=obj

main: main.o DTObjetoRoto.o Objeto.o JuegoMesa.o Libro.o Ninio.o
        g++ main.o DTObjetoRoto.o Objeto.o JuegoMesa.o Libro.o Ninio.o -o main
        ./main

main.o: main.cpp utilsMain.cpp
        g++ -c main.cpp utilsMain.cpp

DTObjetoRoto.o: src/DTObjetoRoto.cpp include/DTObjetoRoto.hh
        g++ -c src/DTObjetoRoto.cpp

Objeto.o: src/Objeto.cpp include/Objeto.hh
        g++ -c src/Objeto.cpp

JuegoMesa.o: src/Objeto.cpp include/Objeto.hh src/JuegoMesa.cpp include/JuegoMesa.hh
        g++ -c src/JuegoMesa.cpp

Libro.o: src/Objeto.cpp include/Objeto.hh src/Libro.cpp include/Libro.hh
        g++ -c src/Libro.cpp

Ninio.o: src/Ninio.cpp include/Ninio.hh
        g++ -c src/Ninio.cpp

clean:
        rm *.o ejecutable