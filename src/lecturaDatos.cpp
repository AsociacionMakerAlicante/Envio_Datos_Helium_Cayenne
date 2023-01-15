#include <Arduino.h>
#include <config.h>
#include <lecturaDatos.h>
#include <SHT2x.h>

static SHT21 dispositivo;
static bool iniciado;

// Sensor de temperatura/humedad.
float dato;

// Lee la temperatura del termometro y la tensión de la bateria.
float lecturaDatos(byte parametro)
{
	if(!iniciado){
		dispositivo.begin();
		dispositivo.read();
		iniciado = true;
	}
    dispositivo.read();
    switch (parametro)
    {
    case SHT21_Parametro::temperatura:
        dato = dispositivo.getTemperature();
        break;

    case SHT21_Parametro::humedad:
        dato = dispositivo.getHumidity();
        break;
    default:
        dato = 0;
        break;
    }
    return dato;
}
