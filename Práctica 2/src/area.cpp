#include <iostream>
#include "circulo.h"
#include "punto.h"
using namespace std;


int main(){
	Circulo circulo;

	cout << "Introduzca un circulo en formato radio-(x,y): ";
	circulo = LeerCirculo();

	InicializarCirculo(circulo,Centro(circulo),Radio(circulo));

	double res = Area(circulo);

	cout << "El área del círculo es: " << res;
	cout << endl;
}