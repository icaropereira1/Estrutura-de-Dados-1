//Escreva um programa que dadas duas coordenadas (x1, y1) e (x2, y2) de pontos em R², calcule sua distância

#include <stdio.h>
#include <math.h>

int main(){
    float x1, y1, x2, y2, distancia;

    printf("Digite a coordenadas x e y do ponto 1, respectivamente:\n");
    scanf("%f %f", &x1, &y1);

    printf("Digite a coordenadas x e y do ponto 2, respectivamente:\n");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow(x1-x2,2) + pow(y1-y2,2));

    printf("A distância entre o ponto 1 e 2 vale: %f\n", distancia);
}