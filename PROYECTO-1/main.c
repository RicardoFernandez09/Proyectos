#include <stdio.h>
#include <stdio.h>

float calcular_costo_combustible(float consumo_vehiculo, float costo_combustible, float distancia) {

if (consumo_vehiculo <= 0 || costo_combustible <=0 || distancia <=0) {
    printf("Todos los valores deben ser mayores que cero.\n");
    return -1;
}

float consumo_galones = consumo_vehiculo / 3.78541;
float galones_necesarios = (distancia / 100) * consumo_galones;
float costo_total = galones_necesarios * costo_combustible;


return costo_total;

}

int main() {

float consumo_vehiculo = 8;
float costo_combustible = 4;
float distancia = 250;

float costo_viaje = calcular_costo_combustible(consumo_vehiculo, costo_combustible, distancia);

if (costo_viaje != -1) {
    printf("Costo del combustible para el viaje: $%.2f\n", costo_viaje);
}

    return;
}
