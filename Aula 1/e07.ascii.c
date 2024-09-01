//Fazer um programa que mostre o código ASCII correspondente aos caracteres gamer WASD

#include <stdio.h>

int main() {
    char caracteres[4] = {'W', 'A', 'S', 'D'};

    for(int i = 0; i < 4; i++) {
        printf("O código ASCII para '%c' é %d\n", caracteres[i], caracteres[i]);
    }
}
