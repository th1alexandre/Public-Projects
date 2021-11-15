#include "../include/suporte.h"

void mediaFinal(Aluno &aluno) {
	if((aluno.P1 < aluno.PO) && (aluno.P1 <= aluno.P2)) {
		aluno.MF = (aluno.PO * 0.35) + (aluno.P2 * 0.35) + (aluno.T * 0.3);
	} else if((aluno.P2 < aluno.PO) && (aluno.P2 <= aluno.P1)) {
		aluno.MF = (aluno.P1 * 0.35) + (aluno.PO * 0.35) + (aluno.T * 0.3);
	} else {
		aluno.MF = (aluno.P1 * 0.35) + (aluno.P2 * 0.35) + (aluno.T * 0.3);
	}
}

void resultadoFinal(Aluno &aluno) {
	if(aluno.MF >= 6.0) {
		aluno.ResultadoFinal = true;
	} else {
		aluno.ResultadoFinal = false;
	}
}

void insertionSort(Aluno *aluno, int N) {
	int i, j;
	bool var;
	Aluno aux;

	for(i = 1; i < N; i++) {
		aux = aluno[i];

		for(j = i - 1; j >= 0; j--) {
			if(strcmp(aluno[j].nome, aux.nome) >= 0) {
				var = true;

				if(strcmp(aluno[j].nome, aux.nome) == 0) { // <<< Caso os alunos possuam mesmo nome, ordena pelo menor RA.
					if(aluno[j].RA > aux.RA) {
						var = true;
					} else {
						break;
					}
				}
			} else {
				break;
			}

			if(var) {
				aluno[j+1] = aluno[j];
			}
		}
		aluno[j+1] = aux;
	}
}
