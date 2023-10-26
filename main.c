#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int sorteio();
    int numeroDaPalavra = sorteio();
  
    return 0;
}


int sorteio(){
    srand(time(NULL));
    int n = rand()%5;

    // n == número escolhido para selecionar a palavra.
    return n;
}
