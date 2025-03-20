// Questão 02) Declare uma variável e “printe” o valor dela e o seu endereço.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Portuguese");

char nome[20] = "Algoritmo";
printf("O valor da variável é:%s\n", nome);

char *ponteiro = NULL;
ponteiro = &nome;

printf("O endereço é:%p\n", &nome);
printf("%p\n", ponteiro);

return(0);
}


