#include <stdio.h>

int main() {
    int n1, n2, n3;
    
    printf("Escribe el primer numero: ");
    scanf("%d", &n1);
    
    printf("Escribe el segundo numero: ");
    scanf("%d", &n2);
    
    printf("Escribe el tercer numero: ");
    scanf("%d", &n3);
    
    if (n1 >= n2 && n1 >= n3) {
        printf("El numero mayor es el primero: %d\n", n1);
    }
    else if (n2 >= n1 && n2 >= n3) {
        printf("El numero mayor es el segundo: %d\n", n2);
    }
    else {
        printf("El numero mayor es el tercero: %d\n", n3);
    }

    return 0;
}