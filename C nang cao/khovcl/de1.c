#include<stdio.h>

int main() {
    int n, a[100];
    do {
        printf("\nnhap so luong phan tu:");
        scanf("%d", &n);
        if (n>=50 || n<=0)
            printf("yeu cau nhap n trong khoang (0-50)");
    } while (n>=50 || n<=0);

    for(int i=0; i<n; i++){
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
    printf("\nhien cac phan tu trong mang:\n");
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    
    printf("\ncac so duong va chan co trong mang:\n");
    for(int i=0; i<n; i++){
        if(a[i]>0 && a[i]%2==0){
            printf("%d ", a[i]);
        }
    }

    int max=a[0];
    for(int i=0; i<n; i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("\nso lon nhat la %d", max);
    printf("\nvi tri cua so lon nhat trong mang la: ");
    for(int i=0; i<n; i++){
        if(max==a[i]){
            printf("%d  ",i);
        }
    }    

}