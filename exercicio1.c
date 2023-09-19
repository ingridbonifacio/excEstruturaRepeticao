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
        printf("Contagem de 0 até %d:\n", n);

        for (int c = 0; c <= n; c++)
        {
            printf("%d\n", c);
 }
}
}