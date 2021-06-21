#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
 int n1, n2, media=0;
//pedir para o usuário colocar a primeira nota 
 printf("Digite a Nota 1: ");
 scanf("%d", &n1);
//pedir para o usuário colocar a segunda nota 
 printf("Digite a Nota 2: ");
 scanf("%d", &n2);
 
//calculando média...
 media = (n1 + n2)/2;

//se for maior ou igual a 7,'aluno aprovado', se for menor 'aluno reprovado'.
 if (media >= 7)
 {
     printf("Aluno Aprovado");
 }
 
 if (media ==4){
     
     printf("Aluno em exame");
 }
 
  if (media ==5){
     
     printf("Aluno em exame");
 }
 
  if (media ==6){
     
     printf("Aluno em exame");
 }
 
  if (media <4){
     
     printf("Aluno Reprovado");
 }
    
    return 0;
}
