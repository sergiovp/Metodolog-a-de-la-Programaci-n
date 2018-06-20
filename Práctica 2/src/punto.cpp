#include <iostream>
#include <cmath> 
#include "punto.h"
using namespace std;

Punto LeerPunto(){
	Punto punto;
  char a;

  cin >> a >> punto.x >> a >> punto.y >> a;

	return punto;
}

bool Leer(istream& is, Punto& r){

  char a;

  is >> a;

  if(a != '(')
    return false;

  is >> r.x;

  is >> a; 

  if(a != ','){
    return false;
  }

  is >> r.y;

  is >> a;

  if(a != ')')
    return false;

  return true;

}

bool Escribir(ostream& os, const Punto& p){

  os << "(" << p.x << "," << p.y << ")";

  return os.good();

}

void EscribirPunto (Punto p){

  cout << "(" << p.x << " , " << p.y << ")" << endl; 

}

void InicializarPunto (Punto& p, double cx, double cy){
  p.x = cx;
  p.y = cy;

}

double GetX (Punto p){
  return p.x;

}

double GetY (Punto p){
  return p.y;
}

double Distancia (Punto p1, Punto p2){
    return sqrt(pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2));

}

Punto PuntoMedio (Punto p1, Punto p2){
  Punto media;

  media.x = (p1.x + p2.x) / 2;
  media.y = (p1.y + p2.y) / 2;

  return media;
}

void Avanzar(istream& is){
  
  while (isspace(is.peek()) || is.peek()=='#') {
    if (is.peek()=='#')
      is.ignore(1024,'\n'); // Suponemos una línea tiene menos de 1024
    else is.ignore();
  }
}
