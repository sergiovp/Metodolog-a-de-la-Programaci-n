#include "matriz_bit4.h"
#include <iostream>

// Inicializamos matriz.

bool Inicializar(MatrizBit& m, int fils, int cols){
	m.tamanio = 0;
	
	if ((fils * cols) < 128){
		m.tamanio = (fils<<8) | cols;
		
		for (int i = 0; i < 4; ++i)
			m.matriz[i] = 0;

		return true;
	}
	else 
		return false;
}

int Filas (const MatrizBit& m){
	int filas = 0;

	filas = (m.tamanio>>8) & 0xFF;
	
	return filas;
}

int Columnas( const MatrizBit& m){
	int columnas = 0;

	columnas = m.tamanio & 0xFF;

	return columnas;

}

bool Get(const MatrizBit& m, int f, int c){
	int pos_vector = (f*Columnas(m) + c) / 32;

	if ((m.matriz[pos_vector] & (1<<((f*Columnas(m) + c) % 32))) != 0)
		return 1;
	else
		return 0;

}

void Set(MatrizBit& m, int f, int c, bool v){
	int pos_vector = (f*Columnas(m) + c) / 32;

	if(v)
		m.matriz[pos_vector] = m.matriz[pos_vector] | (1<<((f*Columnas(m) + c)%32));
	
	else
		m.matriz[pos_vector] = m.matriz[pos_vector] &~ (1<<((f*Columnas(m) + c)%32));
}