#include <stdio.h>
int main(void)
{
    int numero;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            printf("%d\n", i);
        }
    }


}