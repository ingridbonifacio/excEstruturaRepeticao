#include <stdio.h>

int main()
{
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("O número inserido não é positivo.\n");
    }
    else
    {
        printf("Contagem de %d até 0 em ordem decrescente:\n", n);

        for (int c = n; c >= 0; c--)
        {
            printf("%d\n", c);
        }
    }
}