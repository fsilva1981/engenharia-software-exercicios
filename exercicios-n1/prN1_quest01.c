#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale (LC_ALL, "Portuguese");

//Questão 01 de atividade algoritimos


//-----Declaração das variáveis


    float n1 = 0, n2 = 0, n3 = 0, media = 0, soma_medias_da_turma = 0, media_da_turma = 0, maior_nota, menor_nota;
    float percentual_reprovados_frequencia = 0;
    int matricula, frequencia, alunos_aprovados = 0, alunos_reprovados = 0, reprovados_frequencia = 0;
    int total_alunos = 5;

    // ---Dados coletados do Aluno

    printf(" ================= DADOS DO ALUNO==========================\n\n");

    for(int i = 1; i < total_alunos; i++)
    {
        printf("Informe o número de matrícula:\t");
        scanf("\n%d", &matricula);
        printf("Informe a sua nota de n1:\t");
        scanf("\n%f", &n1);
        printf("Informe a sua nota de n2:\t");
        scanf("\n%f", &n2);
        printf("Informe a sua nota de n3:\t");
        scanf("\n%f", &n3);
        printf("Insira a frequencia:\t\t");
        scanf("\n%d", &frequencia);

        printf(" =========================================================\n\n");

        media = (n1 + n2 + n3)/ 3;
        soma_medias_da_turma += media;

        if(frequencia < 40)
        {
            reprovados_frequencia += 1;
        }

        if(i == 0)
        {
            maior_nota = media;
            menor_nota = media;
        }
        else
        {
            if(media < menor_nota)
            {
                menor_nota = media;
            }

            if(media > maior_nota)
            {
                maior_nota = media;
            }
        }

        if(media >= 60 && frequencia >= 40)
        {
            alunos_aprovados += 1;
            printf("Você foi aprovado, parabéns!\n");
        }
        else
        {
            alunos_reprovados += 1;
            printf("Você foi reprovado, capriche mais um pouco! \n");
        }

        printf("A sua média final foi de: %.2f\n", media);

        printf("\n");

    }

    media_da_turma = soma_medias_da_turma / total_alunos;
    percentual_reprovados_frequencia = (reprovados_frequencia/total_alunos)*100;


    printf(" ================DADOS DA TURMA============================\n\n");

    printf("O total de alunos reprovados é: %d\n", alunos_reprovados);
    printf("O percentual de alunos reprovados por frequencia é: %.2f%%\n", percentual_reprovados_frequencia);
    printf("A média da turma é: %.2f\n", media_da_turma);
    printf("A maior nota foi: %.2f\n", maior_nota);
    printf("A menor nota foi: %.2f\n", menor_nota);

    printf(" ==========================================================\n");
}







