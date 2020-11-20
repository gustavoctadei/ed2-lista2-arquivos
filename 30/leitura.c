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

    arquivo = fopen("arquivo.bin", "rb");
    if(arquivo == NULL) {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    fread(alunos, sizeof(Aluno), TAM, arquivo);

    for(i = 0; i < TAM; i++) {
        printf("Aluno:\n");
        printf("Nome: %s", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].numero_matricula);
        printf("CPF: %s\n", alunos[i].cpf);
        printf("///////////////////////////\n");
    }
    
    fclose(arquivo);
    return 0;
}