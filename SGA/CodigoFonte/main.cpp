#include "include/suporte.h"
#define LIMITE_Alunos 100

int main() {
	int operacao, N = 0;
	Aluno alunos[LIMITE_Alunos];

	do {
		printf("\n");
		printf("[1] Cadastrar um novo aluno\n");
		printf("[2] Buscar aluno\n");
		printf("[3] Ler arquivo com listagem de alunos\n");
		printf("[4] Gerar arquivo com dados dos alunos aprovados\n");
		printf("[5] Gerar arquivo com dados dos alunos reprovados\n");
		printf("[6] Fechar programa\n");
		printf("\nOpcao: ");

		scanf("%d", &operacao);

		switch(operacao) {
			case 1:
				cadastrarAluno(alunos, N);
				break;
			case 2:
				buscarAluno(alunos, N);
				break;
			case 3:
				lerArquivo(alunos, N);
				break;
			case 4:
				gerarAprovados(alunos, N);
				break;
			case 5:
				gerarReprovados(alunos, N);
				break;
			case 6:
				fecharPrograma(alunos, N);
				break;
			default:
				printf("Digite uma opcao valida.\n");
				break;
		}

	} while(operacao != 6);

	return 0;
}
