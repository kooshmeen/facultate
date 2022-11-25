#include <stdio.h>

int main(void)
{
	int nr, i, n;
	int prim = 1;
	scanf("%d",&nr);
	for (n = 1;n <= nr; n++){
		for (i = 2; i < nr; i++){
			if (nr%i==0)
				prim=0;
		}
	
		switch (n%10){
			case 1:
				printf("%d\n",n);
				break;
			case 2:
				printf("%d\n",n/10);
				break;
			case 3:
				printf("Numarul %d este prim\n", n);
				break;
			case 5:
				nr++;
				break;
			default:
				;
		}
		
	}
	return 0;
}