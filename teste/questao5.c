// Questão 05) Como seria o output se eu desse “print” nas variáveis a seguir:
// int x=68, y;
// int *p;
// p = &x;
// y = *p + 200;
// Seguindo o mesmo fluxo de pensamento da questão passada, podemos perceber que o ponteiro p 
// recebe o endereço de memória da variável x, a partir do uso do &. Então, ao ser exibido, veremos 
// o endereço de memória onde está localizado o conteúdo de x. Já se exibirmos x, veremos o valor 
// atribuído a ela, 68. O mesmo acontece com y, pois lhe é atribuído o conteúdo do referenciamento 
// do ponteiro mais o número 200 (68 + 200), e não o conteúdo do ponteiro somado a outro valor, resultando em 268.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Portuguese");

int x=68, y;
int *p;
p = &x;
y = *p + 200;

printf("%d \n", x);
printf("%d \n", y);
printf("%d \n", p);

return(0);
}


