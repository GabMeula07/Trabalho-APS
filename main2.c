#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int sorteio();

    int n = sorteio();
    int strcmp(const char *str1, const char *str2);

    // consertei o switch, e agr ele tá colocando a palavra de forma correta no vetor;

    int t;
    int acertos = 0;
    int i = 0;
    bool acertou = false;
    int chances = 6;
    char letra[3];
    char *palavraSecreta[t];
    char *palavra[30];

    switch (n)
    {
    case 0:
        t = 9;
        palavraSecreta[t] = "Cachorro";
        break;
    case 1:
        t = 8;
        palavraSecreta[t] = "Pikomon";
        break;
    case 2:
        t = 9;
        palavraSecreta[t] = "Uatizapi";
        break;
    case 3:
        t = 6;
        palavraSecreta[t] = "Terra";
        break;
    case 4:
        t = 8;
        palavraSecreta[t] = "Chipset";
        break;

    default:
        printf("ERRO: Problema na função de sorteio\n");
    }

    // preenche o array inteiro com tracinhos
    for (i = 0; i < 30; i++)
    {
        palavra[i] = '_';
    }

    system("clear");
    printf("Bem vindo ao jogo da Forca! \n \n ");

    // se o cara acertar mais do que a o tamanho da palavra significa que ele completou
    // se a chances dele acabar o jogo também acaba
    while (chances > 0 && acertos < t)

    {

        printf("Palavra: ");
        for (i = 0; i < t; i++)
        {
            printf(" %c ", palavra[i]);
        }

        printf("Chances: %d", chances);
        printf("\n \n Digite uma letra: ");
        scanf("%c", &letra[0]);

        for (i = 0; i < t; i++)
        {

            int ret = strcmp(palavra, letra);

            printf("\n %d \n", ret);
            if (ret == 0)
            {
                acertou = true;
                if (acertou)
                {
                    palavra[i] = letra[0];
                }
                else
                {
                    chances--;
                }
            }
        }
    }

    return 0;
}

int sorteio()
{
    srand(time(NULL));
    int n = rand() % 5;

    // n == número escolhido para selecionar a palavra.
    return n;
}
