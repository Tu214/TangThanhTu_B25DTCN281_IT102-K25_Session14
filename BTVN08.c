#include <stdio.h>
#include <stdbool.h>

int perfectNumber(int n) {
    if (n <= 0)
        return false;

    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }

    return (sum == n);
}

int main() {
    int a, b;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    if (perfectNumber(a))
        printf("%d la so hoan hao\n", a);
    else
        printf("%d khong phai la so hoan hao\n", a);

    if (perfectNumber(b))
        printf("%d la so hoan hao\n", b);
    else
        printf("%d khong phai la so hoan hao\n", b);

    return 0;
}


