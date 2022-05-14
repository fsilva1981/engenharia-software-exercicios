#include <stdio.h>

int main(void)
{

    // Declaração das variaveis
    int idade;

    // Entrada dos dados enviadas pelo usuario

    printf("----------------------------------------------------------------------\n");
    printf("informe sua idade para definirmos a categoria da equipe que irá jogar: \n");
    scanf("%d", &idade);
    printf("----------------------------------------------------------------------\n");

    // Processamento de dados para definição da categoria do jogador de acordo com sua idade

    if (idade <= 13)
    {
        printf("A sua categoria será a: Juvenil \n");
    }

    else if (idade > 13 && idade <= 17)
    {
        printf("A sua categoria será a: junior \n");
    }

    else if (idade > 17)
    {
        printf("A sua categoria será a: Senior \n");
    }

    else
    {

        printf("A sua categoria será a: Senior \n");
    }

    printf("-----------------------------------------------------------------------\n");
}