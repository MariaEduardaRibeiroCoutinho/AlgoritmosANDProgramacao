#include<stdio.h>

main() {

    int tempoDeServico;
    float salarioAtual, salarioReajustado, bonus;
    
    printf("Digite o salário atual do funcionário: R$ ");
    scanf("%lf", &salarioAtual);
    
    printf("Digite o tempo de serviço do funcionário (em anos): ");
    scanf("%d", &tempoDeServico);
    
    bonus = 0.0;
    
   
    if(salarioAtual <= 500.00){
        salarioReajustado = salarioAtual * 1.25;
    }else if(salarioAtual <= 1000.00){
        salarioReajustado = salarioAtual * 1.20;
    }else if(salarioAtual <= 1500.00){
        salarioReajustado = salarioAtual * 1.15; 
    }else if(salarioAtual <= 2000.00){
        salarioReajustado = salarioAtual * 1.10; 
    }else{
        salarioReajustado = salarioAtual; 
    }
    
    if(tempoDeServico >= 1 && tempoDeServico <= 3){
        bonus = 100.00;
    }else if(tempoDeServico >= 4 && tempoDeServico <= 6){
        bonus = 200.00;
    }else if(tempoDeServico >= 7 && tempoDeServico <= 10){
        bonus = 300.00;
    }else if(tempoDeServico > 10){
        bonus = 500.00;
    }
    
    salarioReajustado += bonus;
    
    if(salarioReajustado > salarioAtual){
        printf("O salário reajustado é: R$ %.2lf\n", salarioReajustado);
    }else{
        printf("O funcionário não tem direito a aumento.\n");
    }
}