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

jogador time[11];
//jogador*goleiro = &time[0];
//jogador *jogador2 = &time[1];
jogador*goleiro= time;

printf("Digite o nome, salario e gols de dois jogadores:\n");
fgets(goleiro->nome,sizeof(goleiro->nome),stdin);
scanf("%f", &goleiro->salario);
scanf("%u", &goleiro->gols);

//fgets(jogador2->nome,sizeof(jogador2->nome),stdin);
//scanf("%f", &jogador2->salario);
//scanf("%u", &jogador2->gols);

printf("O goleiro do time é:\n %s",goleiro->nome ,"\n");
printf("O goleiro do time ganha:\n %f",goleiro->salario,"\n");
printf("O goleiro do time tem:\n %u",goleiro->gols );

//printf("O goleiro do time é:\n %s",jogador2->nome );
//printf("O goleiro do time é:\n %f",jogador2->salario );
//printf("O goleiro do time é:\n %u",jogador2->gols );

}


