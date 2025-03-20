//Questão 07) Desenvolva uma função que receba como parâmetro os ponteiros de dois vetores de 5 posições. 
// O procedimento deverá imprimir na tela os valores contidos nos dois vetores de forma 
// crescente (utilize ponteiros). Exemplo:
// Vetor1 = 2, 5, 9, 8, 3
// Vetor 2 = 7, 4, 1, 10, 6
// Saída: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


void ordenarPrintar(int *v1, int *v2) {
    int juntos[10]; 


    for (int i = 0; i < 5; i++) {
        juntos[i] = *(v1 + i); 
        juntos[i + 5] = *(v2 + i); 
    }

    
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - 1 - i; j++) {
            if (juntos[j] > juntos[j + 1]) {
                int temporario = juntos[j];
                juntos[j] = juntos[j + 1];
                juntos[j + 1] = temporario;
            }
        }
    }

    printf("Saída: ");
    for (int i = 0; i < 10; i++) {
        printf("%d", *(juntos + i)); 
        if (i < 10 - 1) {
            printf(", "); 
        }
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL,"Portuguese");

    int vetor1[5] = {2, 5, 9, 8, 3};
    int vetor2[5] = {7, 4, 1, 10, 6};

    ordenarPrintar(vetor1, vetor2);
 
return (0);
}
