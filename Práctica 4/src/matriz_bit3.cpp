
#include "matriz_bit3.h"
#include <iostream>
// Inicializamos matriz.

bool Inicializar(MatrizBit& m, int fils, int cols){
	m.tamanio = 0;

	if (((fils * cols) < 100) && (fils >= 0 && cols >= 0)){
		m.tamanio = (fils<<16) | cols;

		for (int i = 0 ; i < (fils * cols) ; ++i)
			m.matriz[i] = '0';
		
		return true;
	}
	else 
		return false;
}

int Filas (const MatrizBit& m){
	int filas;

	filas = (m.tamanio>>16) & 0xFFFF;
	
	return filas;
}

int Columnas( const MatrizBit& m){
	int columnas;

	columnas = m.tamanio & 0xFFFF;

	return columnas;
}

bool Get(const MatrizBit& m, int f, int c){
	return m.matriz[(f * Columnas(m)) + c];
}


void Set(MatrizBit& m, int f, int c, bool v){
	m.matriz[(f * Columnas(m)) + c] = v;
}