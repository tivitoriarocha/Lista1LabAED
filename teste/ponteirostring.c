#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

typedef struct 
{
    char nome[20];
    float salario;
    unsigned gols;
}jogador;


int main(){
setlocale(LC_ALL,"Portuguese");

char nome[20] = "Lilith";
printf("%s\n", nome);

char*ponteiro =&nome[1];
*ponteiro = 'y';
printf("%s\n",ponteiro);

nome[3] = 'y';
printf("%s\n", nome);

*ponteiro = 'i';
printf("%s\n", nome);


return(0);
}


