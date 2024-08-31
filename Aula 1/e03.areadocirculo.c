//  Leia o valor do raio de um círculo e calcule e imprima a área dele. A área do círculo é PI*R^2, considere  PI=3.141592

#include <stdio.h>

int main(){
    float area, pi = 3.141592, raio;

    printf("Digite o valor do raio:");
    scanf("%f", &raio);

    area = (raio*raio)*pi;

    printf("O valor da área desse círculo vale: %f", area);
}