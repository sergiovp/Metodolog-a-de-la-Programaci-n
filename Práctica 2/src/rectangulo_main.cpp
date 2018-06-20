#include <fstream>
#include <iostream>
#include "rectangulo.h"
#include "punto.h"

using namespace std;

Rectangulo Boundingbox(istream& is){
	Rectangulo r;
	Punto p;
	double min_x, min_y, max_x, max_y;
  	
	Avanzar(is);
	while (Leer(is,p)){
  		Avanzar(is);
  		if(p.x < min_x)
  			min_x = p.x;

  		if(p.y < min_y)
  			min_y = p.y;

  		if(p.x > max_x)
  			max_x = p.x;

  		if(p.y > max_y)
  			max_y = p.y;
  	}

  	r.inf_izq.x = min_x;
  	r.inf_izq.y = min_y;
  	r.sup_der.x = max_x;
  	r.sup_der.y = max_y;

	return r;
}

int main(int argc, char* argv[])
{
	Rectangulo resultado;
	bool fin_entrada;

	if (argc==1) { // Si no hemos dado parámetros en la línea de órdenes
    	resultado = Boundingbox(cin);
    	fin_entrada= cin.eof();
  	}

  else {
    ifstream f(argv[1]); // Como parámetro, el nombre del archivo
    if (!f) {
      cerr << "Error: no se abre " << argv[1] << endl;
      return 1;
    }
    resultado = Boundingbox(f);
    fin_entrada = f.eof();
  }
  
  if (!fin_entrada) {
     cerr << "Error inesperado. No se ha leído toda la entrada" << endl;
     return 1;
  }
  cout << "(" << resultado.inf_izq.x << "," << resultado.inf_izq.y << ")" << "-"
  << "(" << resultado.sup_der.x << "," << resultado.sup_der.y << ")" << endl; 
}