#include <stdio.h>

int main(void)
{

    // Vetores

    int vetor[5];

    for (int i = 0; i < 5; i++)

    {

        vetor[i] = 2 * i;
    }

    for (int i = 0; i < 5; i++)

    {
        printf("Valores no vetor será: %d\n", vetor[i]);
    }
}