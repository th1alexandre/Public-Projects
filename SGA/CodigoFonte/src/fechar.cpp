#include "../include/suporte.h"

void fecharPrograma(Aluno *aluno, int N) {
    FILE *arquivo;
    int count = 0;
    char arq[] = "atual.txt";

    arquivo = fopen(arq, "w");
    if(arquivo == NULL) {
        printf("Nao foi possivel abrir o arquivo informado.\n");
    } else {
        for(int i = 0; i < N; i++) {
            fprintf(arquivo, "%-30s %d  %.2f\n", aluno[i].nome, aluno[i].RA, aluno[i].MF);
            count++;
        }
        fclose(arquivo);
        printf("Arquivo gerado.\n");
    }
    printf("Programa Encerrado.\n");
}
