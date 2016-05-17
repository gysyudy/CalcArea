#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main(){
   	float base, altura, area;
    int loop; 
    do{
	    printf("----Programa para calcular a area do triangulo----\n");
	    printf("Digite a base e altura do triangulo:\n");
	    scanf("%f", &base);
	    scanf("%f", &altura);
	    area = base*altura/2;
	    printf("A area do triangulo eh %f", area);
	    printf("\n---------------------");
	    printf("\nPara repetir digite: 1 \nPara sair digite: 0\n" );
	    scanf("%d", &loop);
	    system("cls");
    }while( loop !=0);
	return(1);
}
