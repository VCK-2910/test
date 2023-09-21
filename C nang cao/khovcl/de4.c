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

    float t;
    for(int i=0; i<n;i++){
        for(int j=i+1; j<n;j++){
            if(a[i]<a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\nhien cac phan tu trong mang theo gia tri giam dan:\n");
    for(int i=0; i<n; i++){
        printf("%.1f ", a[i]);
    }

    float sum=0;
    int dem=0;
    for(int i=0; i<n; i++){
        if(a[i]>0){
            sum+=a[i];
            dem++;
        }
    }
    printf("\ntrung binh cong cac phan tu duong trong mang: %.1f", (float)sum/dem);
}