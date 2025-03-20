//Questão 08) Assumindo que o endereço da variável x foi atribuído a um ponteiro px, escreva uma 
//expressão que não usa x e devida x por 3.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x = 9;        
    int *px = &x; 
    int div = *px/3;
  
    printf("%d\n", *px/3);
    // ou
    printf("%d\n", div);

    return 0;
}




