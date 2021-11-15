#include "../include/suporte.h"

void buscarAluno(Aluno *aluno, int N) {
    int count = 0;
    int alunosRetorno[N];
    char nomeBusca[MAX];

    printf("Informe o nome do estudante que deseja buscar: ");
    scanf(" %[^\n]", nomeBusca);

    for(int i = 0; i < N; i++) {
        if((strstr(aluno[i].nome, nomeBusca)) != NULL ) {
            alunosRetorno[count++] = i;
        }
    }

    if(count != 0) {
        for(int i = 0; i < count; i++) {
            if(aluno[alunosRetorno[i]].ResultadoFinal){
                printf("%-30s %.2f aprovado\n", aluno[alunosRetorno[i]].nome, aluno[alunosRetorno[i]].MF);
            } else {
                printf("%-30s %.2f reprovado\n", aluno[alunosRetorno[i]].nome, aluno[alunosRetorno[i]].MF);
            }
        }
    }
    printf("Alunos encontrados: %d\n", count);
}
