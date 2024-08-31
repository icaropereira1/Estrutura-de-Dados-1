#include <stdio.h>

int main(){
    
    int n1, n2, n3 = 20;
    float media;
    
    printf ("Insira o valor dos dois números:\n");
    scanf ("%i %i", &n1, &n2);

    media = (float)(n1+n2+n3)/3;

    printf ("O valor da média de 20, %i, %i vale: %.1f ", n1, n2, media);
}