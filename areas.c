//Guilherme Yudy 102527
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <math.h>

char escolha = -1;
int quadrado(){
    float lado, area;
    int loop;
    
    do{
	    printf("----Programa para calcular a area do quadrado----\n");
	    printf("Digite o lado do quadrado:\n");
	    scanf("%f", &lado);
	    area = lado*lado;
	    printf("A area do quadrado eh %f", area);
	    printf("\n---------------------");
	    printf("\nPara repetir digite: 1 \nPara sair digite: 0\n" );
	    scanf("%d", &loop);
	    system("cls");
    }while( loop !=0);
	return(1);
}

int circulo(){
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
int triangulo(){
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
int retangulo(){
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

int direciona(int op){
	switch (op){
		case 1:
			quadrado();
			break;
		case 2:
			circulo();
			break;
		case 3:
			triangulo();
			break;
		case 4:
			retangulo();
			break;
	}
	
}

int main(){
	do{
		printf("1. Quadrado;\n");
		printf("2. Circulo;\n");
		printf("3. Triangulo;\n");
		printf("4. Retangulo;\n");
		printf("\nPara sair digite: 0\n" );
	    scanf("%d", &escolha);
	    if(escolha>=1 || escolha<=4){
			system("cls");
	    	direciona(escolha);
		}
	}while(escolha != 0);
}



