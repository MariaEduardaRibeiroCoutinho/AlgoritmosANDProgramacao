#include<stdio.h>
#include<math.h>

main() {
   
   float raio, area, M_PI;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);

    area = M_PI * pow(raio, 2);

    printf("A área do círculo com raio %.2lf é %.2lf\n", raio, area);
}