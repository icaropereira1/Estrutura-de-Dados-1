#include <stdio.h>

int main(){
    float area, pi = 3.141592, raio;

    printf("Digite o valor do raio:");
    scanf("%f", &raio);

    area = (raio*raio)*pi;

    printf("O valor da área desse círculo vale: %f", area);
}