SRC = src
INC = include
OBJ = obj
BIN = bin

CXX = g++
CXXFLAGS =  -Wall -Wextra -pedantic -std=c++03 -g  -I$(INC)

# ************ Generación de documentación ******************
#documentacion:
	#doxygen doc/doxys/Doxyfile

#************* Generación ejecutables ************
all : $(BIN)/ocultar $(BIN)/revelar

$(BIN)/ocultar : $(OBJ)/ocultar.o $(OBJ)/imagenES.o $(OBJ)/codificar.o
	$(CXX) -o $(BIN)/ocultar $(OBJ)/ocultar.o $(OBJ)/imagenES.o $(OBJ)/codificar.o

$(BIN)/revelar : $(OBJ)/revelar.o $(OBJ)/imagenES.o $(OBJ)/codificar.o
	$(CXX) -o $(BIN)/revelar $(OBJ)/revelar.o $(OBJ)/imagenES.o $(OBJ)/codificar.o

# ************ Compilación de módulos ************
$(OBJ)/ocultar.o : $(SRC)/ocultar.cpp $(INC)/codificar.h
	$(CXX) -c $(CXXFLAGS) $(SRC)/ocultar.cpp -o $(OBJ)/ocultar.o

$(OBJ)/revelar.o : $(SRC)/revelar.cpp $(INC)/codificar.h
	$(CXX) -c $(CXXFLAGS) $(SRC)/revelar.cpp -o $(OBJ)/revelar.o

$(OBJ)/codificar.o : $(SRC)/codificar.cpp $(INC)/codificar.h
	$(CXX) -c $(CXXFLAGS) $(SRC)/codificar.cpp -o $(OBJ)/codificar.o		

$(OBJ)/imagenES.o : $(SRC)/imagenES.cpp $(INC)/imagenES.h
	$(CXX) -c $(CXXFLAGS) $(SRC)/imagenES.cpp -o $(OBJ)/imagenES.o

# ************ Limpieza ************
clean :
	-rm $(OBJ)/*.o $(BIN)/*

