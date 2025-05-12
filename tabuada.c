#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int m, n;
    char escolha;
    do
    {
        printf("Digite um valor: ");
        scanf("%d", &m);
        for (n = 1; n <= 10; n++)
        {
            printf("%d x %d =  %d\n", m, n, m * n);
        }
        printf("Você deseja calcular outra tabuada? Se sim digite S :  ");
        scanf(" %c", &escolha);

    } while ((escolha == 's') || (escolha == 'S'));

    return 0;
}