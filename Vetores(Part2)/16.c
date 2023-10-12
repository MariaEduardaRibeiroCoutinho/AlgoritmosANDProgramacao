#include<stdio.h>

main() {
    
    int vetor[5], codigo;

    printf("Digite 5 números reais:\n");
    for(int i = 0; i < 5; i++){
        scanf("%f", &vetor[i]);
    }

    printf("Digite o código (0 para sair, 1 para ordem direta, 2 para ordem inversa): ");
    scanf("%d", &codigo);

    if(codigo == 0){
        printf("Programa finalizado.\n");

    }else if(codigo == 1){
        printf("Vetor na ordem direta:\n");
        for(int i = 0; i < 5; i++){
            printf("%.2f ", vetor[i]);
        }
        printf("\n");
    }else if(codigo == 2){
        printf("Vetor na ordem inversa:\n");
        for(int i = 4; i >= 0; i--){
            printf("%.2f ", vetor[i]);
        }
        printf("\n");
    }else{
        printf("Código inválido.\n");
    }
}
