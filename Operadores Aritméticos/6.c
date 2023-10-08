#include<stdio.h>

main() {
    
   float custo, frete, despesas, valorVenda, lucro, porcentagemLucro;

    printf("Digite o custo da mercadoria: ");
    scanf("%lf", &custo);

    printf("Digite o valor do frete: ");
    scanf("%lf", &frete);

    printf("Digite o valor das despesas eventuais: ");
    scanf("%lf", &despesas);

    printf("Digite o valor de venda: ");
    scanf("%lf", &valorVenda);

    lucro = valorVenda - (custo + frete + despesas);
    porcentagemLucro = (lucro / custo) * 100;

    printf("Lucro: R$ %.2lf\n", lucro);
    printf("Percentagem de lucro: %.2lf%%\n", porcentagemLucro);
}