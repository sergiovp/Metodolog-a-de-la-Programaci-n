#ifndef _OCULTAR_H_
#define _OCULTAR_H_
#include "imagenES.h"

void Ocultar(unsigned char buffer[], const char mensaje[]);

bool Revelar(const unsigned char buffer[], const int num_pixeles, char mensaje[], const int longitud_mensaje);

#endif