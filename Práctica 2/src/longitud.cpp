#include <iostream>
#include <fstream>
#include "punto.h"

using namespace std;

int main(int argc, char* argv[]){

	int contador = 0;
	double suma = 0;
	bool exito = true, fin_entrada;

	Punto p, q;

	if(argc==1){			//Si no damos parámetros en la línea de órdenes.
		while(!cin.eof() && exito){

			Avanzar(cin);
			exito = Leer(cin,p);

			if(contador > 0 && exito == true)
				suma += Distancia(p,q);

			q = p;
			contador++;

		}
		fin_entrada = cin.eof();
	}

	else{
		ifstream f(argv[1]);	//Pasamos como parámetro el nombre del archivo.
		if(!f){
			cerr << "Error: no se abre el archivo " << argv[1] << endl;
			return 1;
		}
			//suma += Distancia(p,q);

			//q = p;

		while(!f.eof() && exito){
		Avanzar(f);
		exito = Leer(f,p);

			if(contador > 0 && exito == true)
				suma += Distancia(p,q);

			q = p;
			contador++;	
		}
			fin_entrada = f.eof();
	}



		if(!fin_entrada){
			cerr << "Error inesperado. No se ha leído toda la entrada" << endl;
			return 1;
		}

	
		cout << "Distancia total entre los puntos: " << suma << endl;
}