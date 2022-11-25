#include <stdio.h>

int sum_recursive(int n){
	if (n==0){
		return 0;
	}
	if (n%2==1)
		return sum_recursive(0);
	else
		return n%10 + sum_recursive(n/10);
}

int sum_cif(int n){
	int s=0;
	while (n){
		s+=n%10;
		n/=10;
	}
	return s;
}

int main(){
	int nr;
	scanf("%d",&nr);
	printf("%d\n", sum_cif(nr));
	printf("%d\n", sum_recursive(nr));
	return 0;
}