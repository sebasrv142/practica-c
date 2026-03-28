#include <stdio.h>

int main() {
    int naranja = 10;
    int manzana = 20;

    int *dir_naranja = &naranja; 
    int *dir_manzana = &manzana;

    printf("Antes: Naranja = %d, Manzana = %d\n", naranja, manzana);
    
    int caja_vacia = *dir_naranja; 
    
    *dir_naranja = *dir_manzana;
    
    *dir_manzana = caja_vacia;

    printf("Despues: Naranja = %d, Manzana = %d\n", naranja, manzana);

    return 0;
}