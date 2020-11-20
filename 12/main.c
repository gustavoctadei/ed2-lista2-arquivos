#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main() {
    FILE *arquivo;
    int vetor[TAM], i;

    arquivo = fopen("arquivo.bin", "wb");

    for(i = 0; i < TAM; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &vetor[i]);
    }

    fwrite(vetor, sizeof(int), TAM, arquivo);
    fclose(arquivo);

    return 0;
}