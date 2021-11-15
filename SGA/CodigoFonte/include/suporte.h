#include <stdio.h>
#include <string.h>
#define ARQ_MAX 100 // Tamanho máximo do nome de arquivos
#define MAX 100 // Tamanho máximo do nome de alunos

struct Aluno {
	char nome[MAX];
	int RA;
	bool ResultadoFinal;
	double P1, P2, T, PO, MF;
};

	// Funções auxiliares
void mediaFinal(Aluno &aluno);
void resultadoFinal(Aluno &aluno);
void insertionSort(Aluno *aluno, int N);

	// Menu
void buscarAluno(Aluno *aluno, int N);
void cadastrarAluno(Aluno *aluno, int &N);
void gerarAprovados(Aluno *aluno, int N);
void gerarReprovados(Aluno *aluno, int N);
void lerArquivo(Aluno *aluno, int &N);
void fecharPrograma(Aluno *aluno, int N);
