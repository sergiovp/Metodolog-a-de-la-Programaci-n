#Metodología de la programación.
#Práctica makes.

AR=ar
CXX=g++
CXXFLAGS=-I$(INC) -Wall -g
LDFLAGS=-Llib/
LDLIBS=-lpunto
INC=include/
SRC=src/
OBJ=obj/
LIB=lib/
BIN=bin/

all : $(BIN)crear_rectangulo $(BIN)distancia $(BIN)central_cir $(BIN)area_cir

$(BIN)crear_rectangulo : $(OBJ)rectangulo_main.o $(LIB)libpunto.a
	$(CXX) -o $(BIN)crear_rectangulo $(OBJ)rectangulo_main.o $(LDFLAGS) $(LDLIBS)

$(BIN)distancia : $(OBJ)longitud.o $(LIB)libpunto.a
	$(CXX) -o $(BIN)distancia $(OBJ)longitud.o $(LDFLAGS) $(LDLIBS)

$(BIN)central_cir : $(OBJ)central.o $(LIB)libpunto.a
	$(CXX) -o $(BIN)central_cir $(OBJ)central.o $(LDFLAGS) $(LDLIBS)

$(BIN)area_cir : $(OBJ)area.o $(LIB)libpunto.a
	$(CXX) -o $(BIN)area_cir $(OBJ)area.o $(LDFLAGS) $(LDLIBS)

$(OBJ)rectangulo_main.o : $(SRC)rectangulo_main.cpp $(INC)punto.h $(INC)rectangulo.h
	$(CXX) -c $(CXXFLAGS) -o $(OBJ)rectangulo_main.o $(SRC)rectangulo_main.cpp

$(OBJ)longitud.o : $(SRC)longitud.cpp $(INC)punto.h
	$(CXX) -c $(CXXFLAGS) -o $(OBJ)longitud.o $(SRC)longitud.cpp

$(OBJ)central.o : $(SRC)central.cpp $(INC)punto.h $(INC)circulo.h
	$(CXX) -c $(CXXFLAGS) -o $(OBJ)central.o $(SRC)central.cpp

$(OBJ)rectangulo.o : $(SRC)rectangulo.cpp $(INC)punto.h $(INC)rectangulo.h
	$(CXX) -c $(CXXFLAGS) -o $(OBJ)rectangulo.o $(SRC)rectangulo.cpp

$(OBJ)area.o : $(SRC)area.cpp $(INC)circulo.h
	$(CXX) -c $(CXXFLAGS) -o $(OBJ)area.o $(SRC)area.cpp

$(OBJ)punto.o : $(INC)punto.h $(SRC)punto.cpp
	$(CXX) -c $(CXXFLAGS) -o $(OBJ)punto.o $(SRC)punto.cpp

$(OBJ)circulo.o : $(INC)circulo.h $(SRC)circulo.cpp $(INC)punto.h
	$(CXX) -c $(CXXFLAGS) -o $(OBJ)circulo.o $(SRC)circulo.cpp

$(LIB)libpunto.a : $(OBJ)punto.o $(OBJ)circulo.o $(OBJ)rectangulo.o
	$(AR) rvs $(LIB)libpunto.a $(OBJ)punto.o $(OBJ)circulo.o $(OBJ)rectangulo.o

clean : 
	echo "Limpiando..."
	rm $(OBJ)/*.o $(LIB)/lib*.o