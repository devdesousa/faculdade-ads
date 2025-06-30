#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main() {
    int numero, soma, count;  // Declaração de variáveis: numero para entrada, soma para armazenar o total, count para quantidade de repetições
    soma = 0;     // Inicializa a variável soma com 0
    count = 5;    // Define que o loop irá repetir 5 vezes

    // Loop for que se repete 5 vezes
    for (int i = 0; i < count; i++) {
        printf("Digite um numero: ");     // Solicita ao usuário que digite um número
        scanf("%d", &numero);             // Lê o número digitado e armazena na variável numero
        soma = soma + numero;             // Soma o número digitado à variável soma
    }

    // Exibe o resultado da soma de todos os números digitados
    printf("A soma de todos os numeros digitados eh: %d\n", soma);

    return 0;  // Indica que o programa terminou com sucesso
}
