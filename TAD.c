#include "tadH.h"
#include <stdio.h>
#include <stdlib.h>

/*void incluir() { //função antiga, inserindo a partir de scanf
    printf("Digite os 5 valores a serem incluidos: ");
    for (i = 0; i < TAM-1; i++)
        scanf("%d", &vetor[i]);
    printf("Valores incluidos: ");
    for (i = 0; i < TAM-1; i++) {
    printf("%d""; ", vetor[i]);
    }
}*/

int incluir(int valor) {
    vetor[count] = valor;
    count++;
    printf("\nValor inserido com sucesso!\n");
    return 1;
}

/*void excluir() { //usado com scanf
    int remover, i;
    printf("\n\n");
    printf("Digite o numero a ser excluido: ");
    scanf("%d", &remover);

    i = 0;
    while (vetor[i] != vetor[TAM-1]) {
        if (vetor[i] == remover) {
            vetor[i] = vetor[i+1];
            if (vetor[i] != vetor[TAM-1])
                vetor[i+1] = remover;
        }
        i++;
    }
    printf("Novo vetor: ");
    for (i = 0; vetor[i] != vetor[TAM-1]; i++)
        printf("%d""; ", vetor[i]);
        printf("\n\n");
}*/

void excluir(int valor) {
    for(i = 0; i < TAM; i++){
        if (vetor[i]==valor) {
		vetor[i] = 0;
        }
    }
    printf("\nValor deletado\n");
}

void imprime() {
    printf("\nVetor impresso: \n");
	for(i = 0; i < TAM; i++) {
	    printf("%d""; ", vetor[i]);//vetor de inteiro
	}
	printf("\n");
}

/*void alterar() {
    int antigo, novo, i;
    printf("Digite o numero a ser alterado: ");
    scanf("%d", &antigo);
    printf("Valor a ser inserido: ");
    scanf("%d", &novo);

    for (i = 0; vetor[i] != vetor[TAM-1]; i++) {
        if (vetor[i] == antigo)
            vetor [i] = novo;
        }

    printf("Novo vetor: ");
    for (i = 0; vetor[i] != vetor[TAM-1]; i++){
        printf("%d""; ", vetor[i]);
    }
    printf("\n\n");
}*/
