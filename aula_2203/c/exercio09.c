#include <stdio.h>
#include <locale.h>

int main() {



int idade;
float peso;
char nome;
float total;


printf("escreva a sua idade: ");
scanf("%d", &idade);

printf("digite o seu peso: ");
scanf("%f", &peso);

total = peso * idade;    

printf("o seu peso total é:  %f  , +total");

}