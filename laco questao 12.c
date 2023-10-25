#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
setlocale(LC_ALL, "portuguese");

//variaveis
int codigo;
char sexo;
float salario;
int idade;
int contadorsalario = 0;
int somasalario = 0;
int contadormulhersalario = 0;
float mediasalarial;

do
{
 
 fflush(stdin);
 printf("Qual seu sexo? (M/F):");
 scanf("%c" , &sexo);

 printf("Qual sua idade?");
 scanf("%d" , &idade);

 printf("Qual seu salario?");
 scanf("%f" , &salario);
 somasalario += salario;
 contadorsalario++;


 printf("deseja inserir outra pessoa? \n Digite 1 \n Se nao deseja inserir outra pessoa \n Digite 2 \n Resposta:");
 scanf("%d" , &codigo);

 if(sexo == 'F' || sexo == 'f' && salario > 5000)
 {
 contadormulhersalario++;
 }
 
}while (codigo == 1);

mediasalarial = somasalario / contadorsalario;

printf("A media salarial do grupo é: %.2f \n " , mediasalarial);
printf("A quantidade de mulheres com salario acima de 5000 é: %d \n" , contadormulhersalario);








}
