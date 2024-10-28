/*
 * fact_recurs.c -- computacao de factoriais de forma recursiva 
 */

#include <stdio.h>	/* importa definicao de printf() */
#include "fact.h"

/*
 * fact_recursivo: calcula, de forma recursiva, o factorial de um 
 * numero passado como argumento e retorna o resultado
 *
 *  a computacao recursiva faz-se do seguinte modo:
 *  
 *  se n = 0, factorial(n) = 1; 
 *  caso contrario, factorial(n) = n * factorial(n -1)
 *
 */

int calcula_fact(int valor)
{
	/* escreva aqui o codigo do corpo da funcao; */
  return 0;
}

void * fact_recursivo (void * n)
{
    int valor = *((int *) n);
		int factorial;

    factorial = calcula_fact(valor);

    printf("factorial(%.2i)=%i\n",valor, factorial);
    return NULL;
}



