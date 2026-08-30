#include <locale.h> //Permite customizar a linguagem
#include <stdio.h>  //Cabeçalhos ou bibliotecas
main(){
	setlocale(LC_ALL, "Portuguese");
	float tc, tf;
	printf("Conversão de Temperaturas");
	printf("\nDigite uma temperatura, em °F:");
	//Leitura de variável  scanf("%tipo",&variável);
	//sendo que tipo é %d ou %i, se for inteiro
	//%f se for real e %c se for caractere
	scanf("%f",&tf);
	tc = 5 * (tf - 32) / 9;
	printf("\n%.1f °F = %.1f °C",tf,tc);
	// %.xf = x casas decimais
}
