#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Portuguese");

//FILE*arquivo = fopen("dados.bin","wb");

//int numeros[]={10,20,30,40,50};
//fwrite(numeros, sizeof(int),5, arquivo);

//fclose(arquivo);
//printf("Dados gravados com sucesso!\n");

FILE*arquivo = fopen("dados.bin","rb");

int numeros[5];
fread(numeros, sizeof(int),5, arquivo);

fclose(arquivo);
printf("Dados lidos do arquivo:\n");
int i;
for (i = 0; i < 5; i++)
{
    printf("%d", numeros[i]);
}
printf("\n");

return(0);
}


