#include <locale.h> //Permite customizar a linguagem
#include <stdio.h>  //Cabeçalhos ou bibliotecas
//stdio = Standard Input Output - E/S Padrão
//.h - extensão relativa a header (cabeçalho)
main(){
   setlocale(LC_ALL, "Portuguese"); //Para português
   //printf - escreve algum texto na tela
   printf("Este é meu primeiro programa em C\n");		
   //\n - pular linha e \t - TAB (8 espaços em branco)
   printf("Mais uma \nlinha criada em \t Linguagem \tC\n");
   printf("Progrediremos\npouco a \t pouco \n nesta linguagem");
}
