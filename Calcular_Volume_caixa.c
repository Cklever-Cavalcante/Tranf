#include <stdio.h>

int main()
{
	int a,l,p,v;
	
	printf("Largura: ");
	scanf("%d",&l);
	
	printf("Profundidade: ");
	scanf("%d", &p);
	
	printf("Altura: ");
	scanf("%d", &a);
	
	v=l*p*a;
	
	printf("Volume: %d",v);
	
	system("pause");
	return 0;
}