#include <stdio.h>

// Protótipo
int calcula_diferenca(int a, int b);

// Principal
int main(void)
{
    int numero1, numero2, diferenca;

    printf("Insira o numero 1:");
    scanf("\n%d", &numero1);
    printf("Insira o numero 2:");
    scanf("\n%d", &numero2);

    diferenca = calcula_diferenca(numero1, numero2);

    printf("A diferença é: %d\n", diferenca);
}

// Implementação da função
int calcula_diferenca(int a, int b)
{
    int diferenca = a - b;

    return diferenca;
}

#include <stdio.h>

// Protótipo
int menu_principal();
float saque(float valor, float saldo);
float deposito(float valor, float saldo);
void exibir_saldo(float saldo);

// Principal
int main()
{
    int opcao, flag = 1;
    float saldo = 0, valor = 0;

    while (flag == 1)
    {
        opcao = menu_principal();

        switch (opcao)
        {
        case 0:
            printf("Sistema encerrado!\n");
            flag = 0;
            break;

        case 1:
            printf("Insira o valor do saque:");
            scanf("\n%f", &valor);
            if (saldo < valor)
            {
                printf("Saldo insuficiente!\n");
            }
            else
            {
                saldo = saque(valor, saldo);
                printf("Saque concluído!\n");
            }
            break;

        case 2:
            printf("Insira o valor do depósito:");
            scanf("\n%f", &valor);
            saldo = deposito(valor, saldo);
            printf("Depósito concluído!\n");
            break;

        case 3:
            exibir_saldo(saldo);
            break;

        default:
            break;
            // exibir saldo
        }
    }
}

// Implementação da função
int menu_principal()
{
    int opcao;

    printf("1 - Saque\n");
    printf("2 - Depósito\n");
    printf("3 - Exibir o saldo\n");
    printf("0 - Sair\n");
    scanf("\n%d", &opcao);

    return opcao;
}

float saque(float valor, float saldo)
{
    float novo_saldo;

    novo_saldo = saldo - valor;

    return novo_saldo;
}

float deposito(float valor, float saldo)
{
    float novo_saldo;

    novo_saldo = saldo + valor;

    return novo_saldo;
}

void exibir_saldo(float saldo)
{
    printf("O saldo disponível é: %.2f\n", saldo);
}
#include <stdio.h>

// Protótipo
float divisao(float a, float b);

// Principal
int main()
{
    float numero1, numero2, resultado_divisao;

    printf("Insira o numero 1:");
    scanf("\n%f", &numero1);
    printf("Insira o numero 2:");
    scanf("\n%f", &numero2);

    if (numero2 == 0)
    {
        printf("Não é possível dividir por zero!\n");
    }
    else
    {
        resultado_divisao = divisao(numero1, numero2);
        printf("O resultado é: %.2f\n", resultado_divisao);
    }
}

// Implementação da função
float divisao(float a, float b)
{
    float resultado_divisao = 0;

    resultado_divisao = a / b;

    return resultado_divisao;
}
