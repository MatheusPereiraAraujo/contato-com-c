#include <stdio.h>
#include <locale.h>
main()
{
	int saque, n100, n50, n20, n10, n5, n2;
	setlocale(LC_ALL, "Portuguese");
	printf("Saque em Caixa Eletrônico");
	printf("\nDigite o saque desejado, em R$: ");
	scanf("%d",&saque);
	n100 = saque / 100;
	n50 = (saque % 100) / 50;
	n20 = ((saque % 100) % 50) / 20;
	n10 = (((saque % 100) % 50) % 20) / 10;
	n5 = ((((saque % 100) % 50) % 20) % 10) / 5;
	n2 = (((((saque % 100) % 50) % 20) % 10) % 5) / 2;
	printf("\nUm saque de R$ %d nos dá:",saque);
	printf("\n%d notas de 100, %d notas de 50",n100,n50);
	printf("\n%d notas de 20, %d notas de 10",n20,n10);
	printf("\n%d notas de 5 e %d notas de 2",n5,n2);
}
