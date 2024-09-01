//Elabore um programa que faça leitura de vários números inteiros, até que se digite um número negativo. O programa tem que retornar o maior e o menor número lido

#include <stdio.h>

int main(){
    int maior, menor, numero;
    
    printf("\nDigite um número inteiro, se ele for negativo será mostrado o maior e menor número digitado: \n");
    scanf ("%i", &numero);

    if(numero < 0){
        printf("Não foi digitado nenhum número positivo.\n");
        return 0;
    }
    
    maior = numero;
    menor = numero;
    
    

    do{
        printf("Digite um número: \n");
        scanf ("%i", &numero);

        if(numero > maior){
            maior = numero;
        }
        else if(menor > numero){
            menor = numero;
        }

    }while(numero>=0);

    printf("O menor e maior valor lido são, respectivamente, %i e %i.", menor, maior);
}