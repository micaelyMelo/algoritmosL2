#include <stdio.h>
#include <locale.h>
// Fun��o para ler uma nota v�lida
float lerNota(int numeroNota) {
    setlocale(LC_ALL, "Portuguese");

    float nota;
    do {
        printf("Digite a nota %d (entre 0 e 10): ", numeroNota);
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("Nota inv�lida. Tente novamente.\n");
        }
    } while (nota < 0 || nota > 10);

    return nota;
}

// Fun��o para calcular a m�dia
float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

// Fun��o principal
int main() {
    float nota1 = lerNota(1);
    float nota2 = lerNota(2);
    float nota3 = lerNota(3);

    float media = calcularMedia(nota1, nota2, nota3);

    printf("\nM�dia do aluno: %.2f\n", media);

    // Estrutura condicional para verificar situa��o do aluno
    if (media >= 7) {
        printf("Situa��o: Aprovado\n");
    } else if (media >= 5) {
        printf("Situa��o: Recupera��o\n");
    } else {
        printf("Situa��o: Reprovado\n");
    }

    return 0;
}
