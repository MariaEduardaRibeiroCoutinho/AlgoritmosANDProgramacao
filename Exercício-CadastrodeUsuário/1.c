#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
    char email[50];
    char sexo[10];
    char endereco[100];
    double altura;
    int vacina;
} Usuario;

Usuario usuarios[1000];
int count = 0;

int gerarId() {
    int id = rand();
    for(int i = 0; i < count; i++) {
        if(usuarios[i].id == id) {
            return gerarId();
        }
    }
    return id;
}

void adicionarUsuario() {
    Usuario u;
    u.id = gerarId();
    printf("Digite o nome completo: ");
    scanf("%s", u.nome);
    printf("Digite o email: ");
    scanf("%s", u.email);
    printf("Digite o sexo: ");
    scanf("%s", u.sexo);
    printf("Digite o endereco: ");
    scanf("%s", u.endereco);
    printf("Digite a altura: ");
    scanf("%lf", &u.altura);
    printf("Digite 1 para vacinado e 0 para nao vacinado: ");
    scanf("%d", &u.vacina);
    usuarios[count++] = u;
}

void editarUsuario() {
    int id;
    printf("Digite o ID do usuario para editar: ");
    scanf("%d", &id);
    for(int i = 0; i < count; i++) {
        if(usuarios[i].id == id) {
            printf("Digite o novo nome: ");
            scanf("%s", usuarios[i].nome);
            printf("Digite o novo email: ");
            scanf("%s", usuarios[i].email);
            printf("Digite o novo sexo: ");
            scanf("%s", usuarios[i].sexo);
            printf("Digite o novo endereco: ");
            scanf("%s", usuarios[i].endereco);
            printf("Digite a nova altura: ");
            scanf("%lf", &usuarios[i].altura);
            printf("Digite 1 para vacinado e 0 para nao vacinado: ");
            scanf("%d", &usuarios[i].vacina);
            return;
        }
    }
    printf("Usuario nao encontrado.\n");
}

void excluirUsuario() {
    int id;
    printf("Digite o ID do usuario para excluir: ");
    scanf("%d", &id);
    for(int i = 0; i < count; i++) {
        if(usuarios[i].id == id) {
            for(int j = i; j < count - 1; j++) {
                usuarios[j] = usuarios[j + 1];
            }
            count--;
            return;
        }
    }
    printf("Usuario nao encontrado.\n");
}

void buscarUsuario() {
    char email[50];
    printf("Digite o email do usuario para buscar: ");
    scanf("%s", email);
    for(int i = 0; i < count; i++) {
        if(strcmp(usuarios[i].email, email) == 0) {
            printf("ID: %d\n", usuarios[i].id);
            printf("Nome: %s\n", usuarios[i].nome);
            printf("Email: %s\n", usuarios[i].email);
            printf("Sexo: %s\n", usuarios[i].sexo);
            printf("Endereco: %s\n", usuarios[i].endereco);
            printf("Altura: %.2lf\n", usuarios[i].altura);
            printf("Vacinado: %d\n", usuarios[i].vacina);
            return;
        }
    }
    printf("Usuario nao encontrado.\n");
}

void imprimirUsuarios() {
    for(int i = 0; i < count; i++) {
        printf("ID: %d\n", usuarios[i].id);
        printf("Nome: %s\n", usuarios[i].nome);
        printf("Email: %s\n", usuarios[i].email);
        printf("Sexo: %s\n", usuarios[i].sexo);
        printf("Endereco: %s\n", usuarios[i].endereco);
        printf("Altura: %.2lf\n", usuarios[i].altura);
        printf("Vacinado: %d\n", usuarios[i].vacina);
        printf("\n");
    }
}

main() {
    char opcao;
    do {
        printf("Escolha uma opcao:\n");
        printf("a) Adicionar usuario\n");
        printf("b) Editar usuario\n");
        printf("c) Excluir usuario\n");
        printf("d) Buscar usuario\n");
        printf("e) Imprimir usuarios\n");
        printf("f) Sair\n");
        scanf(" %c", &opcao);
        switch(opcao) {
            case 'a':
                adicionarUsuario();
                break;
            case 'b':
                editarUsuario();
                break;
            case 'c':
                excluirUsuario();
                break;
            case 'd':
                buscarUsuario();
                break;
            case 'e':
                imprimirUsuarios();
                break;
            case 'f':
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while(opcao != 'f');
}
