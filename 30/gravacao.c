#include <stdio.h>
#include <stdlib.h>

#define TAM 2

typedef struct aluno {
    char nome[30];
    int numero_matricula;
    char cpf[12];
} Aluno;

int main() {
    FILE *arquivo;
    Aluno alunos[TAM];
    int i;

    arquivo = fopen("arquivo.bin", "wb");
    if(arquivo == NULL) {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    for(i = 0; i < TAM; i++) {
        printf("Digite o nome do Aluno: ");
        fflush(stdin);
        fgets(alunos[i].nome, 30, stdin);
        
        printf("Digite o numero da matricula do Aluno: ");
        scanf("%d", &alunos[i].numero_matricula);
        
        printf("Digite o CPF do Aluno: ");
        fflush(stdin);
        fgets(alunos[i].cpf, 12, stdin);
    }

    fwrite(alunos, sizeof(Aluno), TAM, arquivo);
    fclose(arquivo);

    return 0;
}