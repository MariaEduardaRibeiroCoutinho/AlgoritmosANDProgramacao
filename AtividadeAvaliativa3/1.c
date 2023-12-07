#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Produto {
    int codigo;
    char descricao[100];
    int quantidade;
    double valor;
    struct Produto* proximo;
} Produto;

Produto* inicializar() {
    return NULL;
}

Produto* adicionar(Produto* estoque) {
    Produto* novo = (Produto*) malloc(sizeof(Produto));
    printf("Digite o codigo do produto: ");
    scanf("%d", &novo->codigo);
    printf("Digite a descricao do produto: ");
    scanf("%s", novo->descricao);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &novo->quantidade);
    printf("Digite o valor do produto: ");
    scanf("%lf", &novo->valor);
    novo->proximo = estoque;
    return novo;
}

void relatorio(Produto* estoque) {
    Produto* p;
    for(p = estoque; p != NULL; p = p->proximo) {
        printf("Codigo: %d\n", p->codigo);
        printf("Descricao: %s\n", p->descricao);
        printf("Quantidade: %d\n", p->quantidade);
        printf("Valor: %.2lf\n", p->valor);
        printf("\n");
    }
}

Produto* buscar(Produto* estoque, int codigo) {
    Produto* p;
    for(p = estoque; p != NULL; p = p->proximo) {
        if(p->codigo == codigo) {
            return p;
        }
    }
    return NULL;
}

Produto* remover(Produto* estoque, int codigo) {
    Produto* anterior = NULL;
    Produto* atual = estoque;
    while(atual != NULL && atual->codigo != codigo) {
        anterior = atual;
        atual = atual->proximo;
    }
    if(atual == NULL) {
        printf("Produto nao encontrado.\n");
        return estoque;
    }
    if(anterior == NULL) {
        estoque = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }
    free(atual);
    return estoque;
}

main() {
    Produto* estoque = inicializar();
    char opcao;
    do {
        printf("Escolha uma opcao:\n");
        printf("a) Adicionar produto\n");
        printf("b) Gerar relatorio\n");
        printf("c) Buscar produto\n");
        printf("d) Remover produto\n");
        printf("e) Sair\n");
        scanf(" %c", &opcao);
        switch(opcao) {
            case 'a':
                estoque = adicionar(estoque);
                break;
            case 'b':
                relatorio(estoque);
                break;
            case 'c': {
                int codigo;
                printf("Digite o codigo do produto: ");
                scanf("%d", &codigo);
                Produto* p = buscar(estoque, codigo);
                if(p != NULL) {
                    printf("Produto encontrado:\n");
                    printf("Codigo: %d\n", p->codigo);
                    printf("Descricao: %s\n", p->descricao);
                    printf("Quantidade: %d\n", p->quantidade);
                    printf("Valor: %.2lf\n", p->valor);
                } else {
                    printf("Produto nao encontrado.\n");
                }
                break;
            }
            case 'd': {
                int codigo;
                printf("Digite o codigo do produto: ");
                scanf("%d", &codigo);
                estoque = remover(estoque, codigo);
                break;
            }
            case 'e':
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while(opcao != 'e');
}
