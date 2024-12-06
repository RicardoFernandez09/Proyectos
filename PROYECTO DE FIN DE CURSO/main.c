#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int numero1;
    int numero2;
    int numero3;
} NumerosLoteria;

void grabarEstructura(const char *filename) {
    FILE *file = fopen(filename, "wb");
    if (!file) {
        perror("Error al abrir el archivo para escribir");
        exit(1);
    }

    NumerosLoteria numeros = {0, 0, 0};
    fwrite(&numeros, sizeof(NumerosLoteria), 1, file);
    fclose(file);
    printf("Estructura inicial grabada en disco.\n");
}

void leerEstructura(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Error al abrir el archivo para leer");
        exit(1);
    }

    NumerosLoteria numeros;
    while (fread(&numeros, sizeof(NumerosLoteria), 1, file)) {
        printf("Numero1: %d, Numero2: %d, Numero3: %d\n",
               numeros.numero1, numeros.numero2, numeros.numero3);
    }
    fclose(file);
}

void agregarRegistro(const char *filename) {
    FILE *file = fopen(filename, "ab");
    if (!file) {
        perror("Error al abrir el archivo para agregar");
        exit(1);
    }

    NumerosLoteria numeros;
    printf("Introduce Numero1, Numero2 y Numero3: ");
    scanf("%d %d %d", &numeros.numero1, &numeros.numero2, &numeros.numero3);

    fwrite(&numeros, sizeof(NumerosLoteria), 1, file);
    fclose(file);
    printf("Registro agregado exitosamente.\n");
}

void buscarPorNumero(const char *filename, int numero) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Error al abrir el archivo para buscar");
        exit(1);
    }

    NumerosLoteria numeros;
    int count = 0;

    while (fread(&numeros, sizeof(NumerosLoteria), 1, file)) {
        if (numeros.numero1 == numero || numeros.numero2 == numero || numeros.numero3 == numero) {
            count++;
        }
    }

    fclose(file);
    printf("El numero %d aparece %d veces en el archivo.\n", numero, count);
}

int main() {
    const char *filename = "numeros_loteria.dat";
    int opcion, numero;

    do {
        printf("\nMenu:\n");
        printf("1. Grabar estructura inicial\n");
        printf("2. Leer estructura\n");
        printf("3. Agregar registro\n");
        printf("4. Buscar por numero\n");
        printf("5. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                grabarEstructura(filename);
                break;
            case 2:
                leerEstructura(filename);
                break;
            case 3:
                agregarRegistro(filename);
                break;
            case 4:
                printf("Introduce el numero a buscar: ");
                scanf("%d", &numero);
                buscarPorNumero(filename, numero);
                break;
            case 5:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opcion invalida. Intenta de nuevo.\n");
        }
    } while (opcion != 5);

    return 0;
}
