/* Exercicio 1: Você está desenvolvendo um sistema simples de recepção para uma empresa.
O sistema é utilizado para registrar o número de visitantes que entram na empresa a cada dia. 
O objetivo é registrar o número de visitantes e, em seguida, exibir uma mensagem de confirmação para o recepcionista. */

#include <stdio.h>

int main() {
    
    int num_vis;
    
    printf("Insira o número de visitantes que entraram na empresa hoje: ");
    scanf("%d", &num_vis);

    printf("\nConfirmação de %d visitantes no dia de hoje.\n", num_vis);
    return 0; 
}

  
