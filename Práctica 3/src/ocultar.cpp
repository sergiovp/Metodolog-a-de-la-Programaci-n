#include <iostream>
#include <fstream>
#include <string>
#include "codificar.h"
using namespace std;


int main(){
   const int MAXBUFFER = 1000000;         //Tamaño máximo de la imagen.
   const int MAXNOMBRE = 100;          //Tamaño máximo del nombre de la imagen.
   char nombre_imagen[MAXNOMBRE];         //El nombre de la imagen, con un maxde 100.
   unsigned char buffer[MAXBUFFER];    //Vector dónde tendremos el mensaje para ocultar.
   TipoImagen tipo;
   const int MAXMENSAJE = 1000;
   int filas, columnas;
   char mensaje[MAXMENSAJE];

   filas = columnas = 0;

   cout << "Introduce el nombre de la imagen: ";
   cin.getline(nombre_imagen, MAXNOMBRE);

   tipo = LeerTipoImagen(nombre_imagen, filas, columnas);

   if(tipo == IMG_PGM){
      LeerImagenPGM(nombre_imagen, filas, columnas, buffer);

   }

   else if(tipo == IMG_PPM){
      LeerImagenPPM(nombre_imagen, filas, columnas, buffer);
   }

   else{
      cout << "No existe esa imagen." << endl;
      return 1;
   }

   cout << "Introduce el mensaje a cifrar: ";
   cin.getline(mensaje, MAXMENSAJE);
   
   cout << "Introduce el nombre de la imagen nueva: ";
   cin.getline(nombre_imagen,MAXMENSAJE);

   Ocultar(buffer, mensaje);

   if(tipo == IMG_PGM){
      EscribirImagenPGM(nombre_imagen, buffer, filas, columnas);
   }

   else if(tipo == IMG_PPM){
      EscribirImagenPPM(nombre_imagen, buffer, filas, columnas);
      cout << "La imagen " << nombre_imagen << " se ha creado correctamente." << endl;
   }

   else{
      cout << "Ninguna imagen";
      return 1;
   }


}