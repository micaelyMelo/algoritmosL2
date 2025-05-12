#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float lado1, lado2, lado3;
    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &lado1);
    printf("Digite o valor do segundo do segundo lado: ");
    scanf("%f", &lado2);
    printf("Digite o valor do segundo do terceiro lado: ");
    scanf("%f", &lado3);
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1)
    {
        if (lado1 == lado2 && lado2 == lado3)
        {
            printf("O triângulo é equilátero\n ");
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        {
            printf("Triângulo Isósceles\n");
        }
        else
        {
            printf("Triângulo Escaleno\n");
        }
    }
    else
    {
        printf("Os valores fornecidos não formam um triângulo válido.\n");
    }

    return 0;
}
