#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x;        // Declaração da variável x
    int *px = &x; // Ponteiro px recebe o endereço de x

    printf("Digite um número: ");
    scanf("%d", px);  // Correto: passando o endereço armazenado no ponteiro

    // Imprimindo o valor de x e o endereço armazenado no ponteiro px
    printf("Valor de x: %d\n", x);
    printf("Endereço de x (&x): %p\n", (void*)&x);
    printf("Endereço armazenado em px: %p\n", (void*)px);
    printf("Valor armazenado no endereço que px aponta (*px): %d\n", *px);

    return (0);
}




