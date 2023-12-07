#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Veiculo {
    char proprietario[50];
    char combustivel[10];
    char modelo[50];
    char cor[10];
    int chassi;
    int ano;
    char placa[8];
    struct Veiculo* proximo;
} Veiculo;

Veiculo* inicializar() {
    return NULL;
}

void listarDiesel2010(Veiculo* lista) {
    Veiculo* v;
    for(v = lista; v != NULL; v = v->proximo) {
        if(strcmp(v->combustivel, "diesel") == 0 && v->ano >= 2010) {
            printf("%s\n", v->proprietario);
        }
    }
}

void listarPlacaJ(Veiculo* lista) {
    Veiculo* v;
    for(v = lista; v != NULL; v = v->proximo) {
        if(v->placa[0] == 'J' && (v->placa[7] == '0' || v->placa[7] == '2' || v->placa[7] == '4' || v->placa[7] == '7')) {
            printf("%s - %s\n", v->placa, v->proprietario);
        }
    }
}

void listarVogalPar(Veiculo* lista) {
    Veiculo* v;
    for(v = lista; v != NULL; v = v->proximo) {
        if(strchr("AEIOUaeiou", v->placa[1]) != NULL && ((v->placa[4] - '0') + (v->placa[5] - '0') + (v->placa[6] - '0') + (v->placa[7] - '0')) % 2 == 0) {
            printf("%s - %s\n", v->modelo, v->cor);
        }
    }
}

Veiculo* trocarProprietario(Veiculo* lista, int chassi, char* novo_proprietario) {
    Veiculo* v;
    for(v = lista; v != NULL; v = v->proximo) {
        if(v->chassi == chassi && strchr(v->placa, '0') == NULL) {
            strcpy(v->proprietario, novo_proprietario);
            return lista;
        }
    }
    printf("Veiculo nao encontrado.\n");
    return lista;
}

Veiculo* adicionar(Veiculo* lista) {
    Veiculo* novo = (Veiculo*) malloc(sizeof(Veiculo));
    printf("Digite o proprietario do veiculo: ");
    scanf("%s", novo->proprietario);
    printf("Digite o combustivel do veiculo: ");
    scanf("%s", novo->combustivel);
    printf("Digite o modelo do veiculo: ");
    scanf("%s", novo->modelo);
    printf("Digite a cor do veiculo: ");
    scanf("%s", novo->cor);
    printf("Digite o numero do chassi do veiculo: ");
    scanf("%d", &novo->chassi);
    printf("Digite o ano do veiculo: ");
    scanf("%d", &novo->ano);
    printf("Digite a placa do veiculo: ");
    scanf("%s", novo->placa);
    novo->proximo = lista;
    return novo;
}

main() {
    Veiculo* lista = inicializar();
    char opcao;
    do {
        printf("Escolha uma opcao:\n");
        printf("a) Adicionar veiculo\n");
        printf("b) Listar proprietarios de veiculos diesel de 2010 em diante\n");
        printf("c) Listar placas que comecam com J e terminam com 0, 2, 4 ou 7\n");
        printf("d) Listar veiculos com placa com segunda letra vogal e soma dos numeros par\n");
        printf("e) Trocar proprietario\n");
        printf("f) Sair\n");
        scanf(" %c", &opcao);
        switch(opcao) {
            case 'a':
                lista = adicionar(lista);
                break;
            case 'b':
                listarDiesel2010(lista);
                break;
            case 'c':
                listarPlacaJ(lista);
                break;
            case 'd':
                listarVogalPar(lista);
                break;
            case 'e': {
                int chassi;
                char novo_proprietario[50];
                printf("Digite o numero do chassi do veiculo: ");
                scanf("%d", &chassi);
                printf("Digite o nome do novo proprietario: ");
                scanf("%s", novo_proprietario);
                lista = trocarProprietario(lista, chassi, novo_proprietario);
                break;
            }
            case 'f':
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while(opcao != 'f');
}
