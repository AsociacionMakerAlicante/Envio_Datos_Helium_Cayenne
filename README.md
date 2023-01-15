# Envio de datos  de Helium a Cayenne
Ejemplo de como enviar datos y almacenarlos en Cayenne utilizando la red Helium.

Se utiliza la placa "MakAlc LoRa" (puedes verla [AQUÍ](https://github.com/AsociacionMakerAlicante/PlacasMaker)). Esta diseñada para funcionar con dos baterias AAA de 1,5V enviando datos cada X minutos (programable por software).
Una vez realizado el envío la placa entra en modo "sueño profundo" hasta el siguiente envío. Lleva incorporado un temporizador TPL5010 que se encarga de despertar al micro 
y que hace las veces de "watch dog".

Se utiliza la red Helium para hacer el envío de los datos. Un vez recibidos se utiliza una integracion con Cayenne donde se almacenan permanetemente y pueden visualizarse.
En este ejemplo se envian los datos de temperatura, humedad y tensión de la bateria. Para el ejemplo estamos visualizando la última lectura de temperatura y humedad, una 
gráfica con la evolución de las últimas 24 horas de temperautra y humedad. La tensión de la bateria y datos de RSSI y SNR de la transmisión.
Ejemplo:![Ejemplo](https://github.com/AsociacionMakerAlicante/Envio_Datos_Helium_Cayenne/blob/master/test/Grafica%20Cayenne.jpg)
