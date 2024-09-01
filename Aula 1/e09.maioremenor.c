//Elabore um programa que faça leitura de vários números inteiros, até que se digite um número negativo. O programa deve mostrar todos os números digitados (sem o negativo)

#include <stdio.h>

int main(){
    int number, numbers[200], i = 0;
        do{
        printf("Digite um número:\n");
        scanf("%i", &number);
        
        }while(number < 0);

        
}
