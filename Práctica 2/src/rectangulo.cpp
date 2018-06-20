#include <iostream>
#include <cmath>
#include "punto.h"
#include "rectangulo.h"
using namespace std;

bool Leer(istream& is, Rectangulo& r){

	Leer(is,r);

	return is.good();

	
}

bool EscribirRectangulo(ostream& os, const Rectangulo& r){

	Escribir(os,r.sup_der);
	os << "-";
	Escribir(os,r.inf_izq);

	return os.good();

}

void InicializarRectangulo (Rectangulo& r, const Punto& p1, const Punto& p2){

	r.sup_der = p1; 

	r.inf_izq = p2;
}
/*
Punto InferiorIzquierda (const Rectangulo& r){
	Punto inf_izq;
	double minimo;

	if(){

	}

}

Punto SuperiorDerecha (const Rectangulo& r){

}

double Area(const Rectangulo& r){

}

bool Interior (const Punto& p, const Rectangulo& r){

}
*/