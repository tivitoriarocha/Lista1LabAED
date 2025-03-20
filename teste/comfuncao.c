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

void exibir(jogador*ponteiro){
    printf("%s\n",ponteiro->nome);
    printf("%f\n",ponteiro->salario);
    printf("%u\n",ponteiro->gols);
}


int main(){
setlocale(LC_ALL,"Portuguese");

jogador time[11];

jogador novato = {"Harley", 155000, 31};
exibir(&novato);

}


