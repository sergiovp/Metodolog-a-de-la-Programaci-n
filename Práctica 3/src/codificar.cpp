#include "codificar.h"

/*
	Función que nos va a ocultar el mensaje en la imagen.

*/	
void Ocultar(unsigned char buffer[], const char mensaje[]){

   int contador = 0;
   int i;

   for(i = 0; mensaje[i] != '\0'; ++i){}

   for(int j = 0; j <= i; ++j){
      for(int k = 7; k >= 0; --k){
         if((mensaje[j] & (1 << k)) != 0){
            buffer[contador] = buffer[contador] | 1;
         }

         else{
            buffer[contador] = buffer[contador] & (~1);
         }

         contador++;
      }
   }
}

/*
	Función que se encargará de revelar los mensajes
	ocultos de las imágenes.

*/	

bool Revelar(const unsigned char buffer[], const int num_pixeles, char mensaje[], const int longitud_mensaje){
   bool revelado = true;
   unsigned char caracter;
   int bit = 0;

   if(longitud_mensaje <= (num_pixeles / 8)){ 
      for(int i = 0; i < longitud_mensaje; ++i){
         for (int j = 0; j < 8; ++j){
            bit = buffer[ (i*8) + j] & 1;
            if (bit == 0){
               caracter = caracter << 1;
            }
            else{
               caracter = caracter << 1;
               caracter = caracter | 1;
            }
         }
         if (i < longitud_mensaje){
            mensaje[i] = caracter;
         }
      }
   }

   else{
      revelado = false;
   }

   return revelado;
}