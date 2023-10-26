#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int sorteio();
    int n = sorteio();
    char str[20];
    char letra[20];


    switch(n)
    {
        case 0:
         str[] = "Chachorro";
        break;

        case 1:
         str[] = "Chipset";
        break;

        case 2:
         str[] = "Terra";
        break;

        case 3:
         str[] = "Uatizapi";
        break;

        case 4:
         str[] = "Pikomon";
        break;
    }

    printf("%s", str);


    printf("Informe uma letra: ");
    fgets(str, 20, stdin);

    for(int i = 0; i<4; i++)
    {
        letra[i]=toupper(letra[i]);
    }
    strcmp(str, stdout);

    return 0;
}


int sorteio(){
    srand(time(NULL));
    int n = rand()%5;

    // n == número escolhido para selecionar a palavra.
    return n;
}
