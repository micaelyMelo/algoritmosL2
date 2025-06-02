#include <locale.h>
#include <stdio.h>

// Função para verificar se um número é primo
int eh_primo(int numero) {
    int i;
    if (numero < 2) { 
        return 0; 
        // Testa se o número é MENOR que dois
    }
    for (i = 2; i < numero; i++) {
        if (numero % i == 0)
    // Se o número for divisível por algum i, não é primo
        {
            return 0; 
    // Número NÃO é primo
        }
    }
    return 1; 
    // Diz que o número é primo, ou seja retona 1 para VERDADEIRO
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num, i;


    // Solicita o número ao usuário e valida a entrada
    printf("Digite um número inteiro maior que 1: ");
    scanf("%d", &num);

    // Enquanto o número digitado for menor ou igual a 1, pede novamente
    while (num <= 1) {
        printf("Entrada inválida! Digite um número inteiro maior que 1: ");
        scanf("%d", &num);
    // Lê novamente o número
    }

    printf("Números primos menores que %d:\n", num);

    // Verifica todos os números menores que o num
    for (i = 2; i < num; i++) {
        if (eh_primo(i))
    // Chama a função eh_primo para saber se 'i' é primo 
        {
            printf("%d ", i);
    // Se for primo, imprime o número na tela

        }
    }

    printf("\n");
    // Pula uma linha para deixar a saída mais organizada
    return 0;
}
