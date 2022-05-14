#include <stdio.h>


int main(void)


{
    float salario_fixo = 0, comissao = 0, inss = 0, comissao_4k = 0, comissao_fullhd = 0;
    float salario_total = 0, imposto_de_renda = 0, salario_bruto = 0, salario_liquido = 0;
    int qtd_4k, qtd_fullhd, inscricao;

    for(int i = 0; i < 20; i++)
    {
        printf("Insira o valor do salário fixo:");
        scanf("\n%f", &salario_fixo);
        printf("Insira o número de inscrição:");
        scanf("\n%d", &inscricao);
        printf("Insira a quantidade de tvs 4k vendidas:");
        scanf("\n%d", &qtd_4k);
        printf("Insira a quantidade de tvs FullHD vendidas:");
        scanf("\n%d", &qtd_fullhd);

        //Cálculo da comissão de venda das tvs 4K
        if(qtd_4k >= 10)
        {
            comissao_4k = 50*qtd_4k;
        }
        else
        {
            comissao_4k = 5*qtd_4k;
        }

        //Cálculo da comissão de venda das tvs FullHD
        if(qtd_fullhd >= 20)
        {
            comissao_fullhd = 20*qtd_fullhd;
        }
        else
        {
            comissao_fullhd = 2*qtd_fullhd;
        }

        inss = salario_fixo*0.08;

        comissao = comissao_4k + comissao_fullhd;
        
        salario_total = salario_fixo + comissao - inss;

        if(salario_total >= 500)
        {
            imposto_de_renda = salario_total*0.15;
        }

        salario_bruto = salario_fixo + comissao;

        salario_liquido = salario_total - imposto_de_renda;

        printf("O número de inscrição é: %d\n", inscricao);
        printf("O salário bruto é: %.2f\n", salario_bruto);
        printf("O salário líquido é: %.2f\n", salario_liquido);
        printf("#####################################\n\n");
    }
}