#include <iostream>
#include "circulo.h"
#include "punto.h"
//Si lo incluímos, los estaríamos incluyendo dos veces, ya que incluímos círculo.h
//Que éste ya tiene incluído punto.h. Para evitar la inclusión múltiple, hacemos uso del precompilado.
using namespace std;
//
int main(){
  Circulo c1,c2;
  
  cout << "HOLA" << endl;

  do {
   cout << "Introduzca un circulo en formato radio-(x,y): ";
   c1= LeerCirculo();
   cout << "Introduzca otro circulo: ";
   c2= LeerCirculo();
  } while (Distancia(Centro(c1),Centro(c2))==0);

  Circulo res;

  InicializarCirculo(res,PuntoMedio(Centro(c1),Centro(c2)),
                     Distancia(Centro(c1),Centro(c2))/2);
  cout << "El círculo que pasa por los dos centros es: ";
  EscribirCirculo(res);
  cout << endl;
}