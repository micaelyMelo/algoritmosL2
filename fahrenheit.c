#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
    char opcao;
    float temperatura, resultado;

    while (1) {
        printf("\nConversão de temperatura\n");
        printf("Digite 'C' para converter de Celsius para Fahrenheit\n");
        printf("Digite 'F' para converter de Fahrenheit para Celsius\n");
        printf("Digite 'S' para sair\n");
        printf("Opção: ");
        scanf(" %c", &opcao); 

        if (opcao == 'S' || opcao == 's') {
            printf("Encerrando o programa.\n");
            break;
        }

        if (opcao == 'C' || opcao == 'c') {
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperatura);
            resultado = (temperatura * 9 / 5) + 32;
            printf("Resultado: %.2f Fahrenheit\n", resultado);
        } else if (opcao == 'F' || opcao == 'f') {
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);
            resultado = (temperatura - 32) * 5 / 9;
            printf("Resultado: %.2f Celsius\n", resultado);
        } else {
            printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0;
}
