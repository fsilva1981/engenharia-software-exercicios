#include <stdio.h>

int main(void)

// Criar um algoritimo que compare dois numeros informando qual é o maior, este número deve ser dado pelo usuario

{

    // Declarado a variavel para receber os numeros dados pelo usuario

    float valor1, valor2;

    printf("**************************************\n\n");
    printf("Digite o primeiro numero: \n");
    scanf("%f", &valor1);
    printf("**************************************\n\n");

    printf("Digite o segundo numero: \n");
    scanf("%f", &valor2);
    printf("**************************************\n\n");

    // Dado os numeros é feito a comparação e de acordo com a avaliaçao por if`s serão plotados o resultado

    if (valor1 > valor2)

    // resultado se o primeiro numero for maior

    {

        printf("**************************************\n");
        printf("%f é maior que %f\n", valor1, valor2);
        printf("**************************************\n");
    }

    // resultado se o primeiro numero for menor

    else

    {
        printf("**************************************\n");
        printf("%f é menor que %f\n", valor1, valor2);
        printf("**************************************\n\n\n");
    }
}
