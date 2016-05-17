#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main(){
   	float raio, area;
    int loop;
    
    do{
	    printf("----Programa para calcular a area do circulo----\n");
	    printf("Digite o raio do circulo:\n");
	    scanf("%f", &raio);
	    area = raio*raio*3.14;
	    printf("A area do circulo eh %f", area);
	    printf("\n---------------------");
	    printf("\nPara repetir digite: 1 \nPara sair digite: 0\n" );
	    scanf("%d", &loop);
	    system("cls");
    }while( loop !=0);
	return(1);
}
