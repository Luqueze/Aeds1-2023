// algoritmo que recebe 2 números inteiros x e y e calcula o resto da divisão x / y

#include <stdio.h>

    int main(){

        int a, b;
        int resto;
        
        printf("insira dois valores inteiros: ");
        scanf("%d %d", &a, &b);

        resto = a % b;

        printf("o resto e igual a: %d", resto);

        return 0;
    }