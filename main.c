#include <stdio.h>
#include <stdlib.h>

/*Informe um número e efetue sua tabuada. Deve-se testar se o número
informado é maior que 0 ou menor ou igual a 100 para se efetuar a
tabuada.*/
/*desenvolvedor: fischerxp*/

int main()
{
    int numero;
    printf("informe um numero para tabuada: \n");
    scanf("%d",& numero);
    if (numero>0&&numero<=100)
    {
        for(int x = 1; x<=10; ++x){
        printf("%dx%d = %d\n", x, numero, x * numero);
        }
    }
    else
        printf("numero invalido");
}
