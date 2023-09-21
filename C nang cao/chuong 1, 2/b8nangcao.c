#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c;
    printf("nhap a= ");
    scanf("%f", &a);
    printf("nhap b= ");
    scanf("%f", &b);
    printf("nhap c= ");
    scanf("%f", &c);

    printf("\ncac so da nhap:\n");
    printf("nhap a= %.2f \nnhap b= %.3f \nnhap c= %f", a, b, c);
    printf("\nGia tri bieu thuc B= %f", a+c-b);


    return 0;
}