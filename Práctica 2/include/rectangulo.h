#ifndef _RECTANGULO_H_
#define _RECTANGULO_H_
#include "punto.h"
#include <iostream>
using namespace std;

struct Rectangulo{
	Punto sup_der;
	Punto inf_izq;
};

bool Leer(istream& is, Rectangulo& r);

bool EscribirRectangulo(ostream& os, const Rectangulo& r);

void InicializarRectangulo (Rectangulo& r, const Punto& p1, const Punto& p2);

//Punto InferiorIzquierda (const Rectangulo& r);

//Punto SuperiorDerecha (const Rectangulo& r);

//double Area(const Rectangulo& r);

//bool Interior (const Punto& p, const Rectangulo& r);

#endif