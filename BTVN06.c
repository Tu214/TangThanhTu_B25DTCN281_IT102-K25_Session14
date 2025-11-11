#include<stdio.h>

int findMax(int arr[], int n){
	int max = arr[0];
	for(int i = 0 ; i < n ; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int main(){
	int n;
	printf("nhap so phan tu cua mang:");
	scanf("%d", &n);
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		printf("arr[%d]=", i);
		scanf("%d", &arr[i]);
	}
	int maxValue = findMax(arr,n);
	printf("gia tri lon nhat trong ham:%d", maxValue);
	
	return 0;
}
