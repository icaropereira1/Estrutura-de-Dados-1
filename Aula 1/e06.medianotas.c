//  Fazer um programa que calcule a média de 3 notas. Caso a média seja igual ou superior a 6, o aluno estará aprovado, caso contrário, estará reprovado.

#include <stdio.h>

int main(){
    float n1, n2, n3, media;

    printf ("Digite o valor das três notas:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1+n2+n3)/3;

    if(media>=6){
        printf("O aluno foi aprovado com média igual a: %.1f", media);
    }
    
    else {
        printf("O aluno foi reprovado com média igual a: %.1f", media);
    }

}