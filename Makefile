SRC = Nodo.cpp \
	  Arbol.cpp

OBJ = Nodo.o \
	  Arbol.o

all:
	g++ -std=c++17 -c ${SRC}
	g++ -std=c++17 ${OBJ} main.cpp -o arboles