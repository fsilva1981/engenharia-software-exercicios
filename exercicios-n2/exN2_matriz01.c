#include <stdio.h>

int main(void)
{

    int assentos_a[20][3];
    int assentos_b[20][3];
    int linha, coluna;
    char lado;

    for (int i = 0; i < 3; i++)

    {

        printf("Selecione a posição do assento -  (linha, coluna)\n");
        printf("Selecione o lado (a / b): ");
        scanf("\n%c", &lado);
        printf("Insira a linha: ");
        scanf("\n%d", &linha);
        printf("Insira a coluna: ");
        scanf("\n%d", &coluna);
    }

    if (lado == 'a')

    {
        assentos_a[linha][coluna] = 1;
    }
    else
    {
        assentos_b[linha][coluna] = 1;
    }
    if (lado == 'a')

    {

        printf("Assento escolhido %d\n", assentos_a[linha][coluna]);
    }
    else
    {
        printf("Assento escolhido %d\n", assentos_b[linha][coluna]);
    }
}