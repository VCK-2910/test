#include<stdio.h>
#include<math.h>

int main() {
    float a, sum = 0;
    printf("nhap a= ");
    scanf("%f", &a);

    printf("\nso da nhap a= %4.4f", a);
    sum = 5*pow(a,3) - cos(3*pow(a,2));
    printf("\nGia tri bieu thuc B= %f", sum);
    return 0;
}