#include "../include/suporte.h"

void lerArquivo(Aluno *aluno, int &N) {
    FILE *arquivo;
    int count = 0, in;
    char nomearq[ARQ_MAX];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomearq);

    arquivo = fopen(nomearq, "r");
    if(arquivo == NULL) {
        printf("Nao foi possivel abrir o arquivo informado.\n");
    } else {
        do {
            in = fscanf(arquivo, " %[^0-9] %d %lf %lf %lf %lf", aluno[N].nome, &aluno[N].RA, &aluno[N].P1, &aluno[N].P2, &aluno[N].T, &aluno[N].PO);
            if(in != EOF) {
                mediaFinal(aluno[N]);
                resultadoFinal(aluno[N]);
                count++;
                N++;
            }
        } while(in != EOF);
        fclose(arquivo);
        printf("Alunos cadastrados: %d\n", count);
    }
    insertionSort(aluno, N);
}
