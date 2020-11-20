#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    int i;
    char c;

    arquivo = fopen("arquivo.txt", "r");
    if(arquivo == NULL) {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    do{
        fscanf(arquivo, "%c", &c);
        if(feof(arquivo)) break;
        printf("%c", c);
    } while(1);

    return 0;
}