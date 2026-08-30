#include <math.h>
#include <locale.h> //Permite customizar a linguagem
#include <stdio.h>  //Cabeçalhos ou bibliotecas
main(){
	setlocale(LC_ALL, "Portuguese");
	float r, alt, area, vol;
	printf("Área e Volume de um Cilindro, em cm...");
	printf("\nDigite o valor do raio do cilindro, em cm:");
	scanf("%f",&r);
	printf("\nDigite o valor da altura do cilindro, em cm:");
	scanf("%f",&alt);//r² = pow(r,2)
	area = 2 * 3.14 * pow(r,2) * (alt + r);
	vol = 3.14 * pow(r,2) * alt;
	printf("\nÁrea do cilindro: %.1f cm²",area);
	printf("\nVolume do cilindro: %.1f cm³",vol);
}
