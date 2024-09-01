//Elabore um programa que faça leitura de vários números inteiros, até que se digite um número negativo. O programa deve mostrar todos os números digitados (sem o negativo)

#include <stdio.h>

int main(){
    int i = 0, number, numbers[1000];

   do{
        printf("Digite um número inteiro (caso o número seja negativo, iremos mostrar todos os números digitados)\n");
        scanf("%i", &number);
        
        if(number >= 0){
            numbers[i] = number;
            i++;
        }
    
    }while(number >= 0);
    
    printf("Os números digitados foram:\n");
    for(int n = 0; n < i; n++){
        printf("%i\n",numbers[n]);
    }
}