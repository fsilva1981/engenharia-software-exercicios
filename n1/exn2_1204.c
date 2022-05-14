#include <stdio.h>
#include <string.h>
#define MAX_SIZE 50

int main(void)
{

    // resolucao do exercicio livro pagina --- questão numero 05

    int registro_academico;
    char nome[MAX_SIZE];
    float notas[3];

    
    // fgets (nome, MAX_SIZE, stdin); // aqui sempre precisa destes tres parametros...

    printf("Insira o registro academico do aluno: \n");
    scanf("\n%d", &registro_academico);
    setbuf(stdin, NULL);
    printf("Insira o nome do Aluno: \n");
    fgets(nome, MAX_SIZE, stdin); // fgets (nome, MAX_SIZE, stdin); // aqui sempre precisa destes tres parametros...
    setbuf(stdin, NULL);

    for (int i = 0; i < 3; i++)
    {
        printf("Insira a nota: \n");
        scanf("\n%f", &notas[i]);
        setbuf(stdin, NULL);
    }

    printf("O Registro academico é:  %d\n", registro_academico);
    printf("Nome:  %s\n", nome);

    for (int i = 0; i < 3; i++)
    {

        printf("Nota %d: %.2f\n", i+1, notas[i]);
    }
}
