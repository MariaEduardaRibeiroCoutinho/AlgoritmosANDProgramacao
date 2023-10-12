#include<stdio.h>

main() {
    
    int v[10], v1[10], v2[10], n1 = 0, n2 = 0; 

    printf("Digite 10 números inteiros:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < 10; i++){
        if(v[i] % 2 == 0){
            v2[n2] = v[i];
            n2++;
        }else{
            v1[n1] = v[i];
            n1++;
        }
    }

    printf("Elementos UTILIZADOS de v1 (ímpares):\n");
    for(int i = 0; i < n1; i++){
        printf("%d ", v1[i]);
    }

    printf("Elementos UTILIZADOS de v2 (pares):\n");
    for(int i = 0; i < n2; i++){
        printf("%d ", v2[i]);
    }
}
