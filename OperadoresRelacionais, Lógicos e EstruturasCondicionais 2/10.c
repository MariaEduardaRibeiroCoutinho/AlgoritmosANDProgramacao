#include<stdio.h>
#include<math.h>

main() {

    int a, b, c, delta, x1, x2;

    printf("Digite o coeficiente a: ");
    scanf("%lf", &a);

    if(a == 0){
        printf("Não é uma equação de segundo grau.\n");
    }

    printf("Digite o coeficiente b: ");
    scanf("%lf", &b);
    
    printf("Digite o coeficiente c: ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    if(delta < 0){
        printf("Não existe raiz real.\n");
    }else if(delta == 0){
        x1 = -b / (2 * a);
        printf("Raiz única: x = %.2lf\n", x1);
    }else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raízes reais: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    }
}