#include <stdio.h>

int main(void) {


//escreva um codigo que use o comando continue em um programa de divisao que respeite a restrição de divisão por zero


float numerador, denominador, resultado_divisao;
int flag = 0, resposta_continuar;

while (flag ==0)
{
    printf("Insira o numerador da fração: ");
    scanf("\n%f", &numerador);
    printf("Insira o denominador da fração: ");
    scanf("\n%f", &denominador);

    if(denominador == 0)

    {

        printf("Não é possível dividir por zero!\n");
        continue;

    }
else
{

    resultado_divisao = numerador / denominador;
    printf("O resultado da divisao é: %.2f\n", resultado_divisao);
}
printf("Deseja fazer un novo cálculo?  (1- Sim) - (2- Não)");
scanf("\n%d", &resultado_divisao);

}




}
