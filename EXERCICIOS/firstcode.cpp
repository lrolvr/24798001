#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;
    char opcao;

    refaz:
    printf("Digite sua nota:\n");
    scanf("%f",&nota1);

    printf("Digite sua nota:\n");
    scanf("%f",&nota2);

    printf("Digite sua nota:\n");
    scanf("%f",&nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("Sua media final eh: %f\n\n", media);

    printf("Deseja calcular novamente? (s/n): ");
    scanf("%s", &opcao);

    if(opcao =='s'){
        goto refaz;
    }

    printf("\n");
    return 0;
}
