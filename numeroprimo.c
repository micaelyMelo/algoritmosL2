#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf("Digite um n�mero: ");
    scanf("%d", &numero);
    if (numero == 2 || numero == 3 || numero == 5 || numero == 7)
    {
        printf("O n�mero � primo: %d", numero);
    }
    else if((numero % 2 != 0) && (numero % 3 != 0) && (numero % 5 != 0) && (numero % 7 != 0))
        {
            printf("O n�mero � primo");
        }
    else
    {
        printf("O n�mero n�o � primo: %d", numero);
    }
    return (0);
}