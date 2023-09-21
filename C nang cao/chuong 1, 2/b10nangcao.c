#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main() {
    float a;
    printf("nhap a= ");
    scanf("%f", &a);

    printf("So da nhap a= %4.3f", a);
    printf("\nChu vi hinh tron ban kinh %f la P= %f", a, 2*a*pi);
    printf("\nDien tich hinh tronban kinh %f la S= %f", a, pow(a,2)*pi);

    return 0;
}