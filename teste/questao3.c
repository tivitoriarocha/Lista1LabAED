// Questão 03) Qual é a maneira correta de referenciar ch, assumindo que o endereço dech foi atribuído ao ponteiro indica?
// Levando em consideração que o momento de referenciamento acontece quando pegamos o endereço de uma 
// variável e armazenamos em um ponteiro. Podemos visualizar na linha 10 do código abaixo, 
// quando se declara o ponteiro indica (*indica) do tipo char e em seguida lhe é referenciado - a partir do & - à variável ch.
// OBS: usei o “(void*)” para que o compilador não de erro na conversão do tipo no printf!

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Portuguese");

char ch = 'G';  
char *indica = &ch;  

printf("%c\n", ch);       
printf("Endereço de ch: %p\n", (void*)&ch);

return(0);
}


