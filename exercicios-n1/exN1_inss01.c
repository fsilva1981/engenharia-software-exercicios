#include <stdio.h>

// Escrever um algoritmo em linguagem C que calcule o desconto no salário referente ao imposto de renda e inss

int main(void)

{

    // Declaração de variáveis

    float salario_bruto, salario_liquido, inss, irrf;

    // Entrada de dados imputadas pelo usuário do salário bruto.

    printf("digite o valor do seu salario bruto: ");
    scanf("%f", &salario_bruto);

    // Condicionantes dos valores do salario bruto recebido pelo usuário e de acordo com a tabela de INSS e IRRF do ano de 2022

    if (salario_bruto <= 1212)
    {
        inss = salario_bruto * 0.075;
    }

    else if (salario_bruto > 1212 && salario_bruto <= 2427.35)
    {
        inss = salario_bruto * 0.09 - (18.18);
    }
    else if (salario_bruto > 2427.35 && salario_bruto <= 3641.03)
    {
        inss = salario_bruto * 0.12 - (91);
    }

    else if (salario_bruto > 3641.03 && salario_bruto <= 7087.22)
    {

        inss = salario_bruto * 0.14 - (163.82);
    }

    else
    {
        inss = 992.21 - 163.82;
    }

    if (salario_bruto <= 1903.98)
    {
        irrf = 0;
    }

    else if (salario_bruto > 1903.98 && salario_bruto <= 2826.65)
    {
        irrf = salario_bruto * 0.075 - (142.80);
    }

    else if (salario_bruto > 2826.65 && salario_bruto <= 3751.05)
    {
        irrf = salario_bruto * 0.15 - (354.80);
    }

    else if (salario_bruto > 3751.05 && salario_bruto <= 4664.68)
    {
        irrf = salario_bruto * 0.225 - (636.13);
    }
    else if (salario_bruto > 4664.68)

    {
        irrf = salario_bruto * 0.275 - (869.36);
    }
    else
    {

        irrf = salario_bruto * 0.275 - (869.36);
    }

    // Cálculo dos descontos sobre o salário bruto, tando do INSS quanto do IRRF - Imposto de Renda retido na fonte

    salario_liquido = salario_bruto - inss - irrf;

    printf("####################################################\n");
    printf("-------------------------------------------------\n");
    printf("O valor do desconto do inss e de: R$ %.2f\n", inss);
    printf("O valor do desconto do irrf e de: R$ %.2f\n", irrf);
    printf("O valor do salario liquido e de: R$ %.2f\n", salario_liquido);
    printf("---------------------------------------------------\n");
    printf("##################################################\n");
}
