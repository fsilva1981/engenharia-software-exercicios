#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Professor não conseguir concluir o código... vou postar o que conseguir até agora e irei continuar na conclusão.....

// prototipo

int menu_principal();
int menu_2D();
int menu_3D();

float quadrilatero(float lado_A, float lado_B);

int main()

{
    setlocale(LC_ALL, "Portuguese");

    int flag = 0, opcao, opcao_2D, opcao_3D;

    float lado_A, lado_B, area;

    while (flag == 0)
    {
        opcao = menu_principal();
        switch (opcao)

        {
        case 0:

            opcao_2D = menu_2D();

            if (opcao_2D == 1)
            {
                printf("Digite o primeiro lado: ");
                scanf("\n%f", &lado_A);
                printf("Digite o segundo lado:");
                scanf("\n%f", &lado_B);

                area = quadrilatero(lado_A, lado_B);
                printf("A área é: %.2f\n", area);
            }
            else if (opcao_2D == 0)
            {
                continue;
            }
            break;

        case 1:
            printf("Calculadora 3D\n");
            break;

        default:
            printf("Sistema encerrado!\n");
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

int menu_2D()
{

    int opcao;

    printf("Calculadora de área de figuras 2D\n");
    printf("1 - Quadrado/Retângulo\n");
    printf("2 - Circunferência\n");
    printf("3 - Triângulo\n");
    printf("4 - Losango");
    printf("5 - Paralelogramo");
    printf("0 - Sair do Sistema\n");
    scanf(" \n%d", &opcao);

    return opcao;
}

float quadrilatero(float lado_A, float lado_B)
{
    return lado_A * lado_B;
}

int menu_3D()
{

    int opcao;

    printf("Calculadora de área de figuras 3D\n");
    printf("1 - Esfera\n");
    printf("2 - Cilindro\n");
    printf("3 - Pirâmide\n");
    printf("4 - Cone\n");
    printf("5 - Cubo/Paralepípedo\n");
    printf("0 - Sair do Sistema\n");
    scanf(" \n%d", &opcao);

    return opcao;
}
