#include <stdio.h>
#include <math.h>

int main (void)
{
    int anosin = 1986, anoatual, diferencaanos;

    printf("Digite o ano em que está:\n");
    scanf("%i", &anoatual);

    diferencaanos = anoatual - anosin;

    // Se o ano atual é um ano de passagem do cometa, considere que ocometa ja passou nesse ano,
	if (diferencaanos == 0){
	printf("A próxima vez que o cometa aparecerá sera em %i", anosin + 76);
    }
	
	else if (diferencaanos < 0){

        if (abs(diferencaanos) < 76){
		    printf("A próxima vez que o cometa aparecerá sera em %i", anosin);
        }
        
        else{
            do{
                anosin -= 76;
                diferencaanos = anoatual - anosin;
        
            }while (abs(diferencaanos) > 76);
        }
    
        if( abs(diferencaanos) < 76)
        {
		    printf("A próxima vez que o cometa aparecerá sera em %i", anosin);
        }
    }

    else if (diferencaanos > 0){
        
        if (diferencaanos < 76){
		    printf("A próxima vez que o cometa aparecerá sera em %i", anosin + 76);
        }
        
        //caso a diferença seja maior que 76
        else{
            do
            {
                anosin += 76;
                diferencaanos = anoatual - anosin;
            } while (diferencaanos > 76);
            
            if (diferencaanos < 76){
		        printf("A próxima vez que o cometa aparecerá sera em %i", anosin + 76);
            }
        }

    
    }
}