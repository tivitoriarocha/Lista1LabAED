#include <stdio.h>

// Função para mesclar e ordenar dois vetores usando ponteiros
void ordenarEImprimir(int *v1, int *v2, int tamanho) {
    int combinado[tamanho * 2]; // Vetor para armazenar os 10 elementos

    // Copiando os elementos dos dois vetores para 'combinado'
    for (int i = 0; i < tamanho; i++) {
        combinado[i] = *(v1 + i); // Adiciona elementos do primeiro vetor
        combinado[i + tamanho] = *(v2 + i); // Adiciona elementos do segundo vetor
    }

    // Algoritmo Bubble Sort para ordenar os elementos
    for (int i = 0; i < (tamanho * 2) - 1; i++) {
        for (int j = 0; j < (tamanho * 2) - 1 - i; j++) {
            if (combinado[j] > combinado[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                int temp = combinado[j];
                combinado[j] = combinado[j + 1];
                combinado[j + 1] = temp;
            }
        }
    }

    // Imprimindo os elementos ordenados
    printf("Saída: ");
    for (int i = 0; i < tamanho * 2; i++) {
        printf("%d", *(combinado + i)); // Acessando os elementos com ponteiros
        if (i < (tamanho * 2) - 1) {
            printf(", "); // Adiciona vírgula entre os números
        }
    }
    printf("\n");
}

// Função principal
int main() {
    int vetor1[5] = {2, 5, 9, 8, 3};
    int vetor2[5] = {7, 4, 1, 10, 6};

    // Chamando a função e passando os ponteiros dos vetores
    ordenarEImprimir(vetor1, vetor2, 5);

    return 0;
}
