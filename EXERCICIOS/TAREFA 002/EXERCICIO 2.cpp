/* Exercicio 2: Imagine que você está desenvolvendo um aplicativo de gestão financeira pessoal. 
O objetivo do aplicativo é ajudar os usuários a registrar suas receitas e despesas diárias e calcular a soma 
dos valores para obter um saldo atualizado. Um dos recursos do aplicativo é permitir que o usuário insira dois valores 
(uma receita e uma despesa) e exiba a soma desses valores para atualizar o saldo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float receita, despesa, soma;
    
    printf("Digite sua receita diária:\n");
    scanf("%f",&receita);

    printf("Digite sua despesa diária:\n");
    scanf("%f",&despesa);
    
    soma = receita - despesa;

    printf("Saldo atualizado: %.2f\n", soma);

    printf("\n");
    return 0;
}
