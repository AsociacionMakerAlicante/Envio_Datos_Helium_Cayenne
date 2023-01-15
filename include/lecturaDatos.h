#ifndef __LECTURA_DATOS__
#define __LECTURA_DATOS__

enum SHT21_Parametro : byte {
	temperatura,
	humedad
};


float lecturaDatos(byte);


#endif