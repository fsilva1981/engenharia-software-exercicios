#include <stdio.h>
#define MAX_SIZE 50

int main(void)

{

    char palavra[MAX_SIZE];

    print("Digite uma string: ");
    fgets(palavra, MAX_SIZE, stdin);

    printf(" A palavra digitada foi: %s", palavra);
}