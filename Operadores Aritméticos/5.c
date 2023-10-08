#include<stdio.h>

main() {
    
    float valorEmReais, cotacaoDolar, valorEmDolares;
    
    printf("Digite o valor em reais: ");
    scanf("%lf", &valorEmReais);
    
    printf("Digite a cotação do dólar (quantos reais valem 1 dólar): ");
    scanf("%lf", &cotacaoDolar);
    
    valorEmDolares =   valorEmReais / cotacaoDolar;
    
    printf("%.2lf reais equivalem a %.2lf dólares.\n", valorEmReais, valorEmDolares);
}