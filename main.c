#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    // Exibir os caracteres no terminal em Português.
    setlocale(LC_ALL, "Portuguese");
    int vetor[5];
    int maior;
    int menor;
    float media;
    float soma = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero para a posição %d do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        else if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
        soma = soma + vetor[i];
    }

    media = soma / 5;

    printf("O maior valor armazenado é: %d", maior);
    printf("\nO menor valor armazenado é: %d", menor);
    printf("\nA media é: %0.2f", media);
    return 0;
}
