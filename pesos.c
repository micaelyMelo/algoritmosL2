#include <stdio.h>
#include <locale.h>

float lerNota(int numeroNota) {
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

float calcularMediaPonderada(float n1, float n2, float n3, int p1, int p2, int p3) {
    return (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota1 = lerNota(1);
    float nota2 = lerNota(2);
    float nota3 = lerNota(3);

    int peso1 = 2;
    int peso2 = 3;
    int peso3 = 4;

    float media = calcularMediaPonderada(nota1, nota2, nota3, peso1, peso2, peso3);

    printf("\nMédia ponderada do aluno: %.2f\n", media);

    if (media >= 7) {
        printf("Situação: Aprovado\n");
    } else if (media >= 5) {
        printf("Situação: Recuperação\n");
    } else {
        printf("Situação: Reprovado\n");
    }

    return 0;
}
