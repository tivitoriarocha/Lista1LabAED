// Questão 06) Assumindo que queremos ler o valor de x, e o endereço de x foi atribuído a px, 
// a instrução seguinte é correta? Por que?
// scanf ( “%d”, *px );

// Está incorreto, pois a função scanf ao ser acionada vai esperar o endereço de memória da 
// variável que o usuário pretende informar. Mas, ao pedir para ler *px o código não devolve 
// isso e sim o próprio conteúdo da variável que está vazia. O correto seria - scanf("%d", px); -,
//  já que assim a função realmente acessaria o espaço de memória correto para armazenar o valor da variável x.
// Ou seja, px = endereço de memória de x.
// *px = x.