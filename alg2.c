#include <locale.h> //Permite customizar a linguagem
#include <stdio.h>  //Cabeçalhos ou bibliotecas
main(){
	setlocale(LC_ALL, "Portuguese");
	float area_base, altura, vol;
	printf("Cálculo do volume de uma pirâmide, em m");
	printf("\nDigite o valor da área da base, em m²:");
	scanf("%f",&area_base);
	printf("\nDigite o valor da altura, em m:");
	scanf("%f",&altura);
	vol = (area_base * altura) / 3;
	printf("\nO volume vale: %.2f m³",vol);	
}
