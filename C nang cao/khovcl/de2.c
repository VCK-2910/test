#include<stdio.h>

int main() {
    int n, a[100];
    do
    {
        printf("nhap so luong phan tu:");
        scanf("%d", &n);
        if (n>=50 || n<=0){
            printf("yeu cau nhap n trong khoang (0-50)\n");
        }
    } while (n>=50 || n<=0);

    for(int i=0; i<n; i++){
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
    printf("\nhien cac phan tu trong mang:\n");
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    int tong=0;
    for(int i=0; i<n; i++){
        if(i%2==0 && a[i]%5==0){
            tong+=a[i];
        }
    }
    printf("\ntong gia tri cac phan tu o vi tri chan va chia het cho 5 la %d", tong);

    printf("\nhien vi tri cac phan tu le cua mang:\n");
    for(int i=0; i<n; i++){
        if(i%2!=0)
        printf("%d ", a[i]);
    }

}