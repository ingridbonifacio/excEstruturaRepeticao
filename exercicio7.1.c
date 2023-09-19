#include <stdio.h>

int main() {
    int total_habitantes = 0;
    int mulheres_18_35_olhos_castanhos_cabelos_castanhos = 0;

    while (1) {
        char sexo, olhos, cabelos;
        int idade;
        float salario;

        printf("Cadastro de habitante #%d:\n", total_habitantes + 1);

        // Coleta de informações do habitante
        printf("Sexo (m/f): ");
        scanf(" %c", &sexo);

        // Verifica se o usuário quer encerrar a pesquisa
        if (idade == -1) {
            break;
        }

        // Validação do sexo
        if (sexo != 'm' && sexo != 'f') {
            printf("Sexo inválido. Digite 'm' para masculino ou 'f' para feminino.\n");
            continue;
        }

        printf("Cor dos olhos (a/v/c/p): ");
        scanf(" %c", &olhos);

        // Validação da cor dos olhos
        if (olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p') {
            printf("Cor dos olhos inválida. Digite 'a', 'v', 'c' ou 'p'.\n");
            continue;
        }

        printf("Cor dos cabelos (l/c/p/r): ");
        scanf(" %c", &cabelos);

        // Validação da cor dos cabelos
        if (cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r') {
            printf("Cor dos cabelos inválida. Digite 'l', 'c', 'p' ou 'r'.\n");
            continue;
        }

        printf("Idade (10-100): ");
        scanf("%d", &idade);

        // Validação da idade
        if (idade < 10 || idade > 100) {
            printf("Idade fora do intervalo permitido (10-100).\n");
            continue;
        }

        printf("Salário: ");
        scanf("%f", &salario);

        // Validação do salário
        if (salario < 0) {
            printf("Salário não pode ser negativo.\n");
            continue;
        }

        // Verifica se o habitante atende aos critérios especificados
        if (sexo == 'f' && idade >= 18 && idade <= 35 && olhos == 'c' && cabelos == 'c') {
            mulheres_18_35_olhos_castanhos_cabelos_castanhos++;
        }

        total_habitantes++;
    }

    // Cálculo da porcentagem
    if (total_habitantes > 0) {
        float porcentagem = (float)mulheres_18_35_olhos_castanhos_cabelos_castanhos / total_habitantes * 100;
        printf("Porcentagem de mulheres entre 18 e 35 anos com olhos e cabelos castanhos: %.2f%%\n", porcentagem);
    } else {
        printf("Nenhum habitante cadastrado.\n");
    }

    return 0;
}
