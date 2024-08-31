//Fazer um programa que ao entrar com sua idade diga se você é maior de idade ou não

#include <stdio.h>

int main(){
    int idade;

    printf("Digite o valor da sua idade:\n");
    scanf("%i", &idade);
    
    if(idade < 0){
        printf("Você digitou uma idade inválida. Insira uma idade positiva:\n");
    }
    
    else if (idade >= 18){
        printf("Você é maior de idade\n");
    }
    
    else{
        printf("Você é menor de idade\n");
    }
}