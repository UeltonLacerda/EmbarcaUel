/* 
   Cálculo do fatorial de um número.
*/

#include <stdio.h>

int calc_fat(int);

int main()
{
    printf("\n Este programa calcula o fatorial.");//Modificado para nova versão
    int numero = 13;  //Modifiquei para para 13
    int num_fat = calc_fat(numero);
    printf("\nO fatorial de %d eh: %d", numero , num_fat);
    return 0;
}

/* Definição da funcao fatorial */
int calc_fat(int b)
{
    int fatorial = 1;
    for (int contador = b; contador >= 1; contador--)
    {
        fatorial *= contador;
        printf(" %d",fatorial);
    }
    return fatorial;
}

