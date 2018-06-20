
#include <iostream>
#include <fstream>
#include <iosfwd>
#include "matriz_operaciones.h"

bool Leer(std::istream& is, MatrizBit& m)
{
	int f, c;
	bool v;
	bool sin_fallos;
	
	while(isspace(is.peek()))
		is.ignore();

		if(is.peek() == 'X' || is.peek() == '.'){
			bool vector[10000];
			char a;
			int k = 0, total_utilizados = 0;
				while(is.get(a)){
					if (a == 'X'){
						vector[total_utilizados] = 1;
						c++;
						total_utilizados++;
					}

					else if (a == '.'){
						vector[total_utilizados] = 0;
						c++;
						total_utilizados++;
					}

					else
						f++;
				}
								
				c = c/f;
				sin_fallos = Inicializar(m,f,c);

				for (int i = 0; i < Filas(m); ++i)
					for (int j = 0; j < Columnas(m); ++j){
						v = vector[k];
						Set(m, i, j, v);
						k++;
					}
		
		}
	
		else{
			is >> f >> c;

			sin_fallos = Inicializar(m,f,c);

			for (int i = 0 ; i < Filas(m) ; ++i)
				for (int j = 0 ; j < Columnas(m) ; ++j){
				is >> v;
				Set(m, i, j, v);
			}
		}

	return sin_fallos;
}

bool Escribir(std::ostream& os, const MatrizBit& m){
	bool sin_fallos = true;	

	os << Filas(m) << " " << Columnas(m) << " " << std::endl;
	
	for (int i = 0; i < Filas(m) ; ++i){
		for (int j = 0; j < Columnas(m) ; ++j)
			os << Get(m,i,j) << " ";
		os << std::endl;
	}
	
	return sin_fallos;
}

bool Leer(const char nombre[], MatrizBit& m){
	std::ifstream f;

	f.open(nombre);
	return Leer(f, m);	
}

bool Escribir(const char nombre[], const MatrizBit& m){
	std::ofstream f;

	f.open(nombre);
	return Escribir(f, m);
}

void And(MatrizBit& res, const MatrizBit& m1, const MatrizBit& m2){
	bool v;
	
	Inicializar(res, Filas(m1), Columnas(m1));

	for(int i = 0 ; i < Filas(m1) ; ++i)
		for (int j = 0 ; j < Columnas(m1) ; ++j){
	 		v = Get(m1, i, j) && Get(m2, i, j);
			Set(res, i, j, v);
		}
}

void Or(MatrizBit& res, const MatrizBit& m1, const MatrizBit& m2){
	bool v;
	
	Inicializar(res, Filas(m1), Columnas(m1));

	for(int i = 0 ; i < Filas(m1) ; ++i)
		for (int j = 0 ; j < Columnas(m1) ; ++j){
	 		v = Get(m1, i, j) || Get(m2, i, j);
			Set(res, i, j, v);
		}
}

void Not(MatrizBit& res, const MatrizBit& m){
	bool v;
	
	Inicializar(res, Filas(m), Columnas(m));
	for(int i = 0 ; i < Filas(m) ; ++i){
		for (int j = 0 ; j < Columnas(m)  ; ++j){
	 		v = !(Get(m, i, j));
			Set(res, i, j, v);
		}
	}
}

void Traspuesta(MatrizBit& res, const MatrizBit& m){
	bool v;
	
	Inicializar(res, Columnas(m), Filas(m));

	for(int i = 0 ; i < Filas(m) ; ++i)
		for (int j = 0 ; j < Columnas(m)  ; ++j){
	 		v = Get(m, i, j);
			Set(res, j, i, v);
		}
}