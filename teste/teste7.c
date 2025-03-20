
#include <stdio.h>
#include <stdlib.h>

// Função de comparação para qsort()
int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Função para mesclar e ordenar os vetores usando ponteiros
void ordenarEImprimir(int *v1, int *v2, int tamanho) {
    int combinado[tamanho * 2]; // Vetor para armazenar os 10 elementos

    // Copiando os elementos dos dois vetores para 'combinado'
    for (int i = 0; i < tamanho; i++) {
        combinado[i] = *(v1 + i);         // Adiciona elementos do primeiro vetor
        combinado[i + tamanho] = *(v2 + i); // Adiciona elementos do segundo vetor
    }

    // Ordenando o vetor usando qsort
    qsort(combinado, tamanho * 2, sizeof(int), comparar);

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
