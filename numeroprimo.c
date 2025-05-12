#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    if (numero == 2 || numero == 3 || numero == 5 || numero == 7)
    {
        printf("O número é primo: %d", numero);
    }
    else if((numero % 2 != 0) && (numero % 3 != 0) && (numero % 5 != 0) && (numero % 7 != 0))
        {
            printf("O número é primo");
        }
    else
    {
        printf("O número não é primo: %d", numero);
    }
    return (0);
}