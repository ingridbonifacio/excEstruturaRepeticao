#include <stdio.h>

int main()
{
    int n;

    printf("Digite um número inteiro n: ");
    scanf("%d", &n);

    int numeroImpar = 1;
    int contador = 0;

    while (contador < n)
    {
        printf("%d\n", numeroImpar);
        numeroImpar += 2;
        contador++;
    }
}