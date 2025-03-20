// Questão 04) Na expressão float *ptr; o que é do tipo float?
// Float indica que o ponteiro recebe um endereço de memória de uma variável do tipo float. 
// Por isso, é possível exibir o próprio valor da variável printando *ptr. Segue exemplo abaixo.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Portuguese");

char ch = 'G';  
char *indica = &ch;  

printf("%c\n", ch);      
printf("%c\n", *indica); 
printf("Endereço de ch: %p\n", (void*)&ch);
printf("Conteúdo de indica: %p\n", (void*)indica);


return(0);
}