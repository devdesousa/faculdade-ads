#include <stdio.h>
int main(){
    int sorteado, chute;        // Declaração das variáveis
    printf("Digite um numero e vamos ver se voce acerta:");
    scanf("%d",&chute);         // Entrada do 'chute' sendo armazenado na var 'chute'
    sorteado = 33;

    while(chute != sorteado){       // Enquanto o 'chute' for diferente do 'sorteando'
            if(chute>sorteado){     // Se o chute for um numero maior
                printf("O numero do seu chute eh maior que o numero sorteado!\n");
            }
            else{       // Se o chute for um numero menor
                printf("O numero do seu chute eh menor que o numero sorteado!\n");
            }

            printf("Digite outro numero:");     // Em caso de erro
            scanf("%d",&chute);     // Tentar um novo número
    }

    printf("Voce acertou, parabens!");      // Se acertar o numero sorteado

    return 0;

}