#include <stdio.h>

int main(){
    int numeros[] = {12, 34, 2, 99, 5, 78};
    int n = 6;

    int mayor = numeros[0];
    int menor = numeros[0];
    float suma = 0;

    for (int i = 0; i < n; i++){
        if (numeros[i] > mayor){
            mayor = numeros[i];
        }

        if (numeros[i] < menor){
            menor = numeros[i];
        }
        suma += numeros[i];
    }

    float promedio = suma / n;

    printf("mayor %d\n", mayor);
    printf("menorr %d\n", menor);

    return 0;
    
}