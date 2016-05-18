#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main(){
   	float base, altura, area;
    int loop;
    
    do{
	    printf("----Programa para calcular a area do retangulo----\n");
	    printf("Digite a base e altura do retangulo:\n");
	    scanf("%f", &base);
	    scanf("%f", &altura);
	    area = altura*base;
	    printf("A area do retangulo eh %f", area);
	    printf("\n---------------------");
	    printf("\nPara repetir digite: 1 \nPara sair digite: 0\n" );
	    scanf("%d", &loop);
	    system("cls");
    }while( loop !=0);
	return(1);
}
