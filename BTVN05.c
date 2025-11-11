#include<stdio.h>

int calculateFactorial(int n){
	int factorial = 1;
	for(int i = 1 ; i  <= n ; i++){
		factorial *= i;
	}
	return factorial;
}

int main(){
	int n;
	printf("nhap so nguyen:");
	scanf("%d" , &n);
	
	if(n < 0){
		printf("khong tin tai giai thua cho so am.!");
	}else{
		int result = calculateFactorial(n);
		printf("%d! = %d", n , result);
	}
	return 0;
}
