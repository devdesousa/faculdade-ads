#include <stdio.h>
int main() {
    int i, soma;
    i = 1;
    soma = 0;

    while (i !=0){
        printf("Digite um numero: ");
        scanf("%d", &i);
        soma = i + soma;
    }

    printf("A soma de todos os numeros digitados eh: %d\n", soma);

    return 0;

}