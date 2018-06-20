#ifndef _PUNTO_H_
#define _PUNTO_H_
#include <iostream>
using namespace std;

struct Punto {
    double x,y;
};

Punto LeerPunto();

void EscribirPunto (Punto p);

void InicializarPunto (Punto& p, double cx, double cy);

double GetX (Punto p);

double GetY (Punto p);

double Distancia (Punto p1, Punto p2);

Punto PuntoMedio (Punto p1, Punto p2);

bool Leer(istream& is, Punto& r);

bool Escribir(ostream& os, const Punto& r);

void Avanzar (istream& is);

#endif

//punto.h está acabado, hemos reciclado el de los ejercicios y le hecho añadido las dos últimas funciones que nos servirán 
//para nuestro programa del rectángulo.