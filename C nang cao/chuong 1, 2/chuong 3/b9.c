#include<stdio.h>

int main () {
    float a, b;
    printf("nhap a: "); scanf("%f", &a);
    printf("nhap b: "); scanf("%f", &b);

    if(a>0 && b>0 && a!=b){
        printf("chu vi hinh chu nhat: %.1f", (a+b)*2);
        printf("\ndien tich hinh chu nhat: %.1f", a*b);
    } else {
        printf("do dai %.1f va %.1f khong the tao thanh hinh chu nhat",a, b);
    }
}
