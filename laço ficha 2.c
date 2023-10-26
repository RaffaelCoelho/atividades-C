#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
setlocale(LC_ALL, "portuguese");

//variaveis
int codigo;
float salario;
int filhos;
int contadorsalario = 0;
int somasalario = 0;
int contadorfamilias = 0;
float mediasalarial;
float mediadefilhos;
float maiorsalario = 0;
float menorsalario = 500000000000000;

//laço
do
{

 fflush(stdin);
 
 printf("\nQuantos filhos você tem?");
 scanf("%d" , &filhos);
 contadorfamilias++;

 printf("\nQual seu salario?");
 scanf("%f" , &salario);
 somasalario += salario;
 contadorsalario++;


 printf("\ndeseja inserir outra familia? \n Digite 1 \n Se nao deseja inserir outra pessoa \n Digite 2 \n Resposta:");
 scanf("%d" , &codigo);

 if (salario > maiorsalario){
   maiorsalario = salario;
 }

 if (salario < menorsalario){
   menorsalario = salario;
 }

 
}while (codigo == 1);

//Area de exibiçãoo
mediasalarial = somasalario / contadorsalario;
mediadefilhos = filhos / contadorfamilias;


printf("\nA quantidade de familias que respondeu a pesquisa foi: %d \n " , contadorfamilias);
printf("A media salarial do grupo é: %.2f \n " , mediasalarial);
printf("A media do numnero de filhoa é %.2f \n" , mediadefilhos);
printf("O menor salario  é: %.2f \n" , maiorsalario);
printf("O menor salario é: %.2f \n" , menorsalario);


}