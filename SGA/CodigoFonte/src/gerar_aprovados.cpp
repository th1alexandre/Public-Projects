#include "../include/suporte.h"

void gerarAprovados(Aluno *aluno, int N) {
    FILE *arquivo;
    int count = 0;
    char arq[] = "aprovados.txt";

    arquivo = fopen(arq, "w");
    if(arquivo == NULL) {
        printf("Nao foi possivel abrir o arquivo informado.\n");
    } else {
        for(int i = 0; i < N; i++) {
            if(aluno[i].ResultadoFinal == true) {
                fprintf(arquivo, "%-30s %d  %.2f\n", aluno[i].nome, aluno[i].RA, aluno[i].MF);
                count++;
            }
        }
        fprintf(arquivo, "Total: %d\n", count);
        fclose(arquivo);
        printf("Arquivo gerado.\n");
    }
}
