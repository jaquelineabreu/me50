#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get_string é uma função específica da biblioteca do CS50!
    string nome = get_string("Qual é o seu nome? \n");
    printf("Olá, %s \n", nome);

}