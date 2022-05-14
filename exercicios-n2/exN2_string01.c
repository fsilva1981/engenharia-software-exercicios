#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 50


// completar este codigo esta faltando... buscar na blioteca da aula
int main()

{

    char palavra[MAX_SIZE];
    int fim;
    int cont;

    printf("Digite uma string: ");
    fgets(palavra, MAX_SIZE, stdin);

    while (fim != 1)
    {
        if (palavra[cont] == '\n')

        {

            fim = 1;
        }

        else

        {

            cont += 1;
        }

        printf("Tamanho: %d\n", cont);

        for (int i = 0; i < cont; i++)

        {

            palavra[i] = toupper(palavra[i]);
        }
    }

    printf(" A palavra digitada foi: %c\n", toupper(palavra[0]));
}