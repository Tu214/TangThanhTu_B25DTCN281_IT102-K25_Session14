#include<stdio.h>
#include<stdbool.h>
int isPrime(int n){
	if(n < 2){
		return false;
	}
	for(int i = 2 ; i*i < n ; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	printf("nhap so nguyen:");
	scanf("%d", &n);
	
	if(isPrime(n)){
		printf("%d la so nguyen to",n);
	}else{
		printf("khong phai so nguyen to");
	}
	return 0;
}
