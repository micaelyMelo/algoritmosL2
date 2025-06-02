#include <locale.h>
#include <stdio.h>

// Fun��o para verificar se um n�mero � primo
int eh_primo(int numero) {
    int i;
    if (numero < 2) { 
        return 0; 
        // Testa se o n�mero � MENOR que dois
    }
    for (i = 2; i < numero; i++) {
        if (numero % i == 0)
    // Se o n�mero for divis�vel por algum i, n�o � primo
        {
            return 0; 
    // N�mero N�O � primo
        }
    }
    return 1; 
    // Diz que o n�mero � primo, ou seja retona 1 para VERDADEIRO
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num, i;


    // Solicita o n�mero ao usu�rio e valida a entrada
    printf("Digite um n�mero inteiro maior que 1: ");
    scanf("%d", &num);

    // Enquanto o n�mero digitado for menor ou igual a 1, pede novamente
    while (num <= 1) {
        printf("Entrada inv�lida! Digite um n�mero inteiro maior que 1: ");
        scanf("%d", &num);
    // L� novamente o n�mero
    }

    printf("N�meros primos menores que %d:\n", num);

    // Verifica todos os n�meros menores que o num
    for (i = 2; i < num; i++) {
        if (eh_primo(i))
    // Chama a fun��o eh_primo para saber se 'i' � primo 
        {
            printf("%d ", i);
    // Se for primo, imprime o n�mero na tela

        }
    }

    printf("\n");
    // Pula uma linha para deixar a sa�da mais organizada
    return 0;
}
