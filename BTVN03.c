#include<stdio.h>

int calculateSum(int a, int b){
	int sum = a + b;
	return sum;
}

int main(){
	int num1 , num2 , result;
	
	printf("nhap so thu nhat:");
	scanf("%d", &num1);
	printf("nhap so thu hai:");
	scanf("%d", &num2);
	
	result = calculateSum(num1, num2);
	
	printf("%d + %d = %d", num1,num2,result);
	
	return 0;
}
