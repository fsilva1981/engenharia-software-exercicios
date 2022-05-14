#include <stdio.h>

int main()
{

    int numeros[5];

    for(int i = 0; i < 5; i++)

    {

        printf("Digite o numero: \t");
        scanf("\n%d", &numeros[i]);
    }

    for (int i = 4; i >= 0; i--)

    {

        printf("Os numeros na ordem inversa sao:  %d\n", numeros[i]);
    }
}