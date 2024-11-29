#include <stdio.h>
#include <stdio.h>

int main() {
    char p1;

    do {
        printf("\nIngresa texto : ");
        p1 = getchar();
        getchar();

        if (p1 >= 'A' && p1 <= 'Z') {

            putchar(p1 + 32);
            printf("\n");
        } else if (p1 >= 'a' && p1 <= 'z') {

            putchar(p1 - 32);
            printf("\n");
        } else if (p1 != '0') {

            printf("\nSOLO LETRAS ENTRE 'A' Y 'Z' O 'a' Y 'z', POR FAVOR INTENTELO DE NUEVO.\n");
        }
    } while (p1 != '0');

    printf("\nFin del Programa!!!\n");
    return 0;
}
