#include <iostream>
#include <fstream>
#include <string>
#include "codificar.h"
using namespace std;

int main(){
	const int MAXBUFFER = 1000000;
	const int MAXNOMBRE = 100;
	char nombre_imagen[MAXNOMBRE];
	unsigned char buffer[MAXBUFFER];
	TipoImagen tipo;
	const int MAXMENSAJE = 10000;
	int filas, columnas;
	char mensaje[MAXMENSAJE];
	bool revelado;

	cout << "Introduce el nombre de la imagen: ";
	cin.getline(nombre_imagen, MAXNOMBRE);

	tipo = LeerTipoImagen(nombre_imagen, filas, columnas);

	if(tipo == IMG_PGM){
		LeerImagenPGM (nombre_imagen, filas, columnas, buffer);
	}
	else if(tipo == IMG_PPM){
		LeerImagenPPM (nombre_imagen, filas, columnas, buffer);
	}
	else{
		cout << "Imagen " << tipo << " desconodido." << endl;
		return 1;
	}

	revelado = Revelar(buffer, filas*columnas, mensaje, MAXMENSAJE);
	
	if(revelado){
		cout << "Se ha revelado el mensaje." << endl;
		cout << "El mensaje revelado es: " << mensaje << endl;
	}

	else{
		cout << "Error" << endl;
	}
}