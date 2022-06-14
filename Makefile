SRC = Elemento.cpp \
	  Lista.cpp \

OBJ = Elemento.o \
	  Lista.o

all:
	g++ -std=c++17 -c ${SRC}
	g++ -std=c++17 ${OBJ} main.cpp -o lista