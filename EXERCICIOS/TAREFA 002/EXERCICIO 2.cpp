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
