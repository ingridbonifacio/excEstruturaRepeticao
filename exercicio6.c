#include <stdio.h>

int main()
{
    int escolha;
    float valorTotal = 0;

    printf("Bem-vindo à loja de frutas Barreto!\n");

    do
    {
        printf("\nMenu de frutas:\n");
        printf("1 => ABACAXI - R$ 5,00 a unidade\n");
        printf("2 => MAÇA - R$ 1,00 a unidade\n");
        printf("3 => PERA - R$ 4,00 a unidade\n");
        printf("0 => Finalizar compra\n");

        printf("Escolha uma fruta (1-3) ou 0 para finalizar: ");
        scanf("%d", &escolha);

        if (escolha >= 1 && escolha <= 3)
        {
            int quantidade;
            printf("Digite a quantidade desejada: ");
            scanf("%d", &quantidade);

            switch (escolha)
            {
            case 1:
                valorTotal += 5.0 * quantidade;
                break;
            case 2:
                valorTotal += 1.0 * quantidade;
                break;
            case 3:
                valorTotal += 4.0 * quantidade;
                break;
            }
        }
        else if (escolha != 0)
        {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (escolha != 0);

    printf("\nTotal da compra: R$ %.2f\n", valorTotal);
}