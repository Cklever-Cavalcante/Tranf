#include <stdio.h>
#include <locale.h>

	int main()
	{
		setlocale(LC_ALL,"Portuguese");
		int n,m;
		
		for(n=1;n<11;n++){
			printf("Tabuada de %d:\n",n);
			for(m=1;m<11;m++){
				printf("%d x %d = %d\n",n,m,n*m);
			}
		}
		return 0;
	}