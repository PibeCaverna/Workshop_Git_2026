#include <avir/io.h>
#include <stdint.h>

void inicializar_hardware(void);
void inicializar_motores(void);

int 
main (void)
{
  inicializar_harware(void);

  while(1)
  {
    if(leer_sensor(SENSOR1) > 5): velocidad_motor(MOTOR1,
        100-leer_sensor(SENSOR1));
    if(leer_sensor(SENSOR2) > 5): velocidad_motor(MOTOR2,
        100-leer_sensor(SENSOR1));
  }
  imaginate que acá seguimos trabajando porque somos muy trabajadores

}

void
inicializar_hardware(void)
{
  cosas aburridas que no sirven para este workshop
}

void
incializar_motores(void)
{
  init motores
}
