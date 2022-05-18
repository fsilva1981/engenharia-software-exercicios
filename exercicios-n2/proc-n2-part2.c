#include <stdio.h>
#include <stdlib.h>

// prototipo

int menu_principal();

int main()
{

    int flag = 0, opcao;

    while (flag == 0)
    {
        opcao = menu_principal();
        if (opcao == 0)

        {

            printf("Calculadora 2D\n");
        }
        else if (opcao == 1)

        {
            printf("Calculadora 3D\n");
        }
        else

        {
            printf("Sistema Encerrado\n");
            flag = 1;
        }
    }

    return 0;
}

// implementação
int menu_principal()
{

    int opcao;

    
    printf("Digite 0 para figuras 2D e 1 para figuras 3D\n");
    printf("0 - figuras 2D\n");
    printf("1 - figuras 3D\n");
    printf("2 - Sair do Sistema\n");
    scanf(" \n%d", &opcao);

    return opcao;
}
