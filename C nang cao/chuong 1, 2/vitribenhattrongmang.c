#include<stdio.h>
//tim vi tri so be nhat nam trong mang da nhap
int main() {
    int n, a[100];
    printf("nhap so luong phan tu:");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("a[%d]=",i);
        scanf("%d", &a[i]);
    }
    int min=a[0];
    for(int i=0; i<n; i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("min=%d", min);
    printf("\nvi tri so be nhat la\n");
    for(int i=0; i<n; i++){
        if(a[i] == min){
            printf("%d ", i);
        }
    }
}