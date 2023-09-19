#include <stdio.h>

int main()
{
    int soma = 0;

    printf("Os 50 primeiros numeros pares sao:\n");

    for (int i = 2; i <= 100; i += 2)
    {
        printf("%d ", i);
        soma += i;
    }

    printf("\nA soma dos 50 primeiros numeros pares e: %d\n", soma);
}