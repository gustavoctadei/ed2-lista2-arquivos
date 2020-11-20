#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *entrada, *saida;
    int i;
    char c;

    entrada = fopen("entrada.txt", "r");
    saida = fopen("saida.txt", "w");
    if(entrada == NULL || saida == NULL) {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    do{
        fscanf(entrada, "%c", &c);
        if(feof(entrada)) break;
        fprintf(saida, "%c", c);
    } while(1);

    fclose(entrada);
    fclose(saida);

    return 0;
}