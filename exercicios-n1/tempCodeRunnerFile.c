#include <stdio.h>

int main(void)

{

    float total_copias;
    float valor_copia;
    float valor_a_pagar;

    printf("informe a quantidade de copias que deseja:  ");
    scanf("%f\n", &total_copias);

    if (total_copias <= 100)
    {
        valor_copia = 0.25;
    }

    else if (total_copias > 100)

    {
        valor_copia = 0.20;
    }
    else
    {
        valor_copia = 0.20;
    }

    valor_a_pagar = total_copias * valor_copia;

    printf("A quantidade de copia desejada é de: %f\n", total_copias);
    printf("O valor da copia é de: %f\n", valor_copia);
    printf("O valor a pagar é de: %f\n", valor_a_pagar);
}