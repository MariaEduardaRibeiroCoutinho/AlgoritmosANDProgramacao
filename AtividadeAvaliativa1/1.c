#include<stdio.h>
#include<math.h>

main() {
    
    int x, fx;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    if(x * x <= 16){
        printf("Erro: x^2 deve ser maior que 16.\n");
    }else{
        fx = (5 * x + 3) / sqrt(x * x - 16);
        printf("f(x) = %.2lf\n", fx);
    }
}
