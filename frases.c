#include <stdio.h>
#include <locale.h>

int ehVogal(char c) {
    setlocale(LC_ALL, "Portugese");
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int ehFim(char c1, char c2, char c3, int tamanho) {
    return (c1 == 'f' && c2 == 'i' && c3 == 'm' && tamanho == 3);
}

int main() {
    char c;
    char letra1 = 0, letra2 = 0, letra3 = 0;
    int contadorVogais, i;

    while (1) {
        printf("Digite uma frase (ou \"fim\" para encerrar):\n");

        contadorVogais = 0;
        i = 0;

        while ((c = getchar()) != '\n') {
            if (i == 0) letra1 = c;
            if (i == 1) letra2 = c;
            if (i == 2) letra3 = c;
            i++;

            if (ehVogal(c)) {
                contadorVogais++;
            }
        }

       
        if (ehFim(letra1, letra2, letra3, i)) {
            break;
        }

        printf("Número de vogais: %d\n\n", contadorVogais);
    }

    printf("Programa encerrado.\n");
    return 0;
}
