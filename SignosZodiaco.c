#include <stdio.h>
#include <locale.h>

int dia,mes,ano;


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	
	printf("Digite sua data em n�meros: \n");
	
	printf("Dia: \n");
	scanf("%d",&dia);
	printf("M�s: \n");
	scanf("%d",&mes);
	printf("Ano: \n");
	scanf("%d",&ano);
	
	if((dia>=21 && dia<=31 && mes==3) || (dia>=1 && dia<=20 && mes==4)){
		printf("\nSeu Signo � �ries!\nElemento Fogo.\n");
		}
		
		else if((dia>=21 && dia<=30 && mes==4) || (dia>=1 && dia<=20 && mes==5)){
			printf("\nSeu Signo � Touro!\nElemento Terra.\n");
		}
		
		else if((dia>=21 && dia<=31 && mes==5) || (dia>=1 && dia<=20 && mes==6)){
			printf("\nSeu Signo � G�meos!\nElemento Ar.\n");
		}
		
		else if((dia>=21 && dia<=30 && mes==6) || (dia>=1 && dia<=22 && mes==7)){
			printf("\nSeu Signo � C�ncer!\nElemento �gua.\n");
		}
		
		else if((dia>=23 && dia<=31 && mes==7) || (dia>=1 && dia<=22 && mes==8)){
			printf("\nSeu Signo � Le�o!\nElemento Fogo.\n");
		}
		
		else if((dia>=23 && dia<=30 && mes==8) || (dia>=1 && dia<=22 && mes==9)){
			printf("\nSeu Signo � Virgem!\nElemento Terra.\n");
		}
		
		else if((dia>=23 && dia<=31 && mes==9) || (dia>=1 && dia<=22 && mes==10)){
			printf("\nSeu Signo � Libra!\nElemento Ar.\n");
		}
		
		else if((dia>=23 && dia<=30 && mes==10) || (dia>=1 && dia<=21 && mes==11)){
			printf("\nSeu Signo � Escorpi�o!\nElemento �gua.\n");
		}
		
		else if((dia>=22 && dia<=31 && mes==11) || (dia>=1 && dia<=21 && mes==12)){
			printf("\nSeu Signo � Sagit�rio!\nElemento Fogo.\n");
		}
		
		else if((dia>=22 && dia<=30 && mes==12) || (dia>=1 && dia<=20 && mes==1)){
			printf("\nSeu Signo � Capric�rnio!\nElemento Terra.\n");
		}
		
		else if((dia>=21 && dia<=31 && mes==1) || (dia>=1 && dia<=18 && mes==2)){
			printf("\nSeu Signo � Aqu�rio!\nElemento Ar.\n");
		}
		
		else if((dia>=19 && dia<=29 && mes==2) || (dia>=1 && dia<=20 && mes==3)){
			printf("\nSeu Signo � Peixes!\nElemento �gua.\n");
		}else{
			printf("\nData inv�lida. \n Digite a data corretamente!\n");
		}
		
		
		return 0;
}