#include "matriz_bit2.h"

// Inicializamos matriz.
bool Inicializar(MatrizBit& m, int fils, int cols){

	if (((fils * cols) < 100) && (fils >= 0 && cols >= 0)){
		for (int i = 0; i < (fils * cols) ; ++i){
			m.matriz[i] = false;
		}

		m.f = fils;
		m.c = cols;

		return true;
	}
	else
		return false;
}

int Filas (const MatrizBit& m){
	return m.f;
}


int Columnas (const MatrizBit& m){
	return m.c;
}

bool Get(const MatrizBit& m, int fils, int cols){
	return m.matriz[fils * Columnas(m) + cols];
}


void Set(MatrizBit& m, int fils, int cols, bool v){
	m.matriz[fils * Columnas(m) + cols] = v;
}