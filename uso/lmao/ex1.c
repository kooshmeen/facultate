#include <stdio.h>

int factorial_iterativ(int n){
	int fact=1;
	while (n>1){
		fact*=n;
		n--;
	}
	return fact;
}

int factorial_recursiv(int n){
	if (n==1){
		return 1;
	}
	return n*factorial_recursiv(n-1);
}

int suma_cifre_iterativ (int n){
	int s=0;
	while (n){
		s+=n%10;
		n/=10;
	}
	return s;
}

int suma_cifre_recursiv(int n){
	if (n==0){
		return 0;
	}
	return n%10 + suma_cifre_recursiv(n/10);
}

int este_prim (int n){
	int d=2;
	if (n==0 || n==1)
		return 0;
	while (d*d<=n){
		if (n%d==0)
			return 0;
	}
	return 1;
}

int este_palindrom (int n){
	int copie_n=n, nrcif=0, i=0;
	char cif[10];
	while (copie_n){
		nrcif++;
		n/=10;
		copie_n/=10;
	}
	for (i=0;i<=nrcif/2;i++){
		if (cif[i]!=cif[nrcif-i-1]){
			return 0;
		}
	}
	return 1;
}

void nrdiv_palindrom(int n){
	int nrdiv=0,d;
	for (d=1;d<=n/2;d++){
		if (n%d==0){
			if (este_palindrom(d)){
				nrdiv++;
				printf("%d, ", d);
			}
		}
	}
	printf("\n%d",nrdiv);
}

int main(){
	
	int n;
	scanf("%d", &n);
	nrdiv_palindrom(n);
	
	return 0;
}