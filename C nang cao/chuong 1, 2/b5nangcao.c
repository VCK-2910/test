#include<stdio.h>
#include<math.h>

int main() {
    float a;
    printf("nhap a=");
    scanf("%f", &a);

    printf("so da nhap a= %8.4f", a);
    float sum = 5*fabs(a) - pow(a,5);
    printf("\ngia tri bieu thuc B= %f", sum);
    return 0;

}