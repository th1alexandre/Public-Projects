### ***Sistema de Gerenciamento de Alunos***



O programa tem como função gerenciar alunos de uma disciplina acadêmica específica. 

É capaz de cadastrar alunos manualmente (entrada pelo teclado) ou através de um arquivo ".txt" sendo ambos padronizados.

Possui um algoritmo de ordenação, todos os alunos cadastrados são colocados em ordem alfabética, caso exista dois alunos com nome idêntico será colocado primeiro o aluno de menor valor do RGA (Registro Geral Acadêmico).

Possui uma função de busca, basta colocar um nome e o programa informará todos os resultados que corresponderem além da média final e da situação do aluno, o nome pode estar incompleto, todos os alunos que correspondam total ou parcialmente com a entrada digitada serão mostrados na tela.

Também calcula a média final dos alunos baseado na fórmula [(P1 * 0.35) + (P2 * 0.35) + (T * 0.3)], a PO substitui a menor nota entre P1 ou P2 (apenas se, PO > P1 ou P2). 

Pode gerar arquivos contendo todos os alunos aprovados ou reprovados através do menu implementado. A função que encerra o programa sempre gera um arquivo .txt com todos os alunos que foram cadastrados durante a execução do programa.



***Padrão de entrada***

A linha de cadastro deve seguir o padrão "NOME_DO_ALUNO  RGA  NOTA_P1  NOTA_P2  NOTA_TRABALHO  NOTA_PO\n", no caso de leitura através de arquivo .txt adicionar cada aluno em uma única linha.



Thiago Alexandre da Silva Freire - https://www.linkedin.com/in/th1alexandre/
