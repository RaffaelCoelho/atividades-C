#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
setlocale(LC_ALL, "portuguese");

//variaveis
int soma, nota =  0;
int contador1 = 0; // contador nota
int contador2 = 0; // contador par
int contador3 = 0; // contador impar
float numeropar;
float numeroimpar;
float resultado1;
float resultado2;
do
{
    
printf("Digite a nota:");
scanf("%d" , &nota);
soma += nota;
contador1++;

if(nota % 2 == 0)
{
numeropar += nota;
contador2++;
}

else

{
numeroimpar += nota;
contador3++;
}


} while (nota != 0);


resultado1 = numeropar/contador2;
resultado2 = soma/contador1;

//Area de exibição
printf("A quantidade de numeros pares: %d \n" , contador2);
printf("A quantidade de numeros impares: %d \n" , contador3);
printf("A media de numeros pares: %f \n" , resultado1);
printf("A media geral: %f \n" , resultado2);



return 0;
}