//Faça um programa que escreva na tela de 0 até 9, utilizando as 3 estruturas aprendidas nesta aula

#include <stdio.h>

int main(){
    
    printf("Começando contagem de 0 até 9 usando a estrutura de repetição 'for'\n");
    
    for(int i = 0; i <= 9; i++){
        printf ("%i ", i);
    }
    
    printf("\nComeçando contagem de 0 até 9 usando a estrutura de repetição 'while'\n");
    
    int i = 0;
    while(i <= 9){
        printf("%i ", i);
        i++;
    }

    printf("\nComeçando contagem de 0 até 9 usando a estrutura de repetição 'do,while'\n");
    
    int n = 0;
    do{
        printf("%i ", n);
        n++; 
    } while (n <= 9);
} 