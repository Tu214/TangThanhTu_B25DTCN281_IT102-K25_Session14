#include <stdio.h>

int timUCLN(int a, int b) {
    int temp;

    while (b != 0) {
        temp = a % b;
        a = b;        
        b = temp;     
    }
    return a;
}

int main() {
	
	int soThuNhat, soThuHai;
    printf("nhap so thu nhat:");
    scanf("%d",&soThuNhat);
    printf("nhap so thu hai:");
    scanf("%d",&soThuHai);

    int ucln;
    ucln = timUCLN(soThuNhat, soThuHai);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", soThuNhat, soThuHai, ucln);

    return 0;
}
