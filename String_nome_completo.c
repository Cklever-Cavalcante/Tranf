#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char nome[30],sobrenome[30];
	
	printf("Digite Seu Nome: ");
	scanf("%s", nome);
	//Tipo string Não usar o & na variavel Exe:"&nome"
	
	printf("Digite Seu Sobrenome: ");
	scanf("%s", sobrenome);
	
	printf("Nome Completo: %s %s\n",nome,sobrenome);
	
	return 0;
	
}