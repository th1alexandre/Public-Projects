#include "../include/suporte.h"

void cadastrarAluno(Aluno *aluno, int &N) {
    printf("Informe os dados para cadastro: ");
    scanf(" %[^0-9] %d %lf %lf %lf %lf", aluno[N].nome, &aluno[N].RA, &aluno[N].P1, &aluno[N].P2, &aluno[N].T, &aluno[N].PO);

    mediaFinal(aluno[N]);
    resultadoFinal(aluno[N]);
    N++;

    insertionSort(aluno, N);
    printf("Cadastro realizado.\n");
}
