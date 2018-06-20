#include "matriz_bit1.h"

//Inicializamos matriz.

bool Inicializar(MatrizBit& m, int fils, int cols){

	bool tiene_exito = (fils <= 10) && (cols <= 10);

	if (tiene_exito){
		m.f = fils;
		m.c = cols;
		for (int i = 0 ; i < m.f ; ++i)
			for (int j = 0 ; j < m.c ; ++j)
				m.matriz[i][j] = false;
	}

	return tiene_exito;
}


int Filas (const MatrizBit& m){
	return m.f;
}


int Columnas( const MatrizBit& m){
	return m.c;
}


bool Get(const MatrizBit& m, int f, int c){
	return m.matriz[f][c];
}


void Set(MatrizBit& m, int f, int c, bool v){
	m.matriz[f][c] = v;
}