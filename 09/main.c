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

    fseek(arquivo, 0, SEEK_END);
    fseek(arquivo, -(10*sizeof(char)), SEEK_CUR);

    for(i = 0; i < 10; i++) {
        fscanf(arquivo, "%c", &c);
        printf("%c", c);
    }

    return 0;
}