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

    float x;
    printf("\nnhap so thuc x:");
    scanf("%f", &x);
    int dem=0;
    for(int i=0; i<n; i++){
        if(x==a[i])
        dem++;
    }
    (dem>0)?printf("%.1f co trong mang", x):printf("%.1f khong co trong mang", x);

    float sum1=0,sum2=0;
    int dem1=0, dem2=0;
    for(int i=0; i<n; i++){
        if((int)a[i] % 2 !=0 ){
            sum1+=a[i];
            dem1++;
        } else if (i%2==0){
            sum2+=a[i];
            dem2++;
        }
    }
    printf("\nTBC cac so le trong mang: %.1f", (float)sum1/dem1);
    printf("\nTBC cac so o vi tri chan: %.1f", (float)sum2/dem2);
}