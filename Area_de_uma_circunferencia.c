#include <stdio.h>
#include <locale.h>
#define PI 3.14159

int main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	float raio,area;
	
	printf("Raio da Circunferência?");
	scanf("%f",&raio);
	
	area=PI*raio*raio;
	printf("Circulo:\n Raio:%.2f\n Area:%.2f\n",raio,area);
	
	return 0;
	
}