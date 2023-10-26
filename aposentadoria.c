#include <stdio.h>
#include<stdlib.h>
#include <locale.h>
int main()
{

 setlocale(LC_ALL, "portuguese");
 //Exibindo variaveis 
 int idade; // inteiro
 int codigo; // inteiro
 int anodenascimento; // inteiro
 int tempodetrabalho; // inteiro

 //solicitandoi dados 
 printf("Digite sua idade:");
 scanf("%d", &idade);

 printf("Digite o seu codigo:");
 scanf("%d", &codigo);
 
 anodenascimento = 2023 - idade;
 printf("ano de nascimento: %d" , anodenascimento);
 

 printf("\nDigite o seu tempo de trabalho:");
 scanf("%d", &tempodetrabalho);

 //operação if and else 
 if(idade >= 65 || tempodetrabalho > 30)
 {
 //Area de exibição
  printf("Pode se aposentar");  
 }
 else
 {
  printf("Não pode se aposentar");  
 }
 

}