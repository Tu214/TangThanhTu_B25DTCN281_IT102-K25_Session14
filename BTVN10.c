#include <stdio.h>
#define MAX 100

void nhapMang(int a[], int *n) {
    printf("Nhap so phan tu: "); scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void inMang(int a[], int n) {
    if (n == 0) { printf("Mang rong!\n"); return; }
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

void them(int a[], int *n, int vt, int gt) {
    if (vt < 0 || vt > *n || *n >= MAX) return;
    for (int i = *n; i > vt; i--) a[i] = a[i-1];
    a[vt] = gt; (*n)++;
}

void sua(int a[], int n, int vt, int gt) {
    if (vt < 0 || vt >= n) return;
    a[vt] = gt;
}

void xoa(int a[], int *n, int vt) {
    if (vt < 0 || vt >= *n) return;
    for (int i = vt; i < *n - 1; i++) a[i] = a[i+1];
    (*n)--;
}

void sapXep(int a[], int n, int tang) {
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if ((tang && a[i] > a[j]) || (!tang && a[i] < a[j])) {
                int t = a[i]; a[i] = a[j]; a[j] = t;
            }
}

int timTuyenTinh(int a[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (a[i] == x) return i;
    return -1;
}

int timNhiPhan(int a[], int n, int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) return m;
        if (a[m] < x) l = m + 1; else r = m - 1;
    }
    return -1;
}

int main() {
    int a[MAX], n = 0, chon;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap mang\n2. In mang\n3. Them\n4. Sua\n5. Xoa\n6. Sap xep\n7. Tim kiem\n8. Thoat\nChon: ");
        scanf("%d", &chon);
        switch(chon) {
            case 1:
                nhapMang(a, &n); break;
            case 2:
                inMang(a, n); break;
            case 3: {
                int vt, gt;
                printf("Nhap vi tri, gia tri: ");
                scanf("%d%d", &vt, &gt);
                them(a, &n, vt, gt);
                break;
            }
            case 4: {
                int vt, gt;
                printf("Nhap vi tri, gia tri moi: ");
                scanf("%d%d", &vt, &gt);
                sua(a, n, vt, gt);
                break;
            }
            case 5: {
                int vt;
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &vt);
                xoa(a, &n, vt);
                break;
            }
            case 6: {
                int k;
                printf("1. Tang dan\n2. Giam dan\nChon: ");
                scanf("%d", &k);
                sapXep(a, n, k == 1);
                break;
            }
            case 7: {
                int k, x, kq;
                printf("1. Tuyen tinh\n2. Nhi phan\nChon: ");
                scanf("%d", &k);
                printf("Nhap gia tri can tim: ");
                scanf("%d", &x);
                kq = (k == 1) ? timTuyenTinh(a, n, x) : timNhiPhan(a, n, x);
                if (kq == -1) printf("Khong tim thay!\n");
                else printf("Tim thay tai vi tri %d\n", kq);
                break;
            }
            case 8:
                printf("Thoat chuong trinh.\n"); break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while(chon != 8);
}

