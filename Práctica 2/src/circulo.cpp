#include <iostream>
#include <cmath> 
#include "circulo.h"
using namespace std;
//edrftghyj
Circulo LeerCirculo(){
  Circulo c;
  char b;

  cin >> c.radio >> b;

  c.centro = LeerPunto();

  return c;

}

void EscribirCirculo(Circulo c){
  cout << c.radio << "-";
  EscribirPunto(c.centro);
}

void InicializarCirculo (Circulo& c, Punto centro, double radio){
  c.radio = radio;
  c.centro = centro;
}

Punto Centro (Circulo c){

  return c.centro;


}

double Radio (Circulo c){
  return c.radio;
}

double Area (Circulo c){
  return (M_PI * c.radio * c.radio);

}

bool Interior (Punto p, Circulo c){
  return (Distancia(p,c.centro) < c.radio);
}

double Distancia (Circulo c1, Circulo c2){
  return (Distancia(c1.centro,c2.centro) - (c1.radio + c2.radio));
}