#include<stdio.h>

void printfArr(int arr[] , int n){
	for (int i = 0 ; i < n ; i++){
		printf("%d | ", arr[i]);
	}
}
int main(){
	int n;
	int arr[n];
	printf("nhap so phan tu cua mang:");
	scanf("%d", &n);
	for(int i = 0 ; i < n ; i++){
		printf("arr[%d]=",i);
		scanf("%d", &arr[i]);
	}
	printfArr(arr,n);
	return 0;
}
