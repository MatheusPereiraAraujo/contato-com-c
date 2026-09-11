#include <stdio.h>
#include <locale.h>
main()
{
	int tempo, a, m, s, d;
	setlocale(LC_ALL, "Portuguese");
	printf("Conversão de dias a anos, meses, semanas e dias");
	printf("\nDigite um intervalo de tempo, em dias:");
	scanf("%d",&tempo);
	a = tempo / 365;
	m = (tempo % 365) / 30;
	s = ((tempo % 365) % 30) / 7;
	d = ((tempo % 365) % 30) % 7;
	printf("\n%d dias equivalem, APROXIMADAMENTE, a: ",tempo);
	printf("\n%d anos, %d meses, ",a,m);
	printf(" %d semanas e %d dias",s,d);
}
