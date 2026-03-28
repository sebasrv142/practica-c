#include <stdio.h>

int main() {
    int numero, contador = 0;

    printf("Ingresa un numero positivo: ");
    scanf("%d", &numero);

    int original = numero;

    if (numero == 0) {
        contador = 1; 
    } else {
        while (numero > 0) {
            numero = numero / 10;
            contador++;
        }
    }

    printf("El numero %d tiene %d digitos\n", original, contador);

    return 0;
}