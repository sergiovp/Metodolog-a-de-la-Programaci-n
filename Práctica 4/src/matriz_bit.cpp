/**
  * @file matriz_bit.cpp
  * @brief Fichero de definiciones para insertar la implementación deseada
  *
  * Incluye la definición correspondiente dependiendo de la selección en matriz_bit.h
  * 
  * @warning Este fichero no se debe modificar
  *
  */

#include "matriz_bit.h" // Aquí se define el valor de CUAL_COMPILO

#if CUAL_COMPILO==1
  #include "matriz_bit1.cpp"
#elif CUAL_COMPILO==2
  #include "matriz_bit2.cpp"
#elif CUAL_COMPILO==3
  #include "matriz_bit3.cpp"
#else
  #include "matriz_bit4.cpp"
#endif

/*Tenemos que crear el matriz_operaciones.cpp y el calcular.cpp
En el calcular.cpp simplemente implementamos las funciones.
En matriz.h tenemos que hacer 4 versiones de matriz.h en la que cada una va a tener un único struct.
En el matriz.cpp otras 4 versiones.
Serán 1.h 1.cpp 2.h 2.cpp 3.h 3.cpp 4.h 4.cpp.
1.cpp... Solo tiene que implementar las funciones básicas.
*/