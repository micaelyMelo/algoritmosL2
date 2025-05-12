#include <stdio.h>
#include <locale.h>
// Função para ler uma nota válida
float lerNota(int numeroNota) {
    setlocale(LC_ALL, "Portuguese");

    float nota;
    do {
        printf("Digite a nota %d (entre 0 e 10): ", numeroNota);
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("Nota inválida. Tente novamente.\n");
        }
    } while (nota < 0 || nota > 10);

    return nota;
}

// Função para calcular a média
float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

// Função principal
int main() {
    float nota1 = lerNota(1);
    float nota2 = lerNota(2);
    float nota3 = lerNota(3);

    float media = calcularMedia(nota1, nota2, nota3);

    printf("\nMédia do aluno: %.2f\n", media);

    // Estrutura condicional para verificar situação do aluno
    if (media >= 7) {
        printf("Situação: Aprovado\n");
    } else if (media >= 5) {
        printf("Situação: Recuperação\n");
    } else {
        printf("Situação: Reprovado\n");
    }

    return 0;
}
