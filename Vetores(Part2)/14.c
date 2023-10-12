#include<stdio.h>

main() {

    int vetor[10], igual;

    //inserir informacoes no vetor 
    for(int i = 0; i < 10; i++){
        printf("Inserir valor");
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i < 10; i++){
        igual = 0;
        //percorrer proximas posicoes para buscar vaor igual
        for(int j = i + 1; j < 10; j++){
            //se encontrar valor igual
            if(vetor[i] == vetor[j]){
                igual = 1;
            }
        }
        if(igual == 1){
            printf("possuem valores iguais: %d", vetor[i]);
        }
    }
}