#include<stdio.h>
#include<math.h>

int main() {
    float a, b;
    printf("nhap a= ");
    scanf("%f", &a);
    printf("\nnhap b= ");
    scanf("%f", &b);

    printf("\ncac so da nhap:\n");
    printf("nhap a= %3.2f \nnhap b= %3.2f", a, b);

    printf("\ncac so sau khi da hoan vi:\n");
    //hoan vi khong can bien thu 3
    a = a + b;
    b = a - b;
    a = - (b - a);
    /*hoan vi voi bien thu 3
      float c;
      c = a;
      a = b;
      b = c;*/
    printf("\nnhap a= %3.2f \nnhap b= %3.2f", a, b);
    return 0;

}