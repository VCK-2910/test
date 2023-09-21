#include<stdio.h>

int main() {
    int n; float a[100];
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
        scanf("%f", &a[i]);
    }
    printf("\nhien cac phan tu trong mang:\n");
    for(int i=0; i<n; i++){
        printf("%.1f ", a[i]);
    }

    float min=a[0];
    for(int i=0; i<n; i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("\ngia tri nho nhat cua mang: %.1f", min);
    printf("\nvi tri phan tu nho nhat trong mang :");
    for(int i=0; i<n; i++){
        if(min==a[i]){
            printf("%d", i);
        }
    }

    float x;
    int dem=0;
    printf("\nnhap x:");
    scanf("%f", &x);
    for(int i=0; i<n; i++){
        if(x==a[i]){
            dem++;
        }
    }
    if(dem>0){
        printf("%.1f co trong mang", x);
        for(int i=0; i<n; i++){
            if(x==a[i]){
                a[i]=0;
            }
        }
        printf("\nhien cac phan tu trong mang:\n");
        for(int i=0; i<n; i++){
        printf("%.1f ", a[i]);
        }
    } else{
        printf("%.1f khong co trong mang", x);
    }
}