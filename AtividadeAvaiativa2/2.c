#include<stdio.h>
#include<stdlib.h>


char validaSexo() {
    char sexo;
    do {
        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);
    } while (sexo != 'M' && sexo != 'F');
    return sexo;
}

float validaSalario() {
    float salario;
    do {
        printf("Informe o salário (acima de R$1,00): ");
        scanf("%f", &salario);
    } while (salario <= 1.00);
    return salario;
}

void classificaSalario(float salario) {
    if (salario > 1400.00) {
        printf("Acima do salário mínimo\n");
    } else if (salario == 1400.00) {
        printf("Igual ao salário mínimo\n");
    } else {
        printf("Abaixo do salário mínimo\n");
    }
}

void mostraClassificacao(char sexo, float salario) {
    printf("Sexo: %s\n", (sexo == 'M') ? "Masculino" : "Feminino");
    printf("Salário: R$ %.2f\n", salario);
    classificaSalario(salario);
    printf("-------------------------\n");
}

main() {
    int numAssalariados, abaixoSalarioMinimo = 0, acimaSalarioMinimo = 0;

    printf("Informe o número de assalariados: ");
    scanf("%d", &numAssalariados);

    for (int i = 0; i < numAssalariados; i++) {
        printf("\nAssalariado %d:\n", i + 1);
        char sexo = validaSexo();
        float salario = validaSalario();
        mostraClassificacao(sexo, salario);

        if (salario < 1400.00) {
            abaixoSalarioMinimo++;
        } else {
            acimaSalarioMinimo++;
        }
    }

    printf("\nResumo:\n");
    printf("Assalariados abaixo do salário mínimo: %d\n", abaixoSalarioMinimo);
    printf("Assalariados acima do salário mínimo: %d\n", acimaSalarioMinimo);
}
