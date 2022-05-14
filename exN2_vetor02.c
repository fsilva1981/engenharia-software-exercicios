#include <stdio.h>

int main(void)
{

    float notas[3], nota = 0, soma = 0, media = 0;

    for (int i = 0; i < 3; i++)

    {

        printf("Digite a nota:  ");
        scanf("\n%f", &nota);
        notas[i] = nota;
        soma += nota;
    }

    for (int i = 0; i < 3; i++)

    {
        printf("As notas são: \t%.2f\n", notas[i]);
    }

    media = soma / 3;

    printf("A media das notas é: %.2f\n", media);
}